//Faction: CSAT (Pacific) Infantry

class O_T_Officer_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Officer
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_F","","","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Pistol_heavy_02_Yorris_F","","","optic_Yorris",{"6Rnd_45ACP_Cylinder",6},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30}}; 
        vestItems[] = {{"6Rnd_45ACP_Cylinder",2,6},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Beret_blk";
        goggles = "";
        uniformClass = "U_O_T_Officer_F";
        vestClass = "V_BandollierB_ghex_F";
        backpack = "tf_mr3000_bwmod";
    };
};

class O_T_Soldier_SL_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Squad Leader
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ARCO_Pointer_F","","acc_pointer_IR","optic_Arco_ghex_F",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_Tracer_F",2,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetLeaderO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessO_ghex_F";
        backpack = "tf_mr3000_bwmod";
    };
};

class O_T_Soldier_TL_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Team Leader
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ARCO_Pointer_F","","acc_pointer_IR","optic_Arco_ghex_F",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"1Rnd_HE_Grenade_shell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_Tracer_F",2,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"1Rnd_HE_Grenade_shell",5,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeRed_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1},{"1Rnd_SmokeYellow_Grenade_shell",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetLeaderO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessOGL_ghex_F";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Medic_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Combat Life Saver
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_Pointer_F","","acc_pointer_IR","",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",2,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Medikit",1},{"FirstAidKit",10}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "B_FieldPack_ghex_OTMedic_F";
    };
};

class O_T_Engineer_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Engineer
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"30Rnd_580x42_Mag_F",2,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",3,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"ToolKit",1},{"MineDetector",1},{"SatchelCharge_Remote_Mag",1,1},{"DemoCharge_Remote_Mag",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessO_ghex_F";
        backpack = "B_Carryall_ghex_OTEng_F";
    };
};

class O_T_Soldier_Exp_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Explosive Specialist
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"30Rnd_580x42_Mag_F",2,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",3,30},{"16Rnd_9x21_Mag",2,17},{"APERSMine_Range_Mag",3,1},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"ToolKit",1},{"MineDetector",1},{"APERSBoundingMine_Range_Mag",3,1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"SLAMDirectionalMine_Wire_Mag",2,1},{"DemoCharge_Remote_Mag",1,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessO_ghex_F";
        backpack = "B_Carryall_ghex_OTExp_F";
    };
};

class O_T_Soldier_Repair_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Repair Specialist
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",2,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"ToolKit",1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessO_ghex_F";
        backpack = "tf_mr3000_bwmod";
    };
};

class O_T_Soldier_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Rifleman
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",6,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessO_ghex_F";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Soldier_GL_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Grenadier
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_GL_blk_ACO_F","","","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{"1Rnd_HE_Grenade_shell",1},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",2,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"1Rnd_HE_Grenade_shell",5,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeRed_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1},{"1Rnd_SmokeYellow_Grenade_shell",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetLeaderO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessOGL_ghex_F";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Soldier_LAT_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Rifleman (AT)
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_F","","","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {"launch_RPG32_ghex_F","","","",{"RPG32_F",1},{},""};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",2,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"RPG32_F",2,1},{"RPG32_HE_F",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "B_FieldPack_ghex_OTLAT_F";
    };
};

class O_T_Soldier_AR_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Autorifleman
        scope = 2;
        primaryWeapon[] = {"arifle_CTARS_blk_Pointer_F","","acc_pointer_IR","",{"100Rnd_580x42_Mag_F",100},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"16Rnd_9x21_Mag",1,17},{"SmokeShell",1,1}}; 
        vestItems[] = {{"100Rnd_580x42_Mag_F",5,100},{"16Rnd_9x21_Mag",1,17},{"HandGrenade",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessO_ghex_F";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Soldier_AT_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Missile Specialist (AT)
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {"launch_O_Titan_short_ghex_F","","","",{"Titan_AT",1},{},""};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",2,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Titan_AT",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "B_FieldPack_ghex_OTAT_F";
    };
};

