params 
[
    ["_object", objNull,[objNull]]
];

_fnc_cfgArray =
{
    private _stra = (str _this) splitString "";
    {
        switch (_x) do
        {
            case "[": { _stra set[_forEachIndex, "{"] };
            case "]": { _stra set[_forEachIndex, "}"] };
        };
    } foreach _stra;
    _stra = _stra joinString "";
    _stra
};


private _items = (getItemCargo _object);
private _weapons = (getWeaponCargo _object);
private _magazines = (getMagazineCargo _object);
(_items select 0) append (_weapons select 0);
(_items select 1) append (_weapons select 1);
(_items select 0) append (_magazines select 0);
(_items select 1) append (_magazines select 1);

private _cargo = [];
{
    _cargo pushback [_x, ((_items select 1) select _forEachIndex)];
} foreach (_items select 0);

private _backpacks = [];
{
    _backpacks pushBack [_x, (((getBackpackCargo _object) select 1) select _forEachIndex),[]];
} foreach ((getBackpackCargo _object) select 0);

private _output = format
[
"
class %1 : Default
{
    //Faction: %2, Vehicle: %3
    items[] = %4;
    backpacks[] = %5;
};
",
    typeOf _object,
    getText(configfile >> "CfgFactionClasses" >> faction _object >> "displayName"),
    getText(configFile >> "CfgVehicles" >> typeOf _object >> "displayName"),
    (_cargo call _fnc_cfgArray),
    (_backpacks call _fnc_cfgArray)
];

_output;