if !(canSuspend) exitWith { ["createStaticVehicle: this function requires scheduling to work."] call BIS_fnc_error };
params
[
    ["_pos", [0,0,0],[[],objNull]],
    ["_dir", 90,[0]],
    ["_classes", Xeno_defaultVeh, [[]]],
    ["_chance", 0.5,[0]],
    ["_spawnDistance", 1000,[0]],
    ["_fuel", 1,[0]],
    ["_ammo", 1,[0]],
    ["_customInventory",[false],[]]
];


if (_dir < 0) then {_dir = 360 + _dir};

if (typeName _pos == "OBJECT") then { deleteVehicle _pos; _basePos = position _pos; } else { _basePos = _pos; };

if (random 1 >= _chance) then 
{
    waitUntil {{(_x distance _basePos) < _spawnDistance} count allPlayers > 0};
    _veh = (selectRandom _classes) createVehicle _basePos;
    _veh setFuel _fuel;
    _veh setVehicleAmmo _ammo;
    _veh setDir _dir;
    _veh setVelocity [0, 0, -1];
    if (_customInventory select 0) then 
    { 
        [
            (_customInventory select 1), 
            _veh, 
            (_customInventory select 3), 
            (_customInventory select 2), 
            (missionNamespace getVariable["isAdvancedMission", false])
        ] call Xeno_fnc_vehicleGear; 
    };
};