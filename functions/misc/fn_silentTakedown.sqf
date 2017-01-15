/*

    Author: Xeno

    Welcome to coalition, PROD. I might as well start doing coke. Remember, lethal takedown is the most silent takedown.

    Params:
    0: Victim
    1: Killer

*/

params ["_target", "_killer"];

if (isNil "DP_takedownInProgress") then { DP_takedownInProgress = false};
if (!(_target isKindOf "Man") || (_killer distance2D _target > 7) || !(alive _target) || DP_takedownInProgress) exitWith {};
DP_takedownInProgress = true;
(_this select 1) setPos ((_this select 0) getRelPos[1,180]);
(_this select 1) setDir (direction (_this select 0));
_snds = ["die.ogg", "ugh.ogg", "fuckyou.ogg"];
_screams = ["scream1.ogg", "scream2.ogg", "scream3.ogg", "scream4.ogg", "scream5.ogg", "scream6.ogg"];
playSound3D[format["%1data\fx\scream\%2", ([(str missionConfigFile), 0, -15] call BIS_fnc_trimString), selectRandom _screams], (_this select 0)];
playSound3D[format["%1data\fx\%2", ([(str missionConfigFile), 0, -15] call BIS_fnc_trimString), "takedown.ogg"], (_this select 0)];
playSound3D[format["%1data\fx\%2", ([(str missionConfigFile), 0, -15] call BIS_fnc_trimString), selectRandom _snds], (_this select 1)];
(_this select 0) setDamage 1;
[_target, _killer] call ace_medical_fnc_treatmentAdvanced_fullHealLocal;
DP_takedownInProgress = false;

true
