//Faction: AAF Vehicles
class I_supplyCrate_F : Default
{
    //Faction: Other, Vehicle: Supply Box [AAF]
    items[] = {{"bipod_03_F_blk",10},{"ACE_bodyBag",10},{"ACE_DefusalKit",3},{"ACE_EntrenchingTool",3},{"ItemMicroDAGR",4},{"optic_Holosight_blk_F",10},{"ToolKit",3},{"ACE_wirecutter",3},{"hlc_rifle_g36KTac",10},{"launch_NLAW_F",3},{"11Rnd_45ACP_Mag",30},{"3Rnd_HE_Grenade_shell",10},{"1Rnd_HE_Grenade_shell",20},{"Chemlight_green",30},{"Laserbatteries",10},{"hlc_20rnd_762x51_b_G3",20},{"hlc_100rnd_556x45_EPR_G36",10},{"hlc_30rnd_556x45_EPR_G36",50},{"ACE_HandFlare_Green",30},{"hlc_200rnd_556x45_M_SAW",8},{"ACE_M84",10},{"NLAW_F",10},{"MiniGrenade",10},{"HandGrenade",10},{"SmokeShellGreen",20},{"SmokeShellPurple",10},{"SmokeShellRed",5},{"SmokeShell",20},{"1Rnd_SmokeGreen_Grenade_shell",20},{"Titan_AA",6},{"Titan_AT",6}};
    backpacks[] = 
    {
        {"B_Kitbag_rgr",3,{}},
        {"B_Kitbag_rgr",3,{{"SmokeShellGreen",4},{"HandGrenade",2},{"ACE_HandFlare_Green",8},{"Chemlight_green",6},{"ACE_quikClot", 40},{"ACE_morphine", 30},{"ACE_epinephrine", 20},{"ACE_bloodIV", 10}}},
        {"B_Kitbag_rgr",3,{{"SmokeShellGreen",4},{"HandGrenade",2},{"ACE_HandFlare_Green",8},{"Chemlight_green",6}}}
    };
    class ace_medical 
    {
        items[] =
        {
            {"ACE_quikClot", 100},
            {"ACE_morphine", 50},
            {"ACE_epinephrine", 35},
            {"ACE_bloodIV", 20}
        };
        advancedItems[] =
        {
            {"ACE_elasticBandage", 50},
            {"ACE_packingBandage", 50},
            {"ACE_tourniquet", 30},
            {"ACE_personalAidKit", 10}
        };
        
    }
};

class I_APC_Wheeled_03_cannon_F : I_supplyCrate_F
{
    //Faction: AAF, Vehicle: AFV-4 Gorgon
    items[] = {{"ACE_DefusalKit",3},{"ACE_EntrenchingTool",3},{"ItemMicroDAGR",3},{"optic_Holosight_blk_F",5},{"ToolKit",1},{"ACE_wirecutter",1},{"hlc_rifle_g36KTac",3},{"launch_NLAW_F",1},{"Chemlight_green",10},{"Laserbatteries",1},{"hlc_30rnd_556x45_EPR_G36",20},{"ACE_HandFlare_Green",8},{"hlc_200rnd_556x45_M_SAW",2},{"ACE_M84",4},{"NLAW_F",2},{"MiniGrenade",2},{"HandGrenade",2},{"SmokeShellGreen",4},{"SmokeShellPurple",2},{"SmokeShellRed",1},{"SmokeShell",4}};
    class ace_medical
    {
        items[] = {};
        advancedItems[] = {};
    }
};

class I_APC_tracked_03_cannon_F : I_APC_Wheeled_03_cannon_F
{};

class I_MRAP_03_F : I_supplyCrate_F
{
    //Faction: AAF, Vehicle: Strider
    items[] = {{"ACE_DefusalKit",3},{"ACE_EntrenchingTool",3},{"ItemMicroDAGR",3},{"optic_Holosight_blk_F",5},{"ACE_wirecutter",1},{"hlc_rifle_g36KTac",3},{"launch_NLAW_F",1},{"Chemlight_green",10},{"Laserbatteries",1},{"hlc_30rnd_556x45_EPR_G36",30},{"ACE_HandFlare_Green",8},{"hlc_200rnd_556x45_M_SAW",4},{"ACE_M84",4},{"NLAW_F",3},{"MiniGrenade",4},{"HandGrenade",4},{"SmokeShellGreen",8},{"SmokeShellPurple",4},{"SmokeShellRed",4},{"SmokeShell",8}};
    class ace_medical
    {
        items[] = {};
        advancedItems[] = {};
    }
};

class I_MRAP_03_hmg_F : I_MRAP_03_F
{};

class I_MRAP_03_gmg_F : I_MRAP_03_F
{};