class O_T_Soldier_AA_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Missile Specialist (AA)
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {"launch_O_Titan_ghex_F","","","",{"Titan_AA",1},{},""};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",2,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Titan_AA",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "B_FieldPack_ghex_OTAA_F";
    };
};

class O_T_Soldier_M_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Marksman
        scope = 2;
        primaryWeapon[] = {"srifle_DMR_07_blk_DMS_F","","","optic_DMS",{"20Rnd_650x39_Cased_Mag_F",20},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"20Rnd_650x39_Cased_Mag_F",4,20}}; 
        vestItems[] = {{"20Rnd_650x39_Cased_Mag_F",5,20},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Soldier_AAR_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Asst. Autorifleman
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",4,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"optic_tws_mg",1},{"bipod_02_F_blk",1},{"muzzle_snds_93mmg",1},{"100Rnd_580x42_Mag_F",1,100},{"100Rnd_580x42_Mag_Tracer_F",1,100},{"150Rnd_93x64_Mag",2,150}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacChestrig_oli_F";
        backpack = "B_Carryall_ghex_OTAAR_AAR_F";
    };
};

class O_T_Soldier_AAT_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Asst. Missile Specialist (AT)
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",4,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Titan_AT",2,1},{"Titan_AP",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacChestrig_oli_F";
        backpack = "B_Carryall_ghex_OTAAT_F";
    };
};

class O_T_Soldier_AAA_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Asst. Missile Specialist (AA)
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",4,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Titan_AA",3,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacChestrig_oli_F";
        backpack = "B_Carryall_ghex_OTAAA_F";
    };
};

class O_T_Soldier_A_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Ammo Bearer
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",8,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"FirstAidKit",4},{"30Rnd_580x42_Mag_F",6,30},{"100Rnd_580x42_Mag_F",1,100},{"RPG32_F",1,1},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"1Rnd_HE_Grenade_shell",6,1},{"10Rnd_93x64_DMR_05_Mag",2,10},{"20Rnd_650x39_Cased_Mag_F",3,20}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessO_ghex_F";
        backpack = "B_Carryall_ghex_OTAmmo_F";
    };
};

class O_T_Support_Mort_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Gunner (Mk6)
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",4,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacChestrig_oli_F";
        backpack = "O_Mortar_01_weapon_F";
    };
};

class O_T_Support_MG_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Gunner (HMG)
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",4,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacChestrig_oli_F";
        backpack = "O_HMG_01_weapon_F";
    };
};

class O_T_Support_GMG_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Gunner (GMG)
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",4,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacChestrig_oli_F";
        backpack = "O_GMG_01_weapon_F";
    };
};

class O_T_Support_AMort_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Asst. Gunner (Mk6)
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",4,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacChestrig_oli_F";
        backpack = "O_Mortar_01_support_F";
    };
};

class O_T_Support_AMG_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Asst. Gunner (HMG/GMG)
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",4,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacChestrig_oli_F";
        backpack = "O_HMG_01_support_F";
    };
};

class O_T_Soldier_PG_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Para Trooper
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",6,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessO_ghex_F";
        backpack = "B_Parachute";
    };
};

