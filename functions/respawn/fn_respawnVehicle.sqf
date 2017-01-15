params ["_vehicle"];

private _timestamp = (time + (_vehicle getVariable "Xeno_respawnDelay"));
waitUntil { time > _timestamp };

private _newVeh = createVehicle[typeOf _vehicle, (_vehicle getVariable "Xeno_respawnPosition"), [], 0, "NONE"];
_newVeh setDir (_vehicle getVariable "Xeno_respawnDirection");

deleteMarker (missionNamespace getVariable format["Xeno_deathMarker%1", (_vehicle getVariable "Xeno_vehNumber")]);

_newVeh setVariable ["Xeno_respawnVehicle", true, true];
_newVeh setVariable ["Xeno_vehNumber", (_vehicle getVariable "Xeno_vehNumber")];
_newVeh setVariable ["Xeno_respawnDelay", (_vehicle getVariable "Xeno_respawnDelay")];
_newVeh setVariable ["Xeno_respawnPosition", (_vehicle getVariable "Xeno_respawnPosition")];
_newVeh setVariable ["Xeno_respawnDirection", (_vehicle getVariable "Xeno_respawnDirection")];
_newVeh setVariable ["Xeno_cv_side", (_vehicle getVariable "Xeno_cv_side")];
_newVeh addEventHandler["Killed", { (_this select 0) spawn Xeno_fnc_respawnVehicle }];

[(_vehicle getVariable "Xeno_cv_side"), _newVeh, (_newVeh getVariable "Xeno_vehNumber")] spawn Xeno_fnc_attachRespawnMarker;

_newVeh
