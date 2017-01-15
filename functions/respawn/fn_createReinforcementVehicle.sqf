/*

	Description:
	Creates a respawn position on a vehicle

*/
params ["_vehClass", "_side", "_position", "_direction", "_allowRespawn", "_respawnDelay", "_respawnPos"];
if !(isServer) exitWith {};
if (isNil "Xeno_cv_amount") then { Xeno_cv_amount = 0; };

switch (typeName _position) do
{
    case "OBJECT": { _position = getPos _position; };
    case "ARRAY": {};
    case "STRING": { _position = getMarkerPos _position; };
    case "LOCATION": { _position = position _position; };
    default { _position = getPos _position; };
};

switch (typeName _respawnPos) do
{
    case "OBJECT": { _respawnPos = getPos _respawnPos; };
    case "ARRAY": {};
    case "STRING": {
        switch (_respawnPos) do
        {
            case "original": {
                _respawnPos = _position;
            };
            default {
                _respawnPos = getMarkerPos _respawnPos;
            };
        };
    };
};

private _vehicle = createVehicle[_vehClass, _position, [], 0, "NONE"];
_vehicle setDir _direction;

_vehicle setVariable["Xeno_respawnVehicle", true, true];
_vehicle setVariable["Xeno_vehNumber", Xeno_cv_amount];
_vehicle setVariable["Xeno_cv_side", _side];

if (_allowRespawn) then
{
    _vehicle setVariable["Xeno_respawnDelay", _respawnDelay];
    _vehicle setVariable["Xeno_respawnPosition", _respawnPos];
    _vehicle setVariable["Xeno_respawnDirection", getDir _vehicle];
    _vehicle addEventHandler["Killed", { (_this select 0) spawn Xeno_fnc_respawnVehicle }];
};

[_side, _vehicle, Xeno_cv_amount] spawn Xeno_fnc_attachRespawnMarker;

Xeno_cv_amount = (Xeno_cv_amount + 1);

_vehicle
