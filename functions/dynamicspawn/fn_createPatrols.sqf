if !(canSuspend) exitWith { ["createPatrols: this function requires scheduling to work."] call BIS_fnc_error };
params
[
    ["_trigger", [objNull, false], [[]],2], 
    ["_amount", 1, [0]],
    ["_side", west,[sideUnknown]],
    ["_basePatrols", Xeno_default, [[]]],
    ["_extPatrols", Xeno_default, [[]]],
    ["_specialPatrols", Xeno_default, [[]]],
    ["_guardChance", 0.5, [0]],
    ["_customLoadout", false, [false]],
    ["_rates", [0.5,0.5],[[]],2],
    ["_spawnDistance", [500,1500],[[]],2],
    ["_gc", [false, { false }], [[]], 2],
    ["_parentSector", objNull, [objNull]]
];

if !((_trigger select 0) isKindOf "EmptyDetector") exitWith { ["createPatrols: Target object is not a trigger"] call BIS_fnc_error };
_basePos = position (_trigger select 0);
_rad = (triggerArea (_trigger select 0)) select 0;
if (_trigger select 1) then { deleteVehicle (_trigger select 0) };

_chanceSpecial = _rates select 0;
_chanceWeapon = _rates select 1;

_rangeMin = _spawnDistance select 0;
_rangeMax = _spawnDistance select 1;


waitUntil { {(_x distance _basePos) < (_rangeMax + _rad) && (_x distance _basePos) >= (_rangeMin + _rad) && !((vehicle _x) isKindOf "Air") } count allPlayers > 0 };
waitUntil { {side _x == _side && _x getVariable["dynaSpawnGroup", false]} count allGroups < Xeno_groupLimit };

private _grpArray = [];

for [{_x = 1}, {_x <= _amount}, {_x = _x + 1}] do 
{
 
    _pos = [_basePos, random _rad, random 360] call BIS_fnc_relPos;
    _newGrp = grpNull;
    
    if (random 1 > _chanceSpecial) then //Special Patrol
    {   
        if (random 1 > _chanceWeapon) then //Weapon Team
        {
            _newGrp = [_pos, _side, (selectRandom _specialPatrols), [], [], [0.2, 0.5]] call BIS_fnc_spawnGroup;
        }
        else
        {
            _newGrp = [_pos, _side, (selectRandom _extPatrols), [], [], [0.2, 0.5]] call BIS_fnc_spawnGroup;
        };
    } 
    else 
    {
        _newGrp = [_pos, _side, (selectRandom _basePatrols), [], [], [0.2, 0.5]] call BIS_fnc_spawnGroup;
    };
    
    [(leader (_newGrp))] execFSM "fsm\panicbutton.fsm";
    if (_customLoadout) then 
    {
        {
            [_x, typeOf _x, true] call Xeno_fnc_loadInventory;
        } foreach (units _newGrp);
    };
    if ((random 1) > _guardChance) then 
    {    
        _wp = _newGrp addWaypoint [position leader _newGrp, 0];
        _wp setWaypointType "GUARD";
    } 
    else
    {
        {
            _wp = _newGrp addWaypoint [_basePos, _rad];
            _wp setWaypointType "MOVE";
            _wp setWaypointSpeed "LIMITED";
            _wp setWaypointBehaviour "SAFE";
        } forEach [1, 2, 3, 4, 5];
        _wp = _newGrp addWaypoint [waypointPosition [_newGrp, 1], 0];
        _wp setWaypointType "CYCLE";
    };
    _newGrp setVariable["dynaSpawnGroup", true];
    ["unscheduledGC",[_newGrp]] call Xeno_fnc_GC;
    if (_gc select 0) then
    {
        [_newGrp, (_gc select 1)] spawn Xeno_fnc_destroyGroup;
    };
    _grparray pushBack _newGrp;
};

if !(isNull _parentSector) then
{
    _parentSector setVariable ["sectorAIGroups", _grpArray];
};
