with missionNamespace do
{
    Xeno_groupLimit = 70;
    
    //INTERNAL : DO NOT CHANGE       
    Xeno_nullGrp = (createGroup sideLogic);
    Xeno_nullGrp setVariable["GC_ignore", true];
    Xeno_default = [ ["C_Man_1", "C_Man_1"] ];
    Xeno_defaultVeh = ["C_Offroad_01_F"];
    //END
    
    BIG_GROUP_CHANCE = 0.5; //50%
    SPECIAL_GROUP_CHANCE = 0.9; //10%
    SPAWNDIST_MIN = 400; //meters
    SPAWNDIST_MAX = 1200;
    SPAWNDIST_VEHICLE = 1400;
    DESERT_TIMEOUT = 1000; //seconds
    GUARD_CHANCE = 0.5; //50%
    DEFAULT_AMOUNT = 2; //amount of groups
    
    Xeno_sectorSmallGroups =
    [
        ["O_Soldier_TL_F", "O_medic_F", "O_Soldier_AR_F", "O_Soldier_GL_F"],
        ["O_Soldier_GL_F", "O_Soldier_F"],
        ["O_medic_F", "O_medic_F"],
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam")        
    ];    
    
    Xeno_sectorBigGroups =
    [
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfAssault"),
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad")        
    ];    
    
    Xeno_sectorSpecialGroups =
    [
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam_AA"),
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OI_SniperTeam"),
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam_AT")        
    ];
    
    Xeno_sectorVehicles = 
    [
        "O_MRAP_02_hmg_F",
        "O_MRAP_02_gmg_F",
        "O_LSV_02_armed_F",
        "O_APC_Wheeled_02_rcws_F",
        "O_APC_Tracked_02_cannon_F"        
    ];
    
    Xeno_sectorStaticVehicles =
    [
        "O_MRAP_02_hmg_F",
        "O_LSV_02_armed_F",
        "O_APC_Wheeled_02_rcws_F",
        "O_MBT_02_cannon_F",
        "O_APC_Tracked_02_cannon_F",
        "O_Heli_Light_02_F",
        "O_Heli_Attack_02_F",
        "O_UGV_01_rcws_F",
        "O_MRAP_02_gmg_F",
        "O_MRAP_02_hmg_F",   
        "O_Truck_02_transport_F",
        "O_Truck_02_covered_F",
        "O_Truck_03_covered_F",
        "O_Truck_03_transport_F"  
    ];
    
    Xeno_militaryCars = 
    [
        "O_MRAP_02_hmg_F",
        "O_LSV_02_armed_F"
    ];

    Xeno_militaryAPCs = 
    [
        "O_APC_Wheeled_02_rcws_F",
        "O_APC_Tracked_02_cannon_F"
    ];

    Xeno_militaryTanks = 
    [
        "O_MBT_02_cannon_F"
    ];

    Xeno_militaryAA = 
    [
        "O_APC_Tracked_02_AA_F"
    ];

    Xeno_militaryUnmanned = 
    [
        "O_UGV_01_rcws_F"
    ];

    Xeno_militaryBoats = 
    [
        "O_Boat_Armed_01_hmg_F"
    ];

    Xeno_militaryHelicopters = 
    [
        "O_Heli_Attack_02_F",
        "O_Heli_Light_02_F"
    ];

    Xeno_supportVehicles = 
    [
        "O_APC_Wheeled_02_rcws_F",
        "O_MBT_02_cannon_F",
        "O_APC_Tracked_02_cannon_F",
        "O_Heli_Light_02_F",
        "O_Heli_Attack_02_F",
        "O_UGV_01_rcws_F",
        "O_MRAP_02_gmg_F",
        "O_MRAP_02_hmg_F"
    ];

    Xeno_reinforcementVehicles = 
    [
        "O_Truck_02_transport_F",
        "O_Truck_02_covered_F",
        "O_Truck_03_covered_F",
        "O_Truck_03_transport_F"
    ];

    Xeno_footPatrols = 
    [
        ["O_Soldier_TL_F", "O_medic_F", "O_Soldier_AR_F", "O_Soldier_GL_F"],
        ["O_Soldier_GL_F", "O_Soldier_F"],
        ["O_medic_F", "O_medic_F"],
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam")
    ];

    Xeno_reinforcementSquads = 
    [
        ["O_Soldier_SL_F", "O_Soldier_TL_F", "O_medic_F", "O_Soldier_AR_F", "O_Soldier_AR_F", "O_Soldier_GL_F", "O_Soldier_M_F"],
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfAssault"),
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad"),
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam")
    ];

    Xeno_specialPatrols = 
    [
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfAssault"),
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad")
    ];

    Xeno_weaponTeams = 
    [
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam_AA"),
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OI_SniperTeam"),
        (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam_AT")
    ];

    Xeno_viperTeams = 
    [
        (configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "SpecOps" >> "OI_ViperTeam")
    ];       
};