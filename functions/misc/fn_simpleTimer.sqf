/*

	Timer function.

	Author: Xeno

	Parameters:
	0: Timer's end: NUMBER
	1: Timer's text: STRING (OPTIONAL)
	2: End of timer text: STRING (OPTIONAL)
	3: End mission?: BOOL (OPTIONAL)
	4: End Type: [EndClass : string, isVictory : BOOL] ARRAY (OPTIONAL)

	Example:
	[300, "Reinforcements arrive in: ", "Reinforcements have arrived", true, ["positiveEndType", true]] spawn Xeno_fnc_simpleTimer;

	Function is local, effects are only shown to machine executing it.

	Returns:
	Nothing

*/

if (isNil "timerActive") then { timerActive = false };
if (timerActive) exitWith { ["[XENO] Attempted to call timer while another is still active"] call BIS_fnc_log };

private ["_endTime", "_timerRscLayer", "_mins", "_secs", "_color", "_timerEnd", "_timerText", "_endMission", "_endType"];
_timerEnd = [_this, 0, 90, [0]] call BIS_fnc_param;
_timerText = [_this, 1, "", ["STRING"]] call BIS_fnc_param;
_timerEndText = [_this, 2, "", ["STRING"]] call BIS_fnc_param;
_endMission = [_this, 3, false, [false]] call BIS_fnc_param;
_endType = [_this, 4, ["end1", true], [[]]] call BIS_fnc_param;
_endTime = time + _timerEnd;

timerActive = true;
_timerRscLayer = "xenoSimpleTimer" call BIS_fnc_rscLayer;

while { (_endTime) > time } do {
    _mins = floor((_endTime - time) / 60);
    _secs = floor((_endTime - time) % 60);
    if (_secs < 10) then {
    	_secs = str _secs;
    	_secs = "0" + _secs;
    };
    _color = "#FFFFFF";
    if ((_endTime - time) < 30) then { _color = "#FF0000" };
    [format["%4<br></br><t color='%3'>%1:%2</t>", _mins, _secs, _color, _timerText], 0, safezoneY + 0.02 * safezoneH, 2, 0, 0, _timerRscLayer] spawn BIS_fnc_dynamicText;
    uiSleep 1;
};

[_timerEndText, 0, safezoneY + 0.02 * safezoneH, 3, 0, 0, _timerRscLayer] spawn BIS_fnc_dynamicText;
timerActive = false;

if (_endMission) then {
    _endType call BIS_fnc_endMission;
};
