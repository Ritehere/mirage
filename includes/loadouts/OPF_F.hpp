//Faction: CSAT Infantry
class O_officer_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Officer
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_F","","","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Pistol_heavy_02_Yorris_F","","","optic_Yorris",{"6Rnd_45ACP_Cylinder",6},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",1,30},{"6Rnd_45ACP_Cylinder",2,6},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Beret_ocamo";
        goggles = "";
        uniformClass = "U_O_OfficerUniform_ocamo";
        vestClass = "V_BandollierB_khk";
        backpack = "tf_mr3000";
    };
};

class O_Soldier_SL_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Squad Leader
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ARCO_pointer_F","","acc_pointer_IR","optic_Arco",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",1,30},{"30Rnd_65x39_caseless_green_mag_Tracer",2,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetLeaderO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_TacVest_khk";
        backpack = "tf_mr3000";
    };
};

class O_Soldier_TL_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Team Leader
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_GL_ARCO_pointer_F","","acc_pointer_IR","optic_Arco",{"30Rnd_65x39_caseless_green",30},{"1Rnd_HE_Grenade_shell",1},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",1,30},{"30Rnd_65x39_caseless_green_mag_Tracer",2,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"1Rnd_HE_Grenade_shell",5,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeRed_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1},{"1Rnd_SmokeYellow_Grenade_shell",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetLeaderO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_HarnessOGL_brn";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_medic_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Combat Life Saver
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_pointer_F","","acc_pointer_IR","",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Medikit",1},{"FirstAidKit",10}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_TacVest_khk";
        backpack = "B_FieldPack_ocamo_Medic";
    };
};

class O_engineer_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Engineer
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"30Rnd_65x39_caseless_green",1,30},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",4,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {{"ToolKit",1},{"MineDetector",1},{"SatchelCharge_Remote_Mag",1,1},{"DemoCharge_Remote_Mag",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_HarnessO_brn";
        backpack = "B_Carryall_ocamo_Eng";
    };
};

class O_soldier_exp_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Explosive Specialist
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"30Rnd_65x39_caseless_green",1,30},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",4,30},{"16Rnd_9x21_Mag",2,17},{"APERSMine_Range_Mag",3,1},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {{"MineDetector",1},{"APERSBoundingMine_Range_Mag",3,1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"SLAMDirectionalMine_Wire_Mag",2,1},{"DemoCharge_Remote_Mag",1,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_HarnessO_brn";
        backpack = "B_Carryall_ocamo_Exp";
    };
};

class O_soldier_repair_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Repair Specialist
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",3,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"ToolKit",1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_HarnessO_brn";
        backpack = "tf_mr3000";
    };
};

class O_Soldier_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Rifleman
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",7,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_HarnessO_brn";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_Soldier_GL_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Grenadier
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_GL_ACO_F","","","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{"1Rnd_HE_Grenade_shell",1},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30},{"1Rnd_SmokeRed_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1},{"1Rnd_SmokeYellow_Grenade_shell",1,1}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",3,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"1Rnd_HE_Grenade_shell",5,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"1Rnd_Smoke_Grenade_shell",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetLeaderO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_HarnessOGL_brn";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_Soldier_LAT_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Rifleman (AT)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_F","","","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {"launch_RPG32_F","","","",{"RPG32_F",1},{},""};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"RPG32_F",2,1},{"RPG32_HE_F",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_TacVest_khk";
        backpack = "B_FieldPack_cbr_LAT";
    };
};

