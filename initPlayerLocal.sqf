["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;
params ["_player", "_didJIP"];
player setUnitTrait ["medic",true];
player setUnitTrait ["engineer",true];
player setUnitTrait ["explosiveSpecialist",true];
player setUnitTrait ["UAVHacker",true];

[player] call Xeno_fnc_briefing;
[player, typeOf player, true] call Xeno_fnc_loadInventory;
if !(isMultiplayer) then { { [_x, typeOf _x, true] call Xeno_fnc_loadInventory; } foreach switchableUnits; };

//[player, "SmokeShellOrange"] call Xeno_fnc_projEH; //Event Handler for Fulton Extraction
/*if (395180 in (getDLCs 1)) then
{
    [player, typeOf player, "APEX"] call Xeno_fnc_loadInventory;
}*/
    

["Optic Switcher", "OpticSwitcher", ["Switch Optics", "Switch Zoom Levels"], { [player] call Xeno_fnc_switchBooster }, {}, [0x21,[false,true,false]]] call CBA_fnc_addKeybind;

X_PanicButton = addMissionEventHandler["Draw3D",
{
    {
        if (_x getVariable["Xeno_Calling", false]) then
        {
            private _color = (_x getVariable["Xeno_color", [1,1,1,1]]);
            private _next = [];
            drawIcon3D["\a3\Modules_F_Curator\Data\iconRadioChannelCreate_ca.paa", _color, (_x modelToWorld [0,0,1.5]), 1,1,0];
            if (_color isEqualTo [1,1,1,1]) then { _next = [1,0,0,1] } else { _next = [1,1,1,1] };
            _x setVariable["Xeno_color", _next];
        }
    } forEach (player nearEntities["Man", 500]);
}];

waitUntil { call TFAR_fnc_haveSWRadio };
[(call TFAR_fnc_activeSwRadio), player getVariable ["Channel",0]] call TFAR_fnc_setSwChannel;

