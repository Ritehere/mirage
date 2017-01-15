if !(canSuspend) exitWith { ["destroyGroup: this function requires scheduling to work."] call BIS_fnc_error };
params ["_group", "_condition"];

waitUntil _condition;
{ deleteVehicle _x } foreach (units _x);
deleteGroup _x;