class O_T_Crew_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Crewman
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_F","","","",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",2,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetCrew_O_ghex_F";
        goggles = "G_Sport_Red";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_BandollierB_ghex_F";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Helipilot_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Helicopter Pilot
        scope = 2;
        primaryWeapon[] = {"SMG_02_ACO_F","","","optic_ACO_grn_smg",{"30Rnd_9x21_Mag_SMG_02_Tracer_Green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_9x21_Mag_SMG_02_Tracer_Green",3,30},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}}; 
        vestItems[] = {};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_CrewHelmetHeli_O";
        goggles = "";
        uniformClass = "U_O_PilotCoveralls";
        vestClass = "V_TacVest_oli";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Helicrew_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Helicopter Crew
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_F","","","",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}}; 
        vestItems[] = {};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_CrewHelmetHeli_O";
        goggles = "";
        uniformClass = "U_O_PilotCoveralls";
        vestClass = "V_TacVest_oli";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Pilot_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Pilot
        scope = 2;
        primaryWeapon[] = {"SMG_02_ACO_F","","","optic_ACO_grn_smg",{"30Rnd_9x21_Mag_SMG_02_Tracer_Green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_9x21_Mag_SMG_02_Tracer_Green",3,30},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",1,1}}; 
        vestItems[] = {};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_PilotHelmetFighter_O";
        goggles = "";
        uniformClass = "U_O_PilotCoveralls";
        vestClass = "B_FieldPack_ghex_F";
        backpack = "ACE_NonSteerableParachute";
    };
};

class O_T_Soldier_UAV_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: UAV Operator
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",6,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "O_UAV_01_backpack_F";
    };
};

class O_T_Sniper_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Sniper
        scope = 2;
        primaryWeapon[] = {"srifle_GM6_ghex_LRPS_F","","","optic_LRPS_ghex_F",{"5Rnd_127x108_Mag",5},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"5Rnd_127x108_Mag",1,5},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"5Rnd_127x108_Mag",2,5},{"5Rnd_127x108_APDS_Mag",2,5},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "";
        goggles = "";
        uniformClass = "U_O_T_Sniper_F";
        vestClass = "V_TacVest_oli";
        backpack = "tf_mr3000_bwmod";
    };
};

class O_T_ghillie_tna_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Sniper (Jungle)
        scope = 2;
        primaryWeapon[] = {"srifle_GM6_ghex_LRPS_F","","","optic_LRPS_ghex_F",{"5Rnd_127x108_Mag",5},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"5Rnd_127x108_Mag",2,5},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"5Rnd_127x108_Mag",1,5},{"5Rnd_127x108_APDS_Mag",2,5},{"16Rnd_9x21_Mag",2,17},{"ClaymoreDirectionalMine_Remote_Mag",1,1},{"APERSTripMine_Wire_Mag",1,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "";
        goggles = "";
        uniformClass = "U_O_T_FullGhillie_tna_F";
        vestClass = "V_Chestrig_khk";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Spotter_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Spotter
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ARCO_F","","","optic_Arco_ghex_F",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Laserdesignator_02","","","",{"Laserbatteries",1},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"30Rnd_580x42_Mag_F",3,30}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",2,30},{"16Rnd_9x21_Mag",2,17},{"ClaymoreDirectionalMine_Remote_Mag",1,1},{"APERSTripMine_Wire_Mag",1,1},{"MiniGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "";
        goggles = "";
        uniformClass = "U_O_T_Sniper_F";
        vestClass = "V_TacChestrig_oli_F";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Recon_TL_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Recon Team Leader
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ARCO_Pointer_Snds_F","muzzle_snds_58_blk_F","acc_pointer_IR","optic_Arco_ghex_F",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_Tracer_F",2,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetLeaderO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessOGL_ghex_F";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Recon_Medic_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Recon Paramedic
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","muzzle_snds_58_blk_F","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",2,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Medikit",1},{"FirstAidKit",5},{"SmokeShellRed",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1}};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetSpecO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessO_ghex_F";
        backpack = "B_FieldPack_ghex_OTReconMedic_F";
    };
};

class O_T_Recon_Exp_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Recon Demo Specialist
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","muzzle_snds_58_blk_F","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"30Rnd_580x42_Mag_F",2,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",3,30},{"16Rnd_9x21_Mag",2,17},{"APERSMine_Range_Mag",3,1},{"MiniGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"ToolKit",1},{"MineDetector",1},{"APERSBoundingMine_Range_Mag",3,1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"SLAMDirectionalMine_Wire_Mag",2,1},{"DemoCharge_Remote_Mag",1,1}};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetSpecO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessO_ghex_F";
        backpack = "B_Carryall_ghex_OTReconExp_F";
    };
};

