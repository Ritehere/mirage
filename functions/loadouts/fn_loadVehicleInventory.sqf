/*

    Fills vehicle with preset faction loadout defined in missionConfigFile

    Author: Xeno

    Params:
    0: LoadoutName in Xeno >> VehicleInventories
    1: Target (Object)

*/

params 
[
    ["_object", objNull, [objNull]],
    ["_loadout", "Default", ["STRING"]],
    ["_fallback", "Default", ["STRING"]]
];

if (isNull _object) exitWith { ["loadVehicleInventory: no vehicle"] call BIS_fnc_error; false };

private _root = (missionConfigFile >> "Xeno" >> "VehicleInventories");
if !(isClass (_root >> _loadout)) then { _loadout = _fallback };
if !(isClass (_root >> _loadout)) then { _loadout = "Default" };

//Clear cargo
clearWeaponCargoGlobal _object;
clearItemCargoGlobal _object;
clearBackpackCargoGlobal _object;
clearMagazineCargoGlobal _object;

//Items
{ _object addItemCargoGlobal [_x select 0, _x select 1]; } forEach getArray(missionConfigFile >> "Xeno" >> "VehicleInventories" >> _loadout >> "items");
//ACE3 Medical system items
if (isClass (configfile >> "CfgPatches" >> "ace_medical")) then
{
    private _isAdvanced = false;
    if ((missionNamespace getVariable["ace_medical_level", 1]) == 2) then
    {
        _isAdvanced = true;
    };
    
    { _object addItemCargoGlobal [_x select 0, _x select 1]; } forEach getArray(missionConfigFile >> "Xeno" >> "VehicleInventories" >> _loadout >> "ace_medical" >> "items");
    if _isAdvanced then
    {
        { _object addItemCargoGlobal [_x select 0, _x select 1]; } forEach getArray(missionConfigFile >> "Xeno" >> "VehicleInventories" >> _loadout >> "ace_medical" >> "advancedItems");
    };
};
private _index = 0;
//Backpacks and their contents
{
    _object addBackpackCargoGlobal[_x select 0, _x select 1];
    for [{_i = 0+_index}, {_i < (_x select 1)+_index}, {_i = _i + 1}] do
    {
        _bp = (everyBackpack _object) select _i;
        {
            _bp addItemCargoGlobal[_x select 0, _x select 1];
        } foreach (_x select 2);
    };
    _index = _index + (_x select 1);
} foreach getArray(missionConfigFile >> "Xeno" >> "VehicleInventories" >> _loadout >> "backpacks");
true 