class O_Soldier_lite_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Rifleman (Light)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_F","","","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",1,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_MilCap_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_BandollierB_khk";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_soldier_M_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Marksman
        scope = 2;
        primaryWeapon[] = {"srifle_DMR_01_DMS_BI_F","","","optic_DMS",{"10Rnd_762x54_Mag",10},{},"bipod_02_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"10Rnd_762x54_Mag",3,10},{"SmokeShell",1,1}}; 
        vestItems[] = {{"10Rnd_762x54_Mag",6,10},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "Bear_RoundGlasses";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_TacVest_khk";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_Soldier_AR_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Autorifleman
        scope = 2;
        primaryWeapon[] = {"LMG_Zafir_pointer_F","","acc_pointer_IR","",{"150Rnd_762x54_Box",150},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}; 
        vestItems[] = {{"150Rnd_762x54_Box",3,150},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_HarnessO_brn";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_Soldier_AT_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Missile Specialist (AT)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {"launch_O_Titan_short_F","","","",{"Titan_AT",1},{},""};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",3,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Titan_AT",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_TacVest_khk";
        backpack = "B_FieldPack_cbr_AT";
    };
};

class O_Soldier_AA_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Missile Specialist (AA)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {"launch_O_Titan_F","","","",{"Titan_AA",1},{},""};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",3,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Titan_AA",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_TacVest_khk";
        backpack = "B_FieldPack_ocamo_AA";
    };
};

class O_Soldier_AAR_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Asst. Autorifleman
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"optic_tws_mg",1},{"bipod_02_F_hex",1},{"muzzle_snds_93mmg",1},{"150Rnd_762x54_Box",1,150},{"150Rnd_762x54_Box_Tracer",1,150},{"150Rnd_93x64_Mag",2,150}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_Chestrig_khk";
        backpack = "B_Carryall_ocamo_AAR";
    };
};

class O_Soldier_AAT_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Asst. Missile Specialist (AT)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Titan_AT",2,1},{"Titan_AP",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_Chestrig_khk";
        backpack = "B_Carryall_cbr_AAT";
    };
};

class O_Soldier_AAA_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Asst. Missile Specialist (AA)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Titan_AA",3,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_Chestrig_khk";
        backpack = "B_Carryall_ocamo_AAA";
    };
};

class O_Soldier_A_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Ammo Bearer
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",9,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"FirstAidKit",4},{"30Rnd_65x39_caseless_green",6,30},{"150Rnd_762x54_Box",1,150},{"RPG32_F",1,1},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"1Rnd_HE_Grenade_shell",6,1},{"10Rnd_93x64_DMR_05_Mag",2,10},{"10Rnd_762x51_Mag",3,10}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_HarnessO_brn";
        backpack = "B_FieldPack_cbr_Ammo";
    };
};

class O_soldier_PG_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Para Trooper
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",7,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_HarnessO_brn";
        backpack = "B_Parachute";
    };
};

class O_soldier_UAV_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: UAV Operator
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30},{"HandGrenade",1,1},{"Chemlight_red",2,1}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",7,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_TacVest_brn";
        backpack = "O_UAV_01_backpack_F";
    };
};

class O_support_Mort_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Gunner (Mk6)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_Chestrig_khk";
        backpack = "O_Mortar_01_weapon_F";
    };
};

class O_support_MG_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Gunner (HMG)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_Chestrig_khk";
        backpack = "O_HMG_01_weapon_F";
    };
};

class O_support_GMG_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Gunner (GMG)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_Chestrig_khk";
        backpack = "O_GMG_01_weapon_F";
    };
};

class O_support_AMort_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Asst. Gunner (Mk6)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_Chestrig_khk";
        backpack = "O_Mortar_01_support_F";
    };
};

class O_support_AMG_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Asst. Gunner (HMG/GMG)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_Chestrig_khk";
        backpack = "O_HMG_01_support_F";
    };
};

class O_Pilot_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Pilot
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
        vestClass = "B_FieldPack_ocamo";
        backpack = "ACE_NonSteerableParachute";
    };
};

