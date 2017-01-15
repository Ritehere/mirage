//THIS FUNCTION IS INTERNAL - DO NOT USE STANDALONE
if !(canSuspend) exitWith { ["createPatrolVehicle: this function requires scheduling to work."] call BIS_fnc_error };
params 
[
    ["_bInfo",[],[[]]], 
    ["_side", west,[sideUnknown]],
    ["_vehType", "C_Offroad_01_F", ["STRING"]],
    ["_spawnRange", 1000,[0]],
    ["_customGear", [false,false,[]],[[]],3],
    ["_parentSector", objNull, [objNull]]
];
if (count _bInfo == 0) exitWith { ["createSectorPatrolVehicle: Behaviour info is empty, aborting"] call BIS_fnc_error };

_basePos = ((_bInfo select 0) select 0);
_crewGear = (_customGear select 0);
_vehicleGear = (_customGear select 1);
_vehicleGearParams = (_customGear select 2);
_dir = ((_bInfo select 0) select 1);
 
waitUntil { { (_x distance _basePos) < _spawnRange } count allPlayers > 0 };

_veh = ([_basePos, _dir, _vehType, _side] call BIS_fnc_spawnVehicle);

_wpStorage = (_bInfo select 1);
_vehGrp = (_veh select 2);
{
    _wWp = _vehGrp addWaypoint[(_x select 0) select 0, 0];
    _wWp setWaypointCompletionRadius ((_x select 0) select 1);
    _wWp setWaypointType (_x select 1);
    _wWp setWaypointFormation (_x select 2);
    _wWp setWaypointSpeed (_x select 3);
    _wWp setWaypointBehaviour (_x select 4);
} forEach _wpStorage;

if (_crewGear) then { { [_x, typeOf _x, true] call Xeno_fnc_loadInventory; } foreach (units (_veh select 2))};
if (_vehicleGear) then { _vehicleGearParams call Xeno_fnc_vehicleGear };

["unscheduledGC",[(_veh select 2)]] call Xeno_fnc_GC;
if !(isNil "_parentSector") then
{
    (_parentSector getVariable "sectorAIVehicles") pushBack _vehGrp;
};

