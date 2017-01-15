/*
    Author: Xeno

    Description: Creates a backup vehicle
    This function is usually called from relevant FSMs.
    
    Params:
    0: Position
    1: Caller
    2: Vehicle Classname
    3: Add Cargo (bool)
    4: Group (either CfgGroups entry or Array of units)

    Returns:
    Vehicle
*/

params
[
    ["_pos", [0,0,0], [[]]],
    ["_caller", objNull,[objNull]],
    ["_vehicle", selectRandom(Xeno_defaultVeh),["STRING"]],
    ["_addCargo", true, [false]],
    ["_group", selectRandom(Xeno_default),[[],configNull]]
];

if (isNull _caller) exitWith { ["createBackupVehicle: Caller is null, aborting"] call BIS_fnc_error };
if !(isServer) exitWith {};
//private _roads = _pos nearRoads 150;
private _road = _pos;

if (typeName _group == "ARRAY") then
{
    _group = selectRandom _group;
};

_rdir = (360-(_caller getRelDir _pos));
_veh = [_road, _rdir, _vehicle, (side _caller)] call BIS_fnc_spawnVehicle;
private "_grp";
if (_addCargo) then
{
    _seats = { isNull(_x select 0) } count (fullCrew[(_veh select 0), "", true]);
    switch (typeName _group) do
    {
        case "CONFIG": 
        { 
            private _grp = "true" configClasses _group; 
            if (count _grp > _seats) then
            {
                _groupArray = (_grp apply { getText(_x >> "vehicle") });
                _groupArray resize _seats;
                _groupArray = _group;
            };
        };
        case "ARRAY":
        {
            if (count _group > _seats) then
            {
                _group resize _seats;
            };
        };
    };
    _grp = [_road, (side _caller), _group] call BIS_fnc_spawnGroup;
    {
        _x moveInAny (_veh select 0);
    } forEach units _grp;

    (_veh select 0) setUnloadInCombat [true, true];
};

_callerPos = (_caller nearRoads 2500);
_callerDistance = ((_caller nearRoads 2500) apply { _caller distance2D _x });
_callerDistanceAsc = +_callerDistance;
_callerDistanceAsc sort true;
_callerPos = getPos (_callerPos select (_callerDistance find (_callerDistanceAsc select 0)));

private _tg = (_veh select 2);
_wp0 = _tg addWaypoint [_callerPos, 0];
if (_addCargo) then
{
    _wp1 = _tg addWaypoint [getWPPos _wp0, 0];
    _wp1 setWaypointType "TR UNLOAD";
    _wpG = _grp addWaypoint [_callerPos, 0];
    _wpG setWaypointType "GUARD";
};
_wp2 = _tg addWaypoint [getPos _caller, 0];
_wp2 setWaypointType "GUARD";

["unscheduledGC",[_grp]] call Xeno_fnc_GC;
["unscheduledGC",[_tg]] call Xeno_fnc_GC;

(_veh select 0);