class O_helipilot_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Helicopter Pilot
        scope = 2;
        primaryWeapon[] = {"SMG_02_ACO_F","","","optic_ACO_grn_smg",{"30Rnd_9x21_Mag_SMG_02_Tracer_Green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_9x21_Mag_SMG_02_Tracer_Green",3,30},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}}; 
        vestItems[] = {};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_PilotHelmetHeli_O";
        goggles = "";
        uniformClass = "U_O_PilotCoveralls";
        vestClass = "V_TacVest_khk";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_helicrew_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Helicopter Crew
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_F","","","",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",3,30},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}}; 
        vestItems[] = {};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_CrewHelmetHeli_O";
        goggles = "Bear_RoundGlasses";
        uniformClass = "U_O_PilotCoveralls";
        vestClass = "V_TacVest_khk";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_HeavyGunner_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Heavy Gunner
        scope = 2;
        primaryWeapon[] = {"MMG_01_hex_ARCO_LP_F","","acc_pointer_IR","optic_Arco",{"150Rnd_93x64_Mag",150},{},"bipod_02_F_hex"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}}; 
        vestItems[] = {{"150Rnd_93x64_Mag",2,150}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_HarnessO_brn";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_Sharpshooter_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Sharpshooter
        scope = 2;
        primaryWeapon[] = {"srifle_DMR_05_KHS_LP_F","","acc_pointer_IR","optic_KHS_blk",{"10Rnd_93x64_DMR_05_Mag",10},{},"bipod_02_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"10Rnd_93x64_DMR_05_Mag",1,10},{"SmokeShell",1,1}}; 
        vestItems[] = {{"10Rnd_93x64_DMR_05_Mag",6,10},{"16Rnd_9x21_Mag",2,17},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"HandGrenade",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_ocamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_ocamo";
        vestClass = "V_HarnessO_brn";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_sniper_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Sniper
        scope = 2;
        primaryWeapon[] = {"srifle_GM6_camo_LRPS_F","","","optic_LRPS",{"5Rnd_127x108_Mag",5},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"5Rnd_127x108_Mag",2,5},{"SmokeShell",1,1}}; 
        vestItems[] = {{"5Rnd_127x108_Mag",1,5},{"5Rnd_127x108_APDS_Mag",2,5},{"16Rnd_9x21_Mag",2,17},{"ClaymoreDirectionalMine_Remote_Mag",1,1},{"APERSTripMine_Wire_Mag",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "";
        goggles = "";
        uniformClass = "U_O_GhillieSuit";
        vestClass = "V_Chestrig_khk";
        backpack = "tf_mr3000";
    };
};

class O_spotter_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Spotter
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ARCO_F","","","optic_Arco",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Laserdesignator_02","","","",{"Laserbatteries",1},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"30Rnd_65x39_caseless_green",4,30},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",1,30},{"16Rnd_9x21_Mag",2,17},{"ClaymoreDirectionalMine_Remote_Mag",1,1},{"APERSTripMine_Wire_Mag",1,1},{"MiniGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "";
        goggles = "";
        uniformClass = "U_O_GhillieSuit";
        vestClass = "V_Chestrig_khk";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_diver_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Assault Diver
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

class O_diver_exp_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Diver Explosive Specialist
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

class O_diver_TL_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Diver Team Leader
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
        backpack = "B_FieldPack_ocamo";
    };
};

class O_recon_TL_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Recon Team Leader
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ARCO_pointer_snds_F","muzzle_snds_H","acc_pointer_IR","optic_Arco",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",1,1},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",3,30},{"30Rnd_65x39_caseless_green_mag_Tracer",2,30},{"MiniGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetLeaderO_ocamo";
        goggles = "";
        uniformClass = "U_O_SpecopsUniform_ocamo";
        vestClass = "V_HarnessOGL_brn";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_recon_medic_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Recon Paramedic
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_pointer_snds_F","muzzle_snds_H","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",1,1},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {{"Medikit",1},{"FirstAidKit",5},{"SmokeShellRed",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1}};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetSpecO_ocamo";
        goggles = "";
        uniformClass = "U_O_SpecopsUniform_ocamo";
        vestClass = "V_HarnessO_brn";
        backpack = "B_FieldPack_ocamo_ReconMedic";
    };
};

