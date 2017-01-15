params 
[
    ["_serialdata",[],[[]]]
];

private _groupArray = (_serialdata select 0);
private _groupLoadouts = (_serialdata select 1);
private _vehicleDamage = (_serialdata select 2);
private _storedGroup = (_serialdata select 3);
private _groupSt = (_storedGroup select 0);
private _man = (_storedGroup select 1);
private _side = (_serialdata select 4);

private _restoredGroup = [getPos _man, _side, _groupArray, [], [], [0.2, 0.5]] call BIS_fnc_spawnGroup;
_restoredGroup copyWaypoints _groupSt;

deleteVehicle _man;
deleteGroup _groupSt;

private _restoredVehicles = [];

{
    _x setUnitLoadout (_groupLoadouts select _forEachIndex);
    if (vehicle _x != _x) then { _restoredVehicles pushBackUnique (vehicle _x)};
} foreach (units _restoredGroup);

{
    private _vehicle = _x;
    _hitPointDamage = (_vehicleDamage select (_vehicleDamage find (typeOf _vehicle)));
    _hitPointArray = _hitPointDamage select 1;
    _hitPoints = _hitPointArray select 0;
    _damage = _hitPointArray select 2;
    for[{_i=0},{_i<(count (_hitPointDamage select 1))},{_i=_i+1}] do
    {
        _vehicle setHitPointDamage[(_hitPoints select _i), (_damage select _i)];
    };
} foreach _restoredVehicles;

_restoredGroup 