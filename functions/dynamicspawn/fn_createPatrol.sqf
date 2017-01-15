if !(canSuspend) exitWith { ["createPatrols: this function requires scheduling to work."] call BIS_fnc_error };
params
[
    ["_center", objNull, [objNull,[],""]], 
    ["_radius", 300, [0]], 
    ["_amount", 1, [0]],
    ["_side", west,[sideUnknown]],
    ["_basePatrols", Xeno_default, [[]]],
    ["_specialPatrols", Xeno_default, [[]]],
    ["_elitePatrols", Xeno_default, [[]]],
    ["_customLoadout", false, [false]],
    ["_spawnDistance", [400,1000],[[]],2],
    ["_rates", [30,5],[[]],2],
    ["_patrolRadius",400,[0]],
    ["_desertTime", 600, [0]],
    ["_condition", {true}, [[]]],
    ["_parentSector", objNull, [objNull]]
];

_basePos = [0,0,0];
switch (typeName _center) do
{
    case "STRING": { _basePos = getMarkerPos _center };
    case "OBJECT": { _basePos = getPos _center };
    case "ARRAY": { _basePos = _center };
    default { ["createPatrols: undefined center"] call BIS_fnc_error };
};
_rad = _radius;
_rangeMin = _spawnDistance select 0;
_rangeMax = _spawnDistance select 1;

_chanceSpecial = _rates select 0;
_chanceElite = _rates select 1;
while _condition do
{
    waitUntil { sleep 0.1; ({(_x distance _basePos) < (_rangeMax + _rad) && (_x distance _basePos) >= (_rangeMin + _rad) && !((vehicle _x) isKindOf "Air") } count allPlayers > 0) && ({side _x == _side && _x getVariable["dynaSpawnGroup", false]} count allGroups < Xeno_groupLimit) };

    private _grpArray = [];

    for [{_i = 1}, {_i <= _amount}, {_i = _i + 1}] do 
    {
     
        _pos = [_basePos, random _rad, random 360] call BIS_fnc_relPos;
        private _newGrp = grpNull;
        
        if (random 1 > 1-(_chanceSpecial/100)) then //Special Patrol
        {   
            if (random 1 > 1-(_chanceElite/100)) then //Elite Team
            {
                _newGrp = [_pos, _side, (selectRandom _elitePatrols), [], [], [0.2, 0.5]] call BIS_fnc_spawnGroup;
            }
            else
            {
                _newGrp = [_pos, _side, (selectRandom _specialPatrols), [], [], [0.2, 0.5]] call BIS_fnc_spawnGroup;
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
        _wps = (1+ceil random(5));
        for [{ _k = 0 }, { _k < _wps }, { _k = _k + 1 }] do
        {
            _wp = _newGrp addWaypoint [getPos (leader _newGrp), _patrolRadius];
            _wp setWaypointType "MOVE";
            _wp setWaypointSpeed "LIMITED";
            _wp setWaypointBehaviour "SAFE";
        };
        _wp = _newGrp addWaypoint [waypointPosition [_newGrp, 1], 0];
        _wp setWaypointType "CYCLE";
        
        _newGrp setVariable["dynaSpawnGroup", true];
        ["unscheduledGC",[_newGrp]] call Xeno_fnc_GC;
        _grpArray pushBack _newGrp;
    };

    if !(isNull _parentSector) then
    {
        (_parentSector getVariable ["sectorAIGroups", []]) pushBack _grpArray;
    };
    private _desertTime = -1;
    waitUntil 
    { 
        if({ (_x distance _basePos) < (_rangeMax + _rad) && (_x distance _basePos) >= (_rangeMin + _rad) } count allPlayers == 0) then
        {  
            if (_desertTime == -1) then { _desertTime = (time + _desertThreshold) };
            time > _desertTime;
        }
        else
        {
            _desertTime = -1;
            false;
        };
    };

    {
        {
            deleteVehicle _x;
        } foreach (units _x);
        deleteGroup _x;
    } foreach _grpArray;    
};