class O_recon_exp_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Recon Demo Specialist
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_snds_F","muzzle_snds_H","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"16Rnd_9x21_Mag",2,17}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"APERSMine_Range_Mag",3,1},{"MiniGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"ToolKit",1},{"MineDetector",1},{"APERSBoundingMine_Range_Mag",3,1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"SLAMDirectionalMine_Wire_Mag",2,1},{"DemoCharge_Remote_Mag",1,1}};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetSpecO_ocamo";
        goggles = "";
        uniformClass = "U_O_SpecopsUniform_ocamo";
        vestClass = "V_HarnessO_brn";
        backpack = "B_FieldPack_ocamo_ReconExp";
    };
};

class O_Pathfinder_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Recon Pathfinder
        scope = 2;
        primaryWeapon[] = {"srifle_DMR_04_NS_LP_F","","acc_pointer_IR","optic_Nightstalker",{"10Rnd_127x54_Mag",10},{},"bipod_02_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Laserdesignator_02","","","",{"Laserbatteries",1},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"10Rnd_127x54_Mag",2,10}}; 
        vestItems[] = {{"10Rnd_127x54_Mag",5,10},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"MiniGrenade",3,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetSpecO_ocamo";
        goggles = "";
        uniformClass = "U_O_SpecopsUniform_ocamo";
        vestClass = "V_HarnessO_brn";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_recon_M_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Recon Marksman
        scope = 2;
        primaryWeapon[] = {"srifle_DMR_01_DMS_snds_BI_F","muzzle_snds_B","","optic_DMS",{"10Rnd_762x54_Mag",10},{},"bipod_02_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"10Rnd_762x54_Mag",3,10},{"SmokeShell",1,1}}; 
        vestItems[] = {{"10Rnd_762x54_Mag",6,10},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetSpecO_blk";
        goggles = "";
        uniformClass = "U_O_SpecopsUniform_ocamo";
        vestClass = "V_TacVest_khk";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_recon_JTAC_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Recon JTAC
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_GL_ACO_pointer_snds_F","muzzle_snds_H","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{"1Rnd_HE_Grenade_shell",1},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Laserdesignator_02","","","",{"Laserbatteries",1},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",1,1},{"Chemlight_red",1,1},{"1Rnd_SmokeRed_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1},{"1Rnd_SmokeYellow_Grenade_shell",1,1}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"MiniGrenade",1,1},{"O_IR_Grenade",2,1},{"1Rnd_HE_Grenade_shell",5,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",1,1},{"1Rnd_Smoke_Grenade_shell",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetLeaderO_ocamo";
        goggles = "";
        uniformClass = "U_O_SpecopsUniform_ocamo";
        vestClass = "V_HarnessOGL_brn";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_recon_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Recon Scout
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_snds_F","muzzle_snds_H","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",7,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetSpecO_ocamo";
        goggles = "";
        uniformClass = "U_O_SpecopsUniform_ocamo";
        vestClass = "V_HarnessO_brn";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_recon_LAT_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Recon Scout (AT)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_snds_F","muzzle_snds_H","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {"launch_RPG32_F","","","",{"RPG32_F",1},{},""};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",1,1},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"MiniGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {{"RPG32_F",2,1},{"RPG32_HE_F",2,1}};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetSpecO_blk";
        goggles = "";
        uniformClass = "U_O_SpecopsUniform_ocamo";
        vestClass = "V_TacVest_khk";
        backpack = "B_FieldPack_cbr_RPG_AT";
    };
};

class O_ghillie_ard_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Sniper (Arid)
        scope = 2;
        primaryWeapon[] = {"srifle_GM6_camo_LRPS_F","","","optic_LRPS",{"5Rnd_127x108_Mag",5},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"5Rnd_127x108_Mag",2,5},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"5Rnd_127x108_Mag",1,5},{"5Rnd_127x108_APDS_Mag",2,5},{"16Rnd_9x21_Mag",2,17},{"ClaymoreDirectionalMine_Remote_Mag",1,1},{"APERSTripMine_Wire_Mag",1,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "";
        goggles = "";
        uniformClass = "U_O_FullGhillie_ard";
        vestClass = "V_Chestrig_khk";
        backpack = "B_FieldPack_ocamo";
    };
};