class O_T_Recon_JTAC_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Recon JTAC
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_GL_blk_ACO_Pointer_Snds_F","muzzle_snds_58_blk_F","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{"1Rnd_HE_Grenade_shell",1},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Laserdesignator_02","","","",{"Laserbatteries",1},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",2,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"O_IR_Grenade",2,1},{"1Rnd_HE_Grenade_shell",5,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeRed_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1},{"1Rnd_SmokeYellow_Grenade_shell",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetSpecO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessOGL_ghex_F";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Recon_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Recon Scout
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","muzzle_snds_58_blk_F","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",6,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetSpecO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_HarnessO_ghex_F";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Recon_LAT_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Recon Scout (AT)
        scope = 2;
        primaryWeapon[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","muzzle_snds_58_blk_F","acc_pointer_IR","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""};
        secondaryWeapon[] = {"launch_RPG32_ghex_F","","","",{"RPG32_F",1},{},""};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_580x42_Mag_F",2,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"RPG32_F",2,1},{"RPG32_HE_F",2,1}};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","O_NVGoggles_ghex_F"};
        headgearClass = "H_HelmetSpecO_ghex_F";
        goggles = "";
        uniformClass = "U_O_T_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "B_FieldPack_ghex_OTRPG_AT_F";
    };
};

class O_T_Diver_TL_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Diver Team Leader
        scope = 2;
        primaryWeapon[] = {"arifle_SDAR_F","","","",{"20Rnd_556x45_UW_mag",20},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag_green",3,30},{"20Rnd_556x45_UW_mag",2,20},{"16Rnd_9x21_Mag",2,17},{"SmokeShellRed",2,1},{"Chemlight_red",4,1}}; 
        vestItems[] = {};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "";
        goggles = "G_O_Diving";
        uniformClass = "U_O_Wetsuit";
        vestClass = "V_RebreatherIR";
        backpack = "B_FieldPack_ghex_F";
    };
};

class O_T_Diver_Exp_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Diver Explosive Specialist
        scope = 2;
        primaryWeapon[] = {"arifle_SDAR_F","","","",{"20Rnd_556x45_UW_mag",20},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"30Rnd_556x45_Stanag_green",3,30},{"20Rnd_556x45_UW_mag",2,20},{"16Rnd_9x21_Mag",2,17},{"SmokeShellRed",2,1},{"Chemlight_red",4,1}}; 
        vestItems[] = {};
        backpackItems[] = {{"ToolKit",1},{"MineDetector",1},{"DemoCharge_Remote_Mag",3,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "";
        goggles = "G_O_Diving";
        uniformClass = "U_O_Wetsuit";
        vestClass = "V_RebreatherIR";
        backpack = "B_FieldPack_blk_DiverExp";
    };
};

class O_T_Diver_F
{
    class Loadout0
    {
        //Faction: CSAT (Pacific) Unit: Assault Diver
        scope = 2;
        primaryWeapon[] = {"arifle_SDAR_F","","","",{"20Rnd_556x45_UW_mag",20},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag_green",3,30},{"20Rnd_556x45_UW_mag",2,20},{"16Rnd_9x21_Mag",2,17},{"SmokeShellRed",2,1},{"Chemlight_red",4,1}}; 
        vestItems[] = {};
        backpackItems[] = {{"30Rnd_556x45_Stanag_green",2,30},{"20Rnd_556x45_UW_mag",2,20},{"SatchelCharge_Remote_Mag",1,1},{"MiniGrenade",3,1},{"SmokeShellRed",2,1},{"Chemlight_red",4,1},{{"Rangefinder","","","",{},{},""},1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "";
        goggles = "G_O_Diving";
        uniformClass = "U_O_Wetsuit";
        vestClass = "V_RebreatherIR";
        backpack = "O_Assault_Diver";
    };
};
