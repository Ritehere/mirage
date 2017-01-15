/*

	Author: Xeno

	Description:
	Launches an object from another object with specific speed and angle.
	Bullfrogs from Red Alert say hi.

	Parameters:
	0: Projectile (object)
	1: Launcher (object)
	2: Muzzle (position array)
	3: Ejection Speed (m/s)
	4: Angle (degrees)

*/
params ["_proj", "_tgt", "_muzzle", "_speed", "_angle"];

_proj allowDamage false;
private _tdir = direction _tgt;
private _tvel = velocity _tgt;
moveOut _proj;
_proj setPos _muzzle;
_proj setDir _tdir;
_proj switchMove "AbdvPercMrunSnonWnonDf";
if (_angle <= 45) then
{
    _proj setVelocity [((_tvel select 0) + (sin _tdir * _speed)), ((_tvel select 1) + (cos _tdir * _speed)), ((sin _angle/cos _angle) * _speed)];
}
else
{
if (_angle > 89.9) then { _angle = 89.99 }; //
    _proj setVelocity [((_tvel select 0) + (sin _tdir * _speed))*(cos _angle/sin _angle), ((_tvel select 1) + (cos _tdir * _speed))*(cos _angle/sin _angle), _speed];
};
playSound3D ["A3\Sounds_F\weapons\Cannons\cannon82mm.wss", _tgt];

waitUntil { (velocity _proj) select 2 < -10 };
private _para = createVehicle["Steerable_Parachute_F", getPos _proj, [], 0, "NONE"];
_para setDir direction _proj;
_proj moveInAny _para;
sleep 1;
_proj allowDamage true;
