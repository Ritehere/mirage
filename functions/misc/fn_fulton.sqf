/*
	Author: Xeno
	
	Description: Sets up a target for Fulton Extraction
	
	Parameters:
	0:  Fulton Pack
	
*/

private ["_proj", "_targetToFulton"];
_proj = _this select 0;
// systemChat format["Type: %4, Proj: %1, Speed: %2, Pos: %3", _proj, speed _proj, getPos _proj, typeName _proj];
waitUntil { speed _proj == 0 };

_targetToFulton = ((getPos _proj) nearEntities 2) select 0;
if (isNil "_targetToFulton") exitWith {  };
if (_targetToFulton == _proj) then { _targetToFulton = ((getPos _proj) nearEntities 2) select 1 };

_proj attachTo [_targetToFulton,  [0,0,0]];
[_proj] spawn { sleep 20; detach (_this select 0) };

_targetToFulton allowDamage false;

hover = true; 
[] spawn { 
	sleep 5; 
	hover = false 
};

if (typeOf _targetToFulton isKindOf "Man") then
{
	[_targetToFulton, "AinjPfalMstpSnonWrflDf_carried"] remoteExecCall ["switchMove", 0];
};

_up = createVehicle["B_Parachute_02_F", _targetToFulton, [], 0, "NONE"]; 
_up attachTo [_targetToFulton, [0,0,0]];
[_targetToFulton, [0,0,10]] remoteExecCall ["setVelocity", _targetToFulton];
sleep 0.5;

while { hover } do
{
	[_targetToFulton, [0,0,0]] remoteExecCall ["setVelocity", _targetToFulton];
};

[_targetToFulton, [0,0,100]] remoteExecCall ["setVelocity", _targetToFulton];
waitUntil { (velocity _targetToFulton) select 2 < 5 };
if (isPlayer _targetToFulton) then { _targetToFulton setPos getMarkerPos "respawn_guerrila"; _targetToFulton allowDamage true; };
private ["_vehType", "_crewVeh", "_nameF", "_rankF", "_skillF", "_assArr"];
_vehType = typeOf _targetToFulton;
_assArr = [];
_assArr pushBack _vehType;
_crewArr = [];
if (_targetToFulton isKindOf "LandVehicle") then
{ 
	_crewVeh = crew _targetToFulton; 
	{
		if (isPlayer _x) then
		{	
			_x allowDamage false;
			_x setPos getMarkerPos "respawn_guerrila";
			_x allowDamage true;
		}
		else
		{
			_nameC = name _x;
			_skillC = skill _x;
			_rankC = rank _x;
			_arrCrewman = [_forEachIndex, _nameC, _skillC, _rankC];
			_crewArr pushBack _arrCrewman;
			deleteVehicle _x;
		}; 
	} forEach _crewVeh; 
};
if (_targetToFulton isKindOf "Man" && !isPlayer _targetToFulton) then 
{ 
	_nameF = name _targetToFulton; 
	_rankF = rank _targetToFulton; 
	_skillF = skill _targetToFulton 
};
if (isPlayer _targetToFulton) then
{
	_targetToFulton setPos getMarkerPos "respawn_guerrila";
	sleep 2;
	[_targetToFulton, ""] remoteExecCall ["switchMove", 0];
	_targetToFulton allowDamage true;
}
else
{
	deleteVehicle _targetToFulton;
};
deleteVehicle _up;
// systemChat format["Extraction complete! The Vehicle is %1, Is Man: %2, It's crew is %3, is Player: %4", _vehType, !isNil "_nameF", _crewArr, isPlayer _targetToFulton];
