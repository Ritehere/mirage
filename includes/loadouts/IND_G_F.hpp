//Faction: FIA(Green) Infantry
class I_G_officer_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Officer
        scope = 2;
        primaryWeapon[] = {"arifle_TRG21_MRCO_F","","","optic_MRCO",{"30Rnd_556x45_Stanag",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag",2,30},{"Chemlight_blue",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag",1,30},{"9Rnd_45ACP_Mag",1,8},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellRed",1,1},{"SmokeShellBlue",1,1},{"Chemlight_blue",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Watchcap_blk";
        goggles = "";
        uniformClass = "U_BG_Guerilla2_3";
        vestClass = "V_Chestrig_oli";
        backpack = "B_TacticalPack_blk";
    };
};

class I_G_Soldier_SL_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Squad Leader
        scope = 2;
        primaryWeapon[] = {"arifle_TRG20_ACO_F","","","optic_ACO_grn",{"30Rnd_556x45_Stanag",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag_Tracer_Yellow",2,30},{"9Rnd_45ACP_Mag",1,8},{"HandGrenade",1,1},{"MiniGrenade",1,1},{"SmokeShellGreen",1,1},{"SmokeShellRed",1,1},{"SmokeShellBlue",1,1},{"Chemlight_blue",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Watchcap_blk";
        goggles = "";
        uniformClass = "U_BG_leader";
        vestClass = "V_Chestrig_blk";
        backpack = "B_TacticalPack_blk";
    };
};

class I_G_Soldier_TL_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Team Leader
        scope = 2;
        primaryWeapon[] = {"arifle_Mk20_GL_ACO_F","","","optic_ACO_grn",{"30Rnd_556x45_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag",3,30}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag_Tracer_Yellow",2,30},{"9Rnd_45ACP_Mag",1,8},{"HandGrenade",1,1},{"MiniGrenade",1,1},{"1Rnd_HE_Grenade_shell",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_blue",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeGreen_Grenade_shell",1,1},{"1Rnd_SmokeRed_Grenade_shell",1,1},{"1Rnd_SmokeBlue_Grenade_shell",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Booniehat_khk";
        goggles = "";
        uniformClass = "U_BG_leader";
        vestClass = "V_TacVest_blk";
        backpack = "B_TacticalPack_blk";
    };
};

class I_G_medic_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Combat Life Saver
        scope = 2;
        primaryWeapon[] = {"arifle_Mk20_F","","","",{"30Rnd_556x45_Stanag",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag",2,30},{"Chemlight_blue",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag",3,30},{"9Rnd_45ACP_Mag",1,8},{"MiniGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellRed",1,1},{"SmokeShellBlue",1,1},{"Chemlight_blue",1,1}};
        backpackItems[] = {{"Medikit",1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Cap_oli";
        goggles = "";
        uniformClass = "U_BG_Guerilla2_3";
        vestClass = "V_TacVest_blk";
        backpack = "G_FieldPack_Medic";
    };
};

