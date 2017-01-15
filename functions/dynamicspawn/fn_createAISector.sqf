/*

    Author: Xeno
    
    Description: Creates AI units around specific BIS sector.
    
    Params:
    0: Target sector: OBJECT
    1: Condition for AI to be spawned in
    2: ParamArray for createPatrols
    3: ParamArray for createPatrolVehicles sans first parameter

    Example:
    
    [
        _this select 0,
        { (_this select 0) getVariable "owner" == EAST },
        [
            [
                ((_this select 0) getVariable "areas") select 0, 
                false
            ], 
        3, 
        east, 
            [
                ["O_Soldier_TL_F", "O_medic_F", "O_Soldier_AR_F", "O_Soldier_GL_F"],
                ["O_Soldier_GL_F", "O_Soldier_F"],
                ["O_medic_F", "O_medic_F"], 
                (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam")
            ], 
            [
                (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfAssault"), 
                (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad")
            ], 
            [
                (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam_AA"),
                (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OI_SniperTeam"),
                (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam_AT")
            ], 
        0.75, 
        false, 
        [0.50, 0.92], 
        [800,1600], 
        [false, false], 
        (_this select 0)
        ], 
        [
            east, 
            selectRandom ["O_MRAP_02_hmg_F","O_LSV_02_armed_F"], 
            2000, 
            [false,false,[]], 
            (_this select 0)
        ]
    ] spawn Xeno_fnc_createAISector;
*/
if !(canSuspend) exitWith { ["createAISector: this function requires scheduling to work."] call BIS_fnc_error };
params 
[
    ["_sector", objNull, [objNull]], 
    ["_condition", { true }, [{}]], 
    ["_patrolParamArray",[[((_this select 0) getVariable["areas", [objNull]] select 0), false],1,west,Xeno_default,Xeno_default,Xeno_default, 0.5,false,[0.5,0.5],[500,1000],[false,{false}],objNull],[[]]], 
    ["_vehicleParamArray",[west,selectRandom(Xeno_defaultVeh),1500,[false,false,[]],objNull],[[]]],
    ["_desertThreshold", 600, [0]]
];

//initial sector generation
if (isNull _sector) exitWith { ["createAISector: Target sector is null"] call BIS_fnc_error};

private ["_unitCount", "_desertTime"];
if (count (_sector getVariable ["WPCollection", []]) < 1) then
{
    //Waypoint Storage
    _wpUnits = [];
    {
        if (_x isKindOf "Man") then
        {
            _wpUnits pushBack _x;
        }
    } forEach  (synchronizedObjects _sector);
    _unitCount = count _wpUnits;
    private _WPCollection = [];
    //begin saving waypoints in the format [[[Center, Completion Radius], Type, Formation, SpeedMode, Behaviour], [WPn]...[WPn+1]]
    {
        private _cycle = [];
        private _allWPs = waypoints _x;
        {
            _cycle pushBack [[waypointPosition _x, waypointCompletionRadius _x], waypointType _x, waypointFormation _x, waypointSpeed _x, waypointBehaviour _x];
        } forEach _allWPs;
        _WPCollection pushBack [[getPos _x, getDir _x], _cycle];
        deleteVehicle _x;
    } forEach _wpUnits; 
    //Save collection to the sector variable storage
    _sector setVariable["WPCollection", _WPCollection];
};

//Sector Area setup

_basePos = getPos _sector;
_rad = (triggerArea ((_sector getVariable "areas") select 0)) select 0;
_rangeMin = (_patrolParamArray select 9) select 0;
_rangeMax = (_patrolParamArray select 9) select 1;


while _condition do
{
    waitUntil { {(_x distance _basePos) < (_rangeMax + _rad) && (_x distance _basePos) >= (_rangeMin + _rad) } count allPlayers > 0 };
    //additional sector generation
    _sector setVariable ["sectorAIVehicles", []];
    private _WPCollectionLocal = +(_sector getVariable "WPCollection");
    private _unitCount = count _WPCollectionLocal;
    
    //spawn
    _patrolParamArray spawn Xeno_fnc_createPatrols;
    private _vehGroups = [];
    for [{_i = 0}, {_i < _unitCount}, { _i = _i + 1}] do
    { 
        _bInfo = selectRandom(_WPCollectionLocal);
        _WPCollectionLocal deleteAt (_WPCollectionLocal find _bInfo);
        ([_bInfo] + _vehicleParamArray) spawn Xeno_fnc_createPatrolVehicles;
    };
    
    waitUntil 
    { 
        if({ (_x distance _basePos) < (_rangeMax + _rad) && (_x distance _basePos) >= (_rangeMin + _rad) } count allPlayers == 0) then
        {  
            if (_desertTime == -1) then { _desertTime = (time + _desertThreshold) };
            time > _desertTime;
        }
        else
        {
            _desertTime = -1;
            false;
        };
    };
    
    //de-spawn
    _groups = _sector getVariable ["sectorAIGroups", []];
    _vehGroups = _sector getVariable ["sectorAIVehicles", []];
    {
        {
            deleteVehicle _x;
        } foreach (units _x);
        deleteGroup _x;
    } foreach _groups;
    
    {
        {
            if (vehicle _x != _x) then {deleteVehicle (vehicle _x)};
            deleteVehicle _x;
        } foreach (units _x);
        deleteGroup _x;
    } foreach _vehGroups;
};














