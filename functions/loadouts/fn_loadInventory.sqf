/*

    Author: Xeno

    Description: Loads inventory from Xeno >> Loadouts hive

    Params:
    0: Object
    1: Object class
    2: Loadout class

    Usage:
    
    

    Returns:
    Nothing
*/

#define i(var) var=var+1

params
[
    ["_object", objNull,[objNull]],
    ["_class", "Default",["STRING"]],
    ["_item", "Default", ["STRING",false,[]]],
    ["_fallback", "Default",["STRING"]]
];


private _root = (missionConfigFile >> "Xeno" >> "Loadouts" >> _class);
if !(isClass _root) then { _root = (missionConfigFile >> "Xeno" >> "Loadouts" >> "Default"); _item = "Default";};


switch (typeName _item) do
{
    case "STRING": 
    { 
        if !(isClass (_root >> _item)) then 
        { 
            private _loadouts = ("getNumber(_x >> 'scope') == 2" configClasses _root) apply { configName _x };
            if (count _loadouts == 0) then { _item = _fallback; } else { _item = selectRandom _loadouts; };
        }; 
    };
    case "BOOL":
    {
        private _loadouts = ("getNumber(_x >> 'scope') == 2" configClasses _root) apply { configName _x };
        if (count _loadouts == 0) then { _item = _fallback; } else { _item = selectRandom _loadouts; };
    };
    case "ARRAY":
    {
        _item = selectRandom _item;
    };
    default
    {
        _root = (missionConfigFile >> "Xeno" >> "Loadouts" >> "Default"); 
        _item = "Default";
    };
};

if !(isClass (_root >> _item)) then { _item = _fallback };
if !(isClass (_root >> _item)) then { _root = (missionConfigFile >> "Xeno" >> "Loadouts" >> "Default"); _item = _fallback; };
if !(isClass (_root >> _item)) then { _root = (missionConfigFile >> "Xeno" >> "Loadouts" >> "Default"); _item = "Default"; };

private _loadout = _root >> _item;

private _headgear = getText(_loadout >> "headgearClass");
private _uniform = getText(_loadout >> "uniformClass");
private _vest = getText(_loadout >> "vestClass");
private _backpack = getText(_loadout >> "backpack");

private _primaryWeapon = getArray(_loadout >> "primaryWeapon");
private _secondaryWeapon = getArray(_loadout >> "secondaryWeapon");
private _handgun = getArray(_loadout >> "handgun");
private _binocular = getArray(_loadout >> "binocular");

private _uniformItems = getArray(_loadout >> "uniformItems");
private _vestItems = getArray(_loadout >> "vestItems");
private _backpackItems = getArray(_loadout >> "backpackItems");
private _linkedItems = getArray(_loadout >> "linkedItems");
private _goggles = (if (getText(_loadout >> "goggles") == "") then { goggles _object } else { getText(_loadout >> "goggles") });


_object setUnitLoadout
[
    _primaryWeapon,
    _secondaryWeapon,
    _handgun,

    [
        _uniform,
        _uniformItems
    ],
    [
        _vest,
        _vestItems
    ],
    [
        _backpack,
        _backpackItems
    ],
    _headgear,
    _goggles,
    _binocular,
    _linkedItems
]
