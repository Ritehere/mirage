if !(canSuspend) exitWith { ["createPatrolVehicle: this function requires scheduling to work."] call BIS_fnc_error };
params 
[
    ["_trigger", objNull, [[]],2],
    ["_side", west,[sideUnknown]],
    ["_vehType", "C_Offroad_01_F", ["STRING"]],
    ["_spawnRange", 1000,[0]],
    ["_customGear", [false,false,[]],[[]],3]
];

if !(_trigger isKindOf "EmptyDetector") exitWith { ["createPatrolVehicle: Target object is not a trigger"] call BIS_fnc_error };

_basePos = position _trigger;
_crewGear = (_customGear select 0);
_vehicleGear = (_customGear select 1);
_vehicleGearParams = (_customGear select 2);
_dir = (triggerArea _trigger) select 2;
if (_dir < 0) then {_dir = 360 + _dir};
_dir = _dir - 90;

_wpPath = group ((synchronizedObjects _trigger) select 0);	// synchronized civilian unit is used as waypoint storage

deleteVehicle ((synchronizedObjects _trigger) select 0);
deleteVehicle _trigger;

waitUntil { { (_x distance _basePos) < _spawnRange } count allPlayers > 0 };

_veh = ([_basePos, _dir, _vehType, _side] call BIS_fnc_spawnVehicle);

//if (typeOf (_veh select 0) == "O_LSV_02_armed_F") then { (_veh select 0) addMagazine "2000Rnd_65x39_Belt_Tracer_Red" }; //fixing ace bugs

(_veh select 2) copyWaypoints _wpPath;
if (_crewGear) then { { [_x, typeOf _x, true] call Xeno_fnc_loadInventory; } foreach (units (_veh select 2))};

["unscheduledGC",[(_veh select 2)]] call Xeno_fnc_GC;

if (_vehicleGear) then { _vehicleGearParams call Xeno_fnc_vehicleGear };

_veh 