class O_ghillie_sard_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Sniper (Semi-Arid)
        scope = 2;
        primaryWeapon[] = {"srifle_GM6_camo_LRPS_F","","","optic_LRPS",{"5Rnd_127x108_Mag",5},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"5Rnd_127x108_Mag",2,5},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"5Rnd_127x108_Mag",1,5},{"5Rnd_127x108_APDS_Mag",2,5},{"16Rnd_9x21_Mag",2,17},{"ClaymoreDirectionalMine_Remote_Mag",1,1},{"APERSTripMine_Wire_Mag",1,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "";
        goggles = "";
        uniformClass = "U_O_FullGhillie_sard";
        vestClass = "V_Chestrig_khk";
        backpack = "B_FieldPack_ocamo";
    };
};

//Guard Infantry
class O_SoldierU_SL_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Squad Leader
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ARCO_pointer_F","","acc_pointer_IR","optic_Arco",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",1,30},{"30Rnd_65x39_caseless_green_mag_Tracer",2,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetLeaderO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_TacVest_blk";
        backpack = "B_FieldPack_oucamo";
    };
};

class O_soldierU_TL_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Team Leader
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_GL_ARCO_pointer_F","","acc_pointer_IR","optic_Arco",{"30Rnd_65x39_caseless_green",30},{"1Rnd_HE_Grenade_shell",1},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",1,30},{"30Rnd_65x39_caseless_green_mag_Tracer",2,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"1Rnd_HE_Grenade_shell",5,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeRed_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1},{"1Rnd_SmokeYellow_Grenade_shell",1,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetLeaderO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_HarnessOGL_gry";
        backpack = "B_FieldPack_oucamo";
    };
};

class O_soldierU_medic_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Combat Life Saver
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_pointer_F","","acc_pointer_IR","",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",3,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Medikit",1},{"FirstAidKit",5},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellYellow",1,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_HarnessO_gry";
        backpack = "B_FieldPack_oucamo_Medic";
    };
};

class O_engineer_U_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Engineer
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"30Rnd_65x39_caseless_green",1,30},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",4,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {{"ToolKit",1},{"MineDetector",1},{"SatchelCharge_Remote_Mag",1,1},{"DemoCharge_Remote_Mag",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_HarnessO_gry";
        backpack = "B_Carryall_oucamo_Eng";
    };
};

class O_SoldierU_GL_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Grenadier
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_GL_ACO_F","","","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{"1Rnd_HE_Grenade_shell",1},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",3,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"1Rnd_HE_Grenade_shell",5,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeRed_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1},{"1Rnd_SmokeYellow_Grenade_shell",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetLeaderO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_HarnessOGL_gry";
        backpack = "B_FieldPack_oucamo";
    };
};

class O_soldierU_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Rifleman
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",7,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_HarnessO_gry";
        backpack = "B_FieldPack_oucamo";
    };
};

class O_soldierU_LAT_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Rifleman (AT)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {"launch_RPG32_F","","","",{"RPG32_F",1},{},""};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"RPG32_F",2,1},{"RPG32_HE_F",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_TacVest_blk";
        backpack = "B_FieldPack_oucamo_LAT";
    };
};

class O_soldierU_M_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Marksman
        scope = 2;
        primaryWeapon[] = {"srifle_DMR_01_DMS_F","","","optic_DMS",{"10Rnd_762x54_Mag",10},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"10Rnd_762x54_Mag",3,10},{"SmokeShell",1,1}}; 
        vestItems[] = {{"10Rnd_762x54_Mag",6,10},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_TacVest_blk";
        backpack = "B_FieldPack_oucamo";
    };
};

class O_soldierU_AR_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Autorifleman
        scope = 2;
        primaryWeapon[] = {"LMG_Zafir_pointer_F","","acc_pointer_IR","",{"150Rnd_762x54_Box",150},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}}; 
        vestItems[] = {{"150Rnd_762x54_Box",3,150},{"HandGrenade",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_HarnessO_gry";
        backpack = "B_FieldPack_oucamo";
    };
};