class I_G_engineer_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Engineer
        scope = 2;
        primaryWeapon[] = {"arifle_TRG20_ACO_F","","","optic_ACO_grn",{"30Rnd_556x45_Stanag",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"30Rnd_556x45_Stanag",1,30},{"Chemlight_blue",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag",4,30},{"MiniGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellRed",1,1},{"SmokeShellBlue",1,1},{"Chemlight_blue",1,1}};
        backpackItems[] = {{"ToolKit",1},{"MineDetector",1},{"SatchelCharge_Remote_Mag",1,1},{"DemoCharge_Remote_Mag",2,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Watchcap_camo";
        goggles = "";
        uniformClass = "U_BG_Guerilla2_2";
        vestClass = "V_Chestrig_blk";
        backpack = "G_TacticalPack_Eng";
    };
};

class I_G_Soldier_exp_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Explosive Specialist
        scope = 2;
        primaryWeapon[] = {"arifle_Mk20C_ACO_F","","","optic_ACO_grn",{"30Rnd_556x45_Stanag",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"30Rnd_556x45_Stanag",1,30},{"Chemlight_blue",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag",4,30},{"HandGrenade",1,1},{"MiniGrenade",1,1},{"APERSMine_Range_Mag",3,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_blue",1,1}};
        backpackItems[] = {{"MineDetector",1},{"APERSBoundingMine_Range_Mag",2,1},{"SLAMDirectionalMine_Wire_Mag",1,1},{"DemoCharge_Remote_Mag",1,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Shemag_olive";
        goggles = "";
        uniformClass = "U_BG_Guerilla2_1";
        vestClass = "V_Chestrig_blk";
        backpack = "G_Carryall_Exp";
    };
};

class I_G_Soldier_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Rifleman
        scope = 2;
        primaryWeapon[] = {"arifle_TRG21_F","","","",{"30Rnd_556x45_Stanag",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag",2,30},{"Chemlight_blue",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag",3,30},{"HandGrenade",1,1},{"MiniGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_blue",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Shemag_olive";
        goggles = "";
        uniformClass = "U_BG_Guerilla1_1";
        vestClass = "V_Chestrig_oli";
        backpack = "B_TacticalPack_blk";
    };
};

class I_G_Soldier_GL_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Grenadier
        scope = 2;
        primaryWeapon[] = {"arifle_TRG21_GL_F","","","",{"30Rnd_556x45_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""};
        secondaryWeapon[] = {};
        handgun[] = {};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag",2,30},{"Chemlight_blue",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag",3,30},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"1Rnd_HE_Grenade_shell",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_blue",1,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeGreen_Grenade_shell",1,1},{"1Rnd_SmokeRed_Grenade_shell",1,1},{"1Rnd_SmokeBlue_Grenade_shell",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Bandanna_khk";
        goggles = "";
        uniformClass = "U_BG_Guerilla2_3";
        vestClass = "V_Chestrig_blk";
        backpack = "B_TacticalPack_blk";
    };
};

class I_G_Soldier_M_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Marksman
        scope = 2;
        primaryWeapon[] = {"arifle_Mk20_MRCO_F","","","optic_MRCO",{"30Rnd_556x45_Stanag",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag",4,30},{"MiniGrenade",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag",3,30},{"HandGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_blue",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Shemag_olive";
        goggles = "Bear_RoundGlasses_gold";
        uniformClass = "U_BG_Guerilla3_1";
        vestClass = "V_BandollierB_khk";
        backpack = "B_TacticalPack_blk";
    };
};

class I_G_Soldier_LAT_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Rifleman (AT)
        scope = 2;
        primaryWeapon[] = {"arifle_TRG21_F","","","",{"30Rnd_556x45_Stanag",30},{},""};
        secondaryWeapon[] = {"launch_RPG32_F","","","",{"RPG32_F",1},{},""};
        handgun[] = {};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag",2,30},{"Chemlight_blue",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag",3,30},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_blue",1,1}};
        backpackItems[] = {{"RPG32_F",2,1},{"RPG32_HE_F",1,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Bandanna_khk";
        goggles = "";
        uniformClass = "U_BG_Guerrilla_6_1";
        vestClass = "V_TacVest_blk";
        backpack = "G_FieldPack_LAT";
    };
};

class I_G_Soldier_lite_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Rifleman (Light)
        scope = 2;
        primaryWeapon[] = {"arifle_TRG20_F","","","",{"30Rnd_556x45_Stanag",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag",2,30},{"Chemlight_blue",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag",1,30},{"MiniGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_blue",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Cap_oli";
        goggles = "";
        uniformClass = "U_BG_Guerilla1_1";
        vestClass = "V_BandollierB_blk";
        backpack = "B_TacticalPack_blk";
    };
};

class I_G_Sharpshooter_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Sharpshooter
        scope = 2;
        primaryWeapon[] = {"srifle_DMR_06_camo_khs_F","","","optic_KHS_old",{"20Rnd_762x51_Mag",20},{},""};
        secondaryWeapon[] = {};
        handgun[] = {};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20},{"Chemlight_blue",1,1}}; 
        vestItems[] = {{"20Rnd_762x51_Mag",5,20},{"HandGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_blue",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Shemag_olive";
        goggles = "";
        uniformClass = "U_BG_leader";
        vestClass = "V_BandollierB_oli";
        backpack = "B_TacticalPack_blk";
    };
};

class I_G_Soldier_AR_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Autorifleman
        scope = 2;
        primaryWeapon[] = {"LMG_Mk200_BI_F","","","",{"200Rnd_65x39_cased_Box",200},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"HandGrenade",1,1},{"MiniGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_blue",1,1}}; 
        vestItems[] = {{"200Rnd_65x39_cased_Box",2,200}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Bandanna_khk";
        goggles = "";
        uniformClass = "U_BG_Guerilla2_1";
        vestClass = "V_TacVest_blk";
        backpack = "B_TacticalPack_blk";
    };
};

class I_G_Soldier_A_F
{
    class Loadout0
    {
        //Faction: FIA Unit: Ammo Bearer
        scope = 2;
        primaryWeapon[] = {"arifle_TRG20_F","","","",{"30Rnd_556x45_Stanag",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag",2,30},{"Chemlight_blue",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag",9,30},{"HandGrenade",1,1},{"MiniGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_blue",1,1}};
        backpackItems[] = {{"FirstAidKit",4},{"30Rnd_556x45_Stanag",8,30},{"200Rnd_65x39_cased_Box",1,200},{"RPG32_F",1,1},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"1Rnd_HE_Grenade_shell",6,1},{"20Rnd_762x51_Mag",3,20},{"SmokeShell",2,1},{"SmokeShellGreen",1,1},{"SmokeShellRed",1,1},{"SmokeShellBlue",1,1}};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Booniehat_khk";
        goggles = "";
        uniformClass = "U_BG_Guerilla1_1";
        vestClass = "V_Chestrig_oli";
        backpack = "G_Carryall_Ammo";
    };
};
