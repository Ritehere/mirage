//use BIS_fnc_artilleryStrikeVirtual instead
params ["_position", "_class", "_spawnPos", "_ammo", "_rounds"];

_mortar = createVehicle[_class, _spawnPos, [], 0, "NONE"];
createVehicleCrew _mortar;

_mortar doArtilleryFire [_position, _ammo, _rounds];


waitUntil { unitReady _mortar };
deleteVehicle (gunner _mortar);
deleteVehicle _mortar;