class O_soldierU_AT_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Missile Specialist (AT)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {"launch_O_Titan_short_F","","","",{"Titan_AT",1},{},""};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",3,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Titan_AT",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_TacVest_blk";
        backpack = "B_FieldPack_oucamo_AT";
    };
};

class O_soldierU_AA_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Missile Specialist (AA)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {"launch_O_Titan_F","","","",{"Titan_AA",1},{},""};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",3,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Titan_AA",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_TacVest_blk";
        backpack = "B_FieldPack_oucamo_AA";
    };
};

class O_soldierU_AAR_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Asst. Autorifleman
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"optic_tws_mg",1},{"bipod_02_F_hex",1},{"muzzle_snds_93mmg",1},{"150Rnd_762x54_Box",1,150},{"150Rnd_762x54_Box_Tracer",1,150},{"150Rnd_93x64_Mag",2,150}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_HarnessO_gry";
        backpack = "B_Carryall_oucamo_AAR";
    };
};

class O_soldierU_AAT_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Asst. Missile Specialist (AT)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Titan_AT",2,1},{"Titan_AP",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_HarnessO_gry";
        backpack = "B_Carryall_oucamo_AAT";
    };
};

class O_soldierU_AAA_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Asst. Missile Specialist (AA)
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"Titan_AA",3,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_HarnessO_gry";
        backpack = "B_Carryall_oucamo_AAA";
    };
};

class O_soldierU_A_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Ammo Bearer
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_65x39_caseless_green",2,30}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",9,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}};
        backpackItems[] = {{"FirstAidKit",4},{"30Rnd_65x39_caseless_green",6,30},{"150Rnd_762x54_Box",1,150},{"RPG32_F",1,1},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"1Rnd_HE_Grenade_shell",6,1},{"10Rnd_93x64_DMR_05_Mag",2,10},{"10Rnd_762x51_Mag",3,10}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_HarnessO_gry";
        backpack = "B_FieldPack_oucamo_Ammo";
    };
};

class O_soldierU_exp_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Explosive Specialist
        scope = 2;
        primaryWeapon[] = {"arifle_Katiba_C_ACO_pointer_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"30Rnd_65x39_caseless_green",1,30},{"Chemlight_red",1,1}}; 
        vestItems[] = {{"30Rnd_65x39_caseless_green",4,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"APERSMine_Range_Mag",3,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",1,1}};
        backpackItems[] = {{"MineDetector",1},{"APERSBoundingMine_Range_Mag",3,1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"SLAMDirectionalMine_Wire_Mag",2,1},{"DemoCharge_Remote_Mag",1,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_HarnessO_gry";
        backpack = "B_Carryall_oucamo_Exp";
    };
};

class O_Urban_HeavyGunner_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Heavy Gunner
        scope = 2;
        primaryWeapon[] = {"MMG_01_hex_ARCO_LP_F","","acc_pointer_IR","optic_Arco",{"150Rnd_93x64_Mag",150},{},"bipod_02_F_hex"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}}; 
        vestItems[] = {{"150Rnd_93x64_Mag",2,150}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_HarnessO_gry";
        backpack = "B_FieldPack_oucamo";
    };
};

class O_Urban_Sharpshooter_F
{
    class Loadout0
    {
        //Faction: CSAT Unit: Sharpshooter
        scope = 2;
        primaryWeapon[] = {"srifle_DMR_05_KHS_LP_F","","acc_pointer_IR","optic_KHS_blk",{"10Rnd_93x64_DMR_05_Mag",10},{},"bipod_02_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"10Rnd_93x64_DMR_05_Mag",1,10},{"SmokeShell",1,1}}; 
        vestItems[] = {{"10Rnd_93x64_DMR_05_Mag",6,10},{"16Rnd_9x21_Mag",2,17},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"HandGrenade",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles_OPFOR"};
        headgearClass = "H_HelmetO_oucamo";
        goggles = "";
        uniformClass = "U_O_CombatUniform_oucamo";
        vestClass = "V_HarnessO_gry";
        backpack = "B_FieldPack_oucamo";
    };
};

