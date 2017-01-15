/* 

	Author: Xeno
	Event Handler for Fulton Recovery
	
	Params:
	0: Object to attach to
	1: Classname of grenade to use
	
*/


_object = _this select 0;
projName = _this select 1;

_object addEventHandler["Fired", {
	if (_this select 5 == projName) then
	{ 
		[_this select 6] spawn Xeno_fnc_fulton;
	};
}];

_object addEventHandler["Respawn", { [_object, _projName] call Xeno_fnc_projEH }];