class I_Heli_Transport_02_F : I_supplyCrate_F
{
    //Faction: AAF, Vehicle: CH-49 Mohawk
    items[] = {{"ItemMicroDAGR",8},{"ToolKit",2},{"hlc_rifle_g36KTac",3},{"Chemlight_green",10},{"hlc_30rnd_556x45_EPR_G36",20},{"ACE_HandFlare_Green",30},{"NLAW_F",5},{"MiniGrenade",10},{"HandGrenade",10},{"SmokeShellGreen",20},{"SmokeShellPurple",10},{"SmokeShellRed",5},{"SmokeShell",20},{"Titan_AA",2},{"Titan_AT",2}};
    backpacks[] = 
    {
        {"B_Parachute",10,{}},
        {"B_Kitbag_rgr",4,{}},
        {"B_Kitbag_rgr",2,{{"SmokeShellGreen",4},{"HandGrenade",2},{"ACE_HandFlare_Green",8},{"Chemlight_green",6},{"ACE_quikClot", 40},{"ACE_morphine", 30},{"ACE_epinephrine", 20},{"ACE_bloodIV", 10}}},
        {"B_Kitbag_rgr",4,{{"SmokeShellGreen",4},{"HandGrenade",2},{"ACE_HandFlare_Green",8},{"Chemlight_green",6}}}
    };
    class ace_medical
    {
        items[] = {};
        advancedItems[] = {};
    }
};

class I_Heli_light_03_F : I_supplyCrate_F
{
    //Faction: AAF, Vehicle: WY-55 Hellcat
    items[] = {{"ItemMicroDAGR",4},{"ToolKit",2},{"hlc_rifle_g36KTac",4},{"Chemlight_green",10},{"hlc_20rnd_762x51_b_G3",10},{"hlc_100rnd_556x45_EPR_G36",4},{"hlc_30rnd_556x45_EPR_G36",30},{"ACE_HandFlare_Green",10},{"MiniGrenade",10},{"HandGrenade",10},{"SmokeShellGreen",20},{"SmokeShellPurple",10},{"SmokeShellRed",5},{"SmokeShell",20}};
    backpacks[] = 
    {
        {"B_Parachute",10,{}},
        {"B_Kitbag_rgr",1,{}},
        {"B_Kitbag_rgr",1,{{"SmokeShellGreen",4},{"HandGrenade",2},{"ACE_HandFlare_Green",8},{"Chemlight_green",6},{"ACE_quikClot", 40},{"ACE_morphine", 30},{"ACE_epinephrine", 20},{"ACE_bloodIV", 10}}},
        {"B_Kitbag_rgr",1,{{"SmokeShellGreen",4},{"HandGrenade",2},{"ACE_HandFlare_Green",8},{"Chemlight_green",6}}}
    };
    class ace_medical
    {
        items[] = {};
        advancedItems[] = {};
    }
};


class I_Heli_light_03_unarmed_F : I_Heli_light_03_F
{};


class I_UGV_01_F : I_MRAP_03_F
{};

class I_UGV_01_rcws_F : I_UGV_01_F
{};

class I_MBT_03_cannon_F : I_APC_Wheeled_03_cannon_F
{};

class I_Plane_Fighter_03_CAS_F : Default
{
    //Faction: AAF, Vehicle: A-143 Buzzard (CAS)
    items[] = {{"Chemlight_green",4},{"Laserbatteries",1},{"hlc_30rnd_556x45_EPR_G36",4},{"SmokeShellGreen",20},{"SmokeShellPurple",10},{"SmokeShellRed",5},{"SmokeShell",20}};
    backpacks[] = 
    {
        {"B_Parachute",1,{}},
        {"B_Kitbag_rgr",1,{{"SmokeShellGreen",4},{"HandGrenade",2},{"ACE_HandFlare_Green",8},{"Chemlight_green",6}}}
    };
    class ace_medical
    {
        items[] = {};
        advancedItems[] = {};
    }
};

class I_Plane_Fighter_03_AA_F : I_Plane_Fighter_03_CAS_F
{};

class I_Truck_02_transport_F : I_supplyCrate_F
{
    //Faction: AAF, Vehicle: Zamak Transport
    items[] = {};
    class ace_medical
    {};
};

class I_Truck_02_box_F : I_supplyCrate_F
{
    //Faction: AAF, Vehicle: Zamak Repair
    items[] = {{"ACE_DefusalKit",5},{"ACE_EntrenchingTool",5},{"ToolKit",5},{"ACE_wirecutter",3},{"hlc_rifle_g36KTac",2},{"Chemlight_green",10},{"hlc_30rnd_556x45_EPR_G36",10},{"ACE_HandFlare_Green",8},{"SmokeShellGreen",8},{"SmokeShellPurple",6},{"SmokeShellRed",4},{"SmokeShell",8}};
};

class I_Truck_02_fuel_F : I_Truck_02_box_F
{};

class I_Truck_02_ammo_F : I_Truck_02_box_F
{};

class I_Truck_02_medical_F : I_supplyCrate_F
{
    //Faction: AAF, Vehicle: Zamak Medical
    items[] = {{"FirstAidKit",20},{"Medikit",2},{"ACE_bodyBag",50},{"ACE_DefusalKit",3},{"ACE_EntrenchingTool",10},{"ItemMicroDAGR",4},{"optic_Holosight_blk_F",10},{"ToolKit",3},{"ACE_wirecutter",3},{"hlc_rifle_g36KTac",2},{"Chemlight_green",20},{"hlc_30rnd_556x45_EPR_G36",10},{"ACE_HandFlare_Green",30},{"SmokeShellGreen",20},{"SmokeShellPurple",20},{"SmokeShellRed",1},{"SmokeShell",20}};
};

class I_Boat_Armed_01_minigun_F : I_supplyCrate_F
{
    //Faction: AAF, Vehicle: Speedboat Minigun
    items[] = {};
    class ace_medical
    {
        items[] = {};
        advancedItems[] = {};
    }
};

class I_CargoNet_01_ammo_F : I_supplyCrate_F
{};