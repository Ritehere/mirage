/*

    Author: Xeno

    Description: Saves a unit's loadout to XenoLoadout config format

    Params:
    0: object
    1: loadout name

    Return:
    Formatted string

*/

params 
[
    ["_object", objNull,[objNull]],
    ["_class", "loadout0",[""]]
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


private _loadout = getUnitLoadout _object;

private _headgear = _loadout select 6;
private _goggles = _loadout select 7;
private _uniform = (_loadout select 3) select 0;
private _vest = (_loadout select 4) select 0;
private _backpack = (_loadout select 5) select 0;

private _uniformItems = (_loadout select 3) select 1;
private _vestItems = (_loadout select 4) select 1;
private _backpackItems = (_loadout select 5) select 1;
private _linkedItems = (_loadout select 9);

private _primaryWeapon = (_loadout select 0);
private _secondaryWeapon = (_loadout select 1);
private _handgun = (_loadout select 2);
private _binocular = (_loadout select 8);


private _output = format
[
"
class %15
{
    class %1
    {
        //Faction: %16 Unit: %17
        scope = 2;
        primaryWeapon[] = %2;
        secondaryWeapon[] = %3;
        handgun[] = %4;
        binocular[] = %5;
        uniformItems[] = %6; 
        vestItems[] = %7;
        backpackItems[] = %8;
        linkedItems[] = %9;
        headgearClass = ""%10"";
        goggles = ""%11"";
        uniformClass = ""%12"";
        vestClass = ""%13"";
        backpack = ""%14"";
    };
};
",
    _class,
    (_primaryWeapon call _fnc_cfgArray),
    (_secondaryWeapon call _fnc_cfgArray),
    (_handgun call _fnc_cfgArray),
    (_binocular call _fnc_cfgArray),
    (_uniformItems call _fnc_cfgArray),
    (_vestItems call _fnc_cfgArray),
    (_backpackItems call _fnc_cfgArray),
    (_linkedItems call _fnc_cfgArray),
    _headgear,
    _goggles,
    _uniform,
    _vest,
    _backpack,
    typeOf _object,
    getText(configfile >> "CfgFactionClasses" >> faction _object >> "displayName"),
    getText(configFile >> "CfgVehicles" >> typeOf _object >> "displayName")
];

_output;
