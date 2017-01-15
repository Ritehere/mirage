if !(canSuspend) exitWith { ["createGarrison: this function requires scheduling to work."] call BIS_fnc_error };
params
[
    ["_basePos", [0,0,0], [[],"STRING",objNull]],
    ["_rad", 100, [0]], 
    ["_side", west, [sideUnknown]],
    ["_classes", selectRandom(Xeno_default), [[]]],
    ["_customGear", false,[false]],
    ["_buildingBlacklist", [],[[]]],
    ["_buildingOccupation", 0.5,[0]],
    ["_maxUnits", 20,[0]],
    ["_condition", { true }, [{}]]
];

switch (typeName _basePos) do
{
    case "ARRAY": {};
    case "STRING": { _basePos = getMarkerPos _basePos };
    case "OBJECT": { _pos = getPos _basePos; deleteVehicle _basePos; _basePos = _pos };
};

if (typeName _condition != "CODE") then { _condition = { true } };

waitUntil _condition;
//waitUntil { {side _x == _side} count allGroups < 70 };

private _buildings = _basePos nearObjects["House", _rad];
if (count _buildings == 0) exitWith { ["createGarrison: No buildings found"] call BIS_fnc_error };
private _finalGrp = (createGroup _side);
scopeName "mainScope";
{
    scopeName "garrisonLoop";
    private _building = _x;
    private _positions = [_x] call BIS_fnc_buildingPositions;
    private _count = count _positions;
    private _rpositions = []; 
    for[{_i = 0}, {_i < _count}, { _i = _i + 1 }] do 
    { 
        private _e = (selectRandom _positions);        
        _rpositions pushBack _e; 
        _positions deleteAt(_positions find _e); 
    };
    _rpositions resize (ceil ((count _rpositions) * _buildingOccupation));
    {
        scopeName "unitLoop";
        if (typeof _building in _buildingBlacklist) then { breakTo "garrisonLoop" };
        if (count (units _finalGrp) >= _maxUnits) then { breakOut "unitLoop" };
        _soldier = _finalGrp createUnit[(selectRandom _classes), _x, [], 0, "NONE"];
        _soldier setPosATL _x;
        _soldier setUnitPos "UP";
        _soldier forceSpeed 0;
        if (_customGear) then { [_soldier, typeOf _soldier, true] call Xeno_fnc_loadInventory };
        
    } foreach _rpositions;
} forEach _buildings;

if (count (units _finalGrp) < 1) then { deleteGroup _finalGrp } else { ["unscheduledGC",[_finalGrp]] call Xeno_fnc_GC; };

_finalGrp 