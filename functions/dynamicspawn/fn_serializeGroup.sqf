params
[
    ["_group", grpNull, [grpNull]]
];

private _units = (units _group);
private _soldiers = [];
private _vehicles = [];
private _soldierLoadouts = [];
private _vehicleDamage = [];
private _vehicleClasses = [];
private _side = (side (leader _group));

{
    _soldiers pushBack (typeOf _x);
    _soldierLoadouts pushBack (getUnitLoadout _x);
    if (vehicle _x != _x) then { _vehicles pushBackUnique (vehicle _x) };
} forEach _units;

{
    _soldiers = _soldiers - ((crew _x) apply { typeOf _x });
    _vehicleDamage pushBack [typeOf _x, (getAllHitPointsDamage _x)];
    _vehicleClasses pushBack (typeOf _x);
} foreach _vehicles;

_grpStorage = createGroup sideLogic;
_wpUnit = _grpStorage createUnit["C_Man_01_F", getPos (leader _group), [], 0, "NONE"];
_grpStorage copyWaypoints _group;
_wpUnit enableSimulation false;
_wpUnit hideObjectGlobal true;
if !(isNil "BIS_fps_manager_init") then { BIS_persistent pushBack _wpUnit; BIS_fps_rescanNewObjects = true };

{ deleteVehicle _x } foreach _units;
deleteGroup _group;

[(_soldiers + _vehicleClasses), _soldierLoadouts, _vehicleDamage, [_grpStorage, _wpUnit], _side]