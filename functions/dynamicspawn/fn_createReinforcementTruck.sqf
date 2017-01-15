/*
    Author: Xeno

    Description: Creates a reinforcement truck

    Params:
    0: Position
    1: Caller
    2: Vehicle Classname
    3: Group (CfgGroups entry)

    Returns:
    Truck
*/

params
[
    ["_pos", [0,0,0], [[]]],
    ["_caller", objNull,[objNull]],
    ["_vehicle", selectRandom(Xeno_defaultVeh),["STRING"]],
    ["_group", selectRandom(Xeno_default),[[],configNull]]
];

if (isNull _caller) exitWith { ["createBackupVehicle: Caller is null, aborting"] call BIS_fnc_error };
if !(isServer) exitWith {};
private _roads = _pos nearRoads 150;
private _road = _pos;


_rdir = (360-(_caller getRelDir _pos));
_veh = [_road, _rdir, _vehicle, (side _caller)] call BIS_fnc_spawnVehicle;
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

private _grp = [_road, (side _caller), _group] call BIS_fnc_spawnGroup;

{
    _x moveInAny (_veh select 0);
} forEach units _grp;

(_veh select 0) setUnloadInCombat [true, true];
_callerPos = (_caller nearRoads 2500);
_callerDistanceAsc = +_callerDistance;
_callerDistanceAsc sort true;
_callerPos = getPos (_callerPos select (_callerDistance find (_callerDistanceAsc select 0)));

private _tg = (_veh select 2);
_wp0 = _tg addWaypoint [_callerPos, 0];
_wp1 = _tg addWaypoint [getWPPos _wp0, 0];
_wp1 setWaypointType "TR UNLOAD";
_wp2 = _tg addWaypoint [_road, 10];
_wp3 = _tg addWaypoint [getWPPos _wp2, 0];
_wp3 setWaypointStatements ["true", "deleteVehicle (vehicle this); deleteVehicle this"];
_wpG = _grp addWaypoint [getPos _caller, 0];
_wpG setWaypointType "GUARD";
["unscheduledGC",[_grp]] call Xeno_fnc_GC;
["unscheduledGC",[_tg]] call Xeno_fnc_GC;

(_veh select 0);
