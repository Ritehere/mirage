//Faction: CTRG Infantry
class B_CTRG_Soldier_TL_tna_F
{
    class Loadout0
    {
        //Faction: CTRG Unit: Team Leader
        scope = 2;
        primaryWeapon[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","","acc_pointer_IR","optic_ERCO_blk_F",{"30Rnd_556x45_Stanag_red",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_P07_khk_Snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag_Tracer_Red",2,30},{"30Rnd_556x45_Stanag_red",1,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag_red",2,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        headgearClass = "H_HelmetB_TI_tna_F";
        goggles = "G_Balaclava_TI_G_tna_F";
        uniformClass = "U_B_CTRG_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "B_Kitbag_rgr";
    };
};

class B_CTRG_Soldier_Medic_tna_F
{
    class Loadout0
    {
        //Faction: CTRG Unit: Paramedic
        scope = 2;
        primaryWeapon[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","","acc_pointer_IR","optic_ERCO_blk_F",{"30Rnd_556x45_Stanag_red",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_P07_khk_Snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag_red",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag_red",2,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}};
        backpackItems[] = {{"Medikit",1},{"FirstAidKit",5},{"SmokeShellRed",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1}};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        headgearClass = "H_HelmetB_TI_tna_F";
        goggles = "G_Balaclava_TI_G_tna_F";
        uniformClass = "U_B_CTRG_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "B_AssaultPack_rgr_CTRGMedic_F";
    };
};

class B_CTRG_Soldier_Exp_tna_F
{
    class Loadout0
    {
        //Faction: CTRG Unit: Demo Specialist
        scope = 2;
        primaryWeapon[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","","acc_pointer_IR","optic_ERCO_blk_F",{"30Rnd_556x45_Stanag_red",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_P07_khk_Snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag_red",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag_red",2,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"APERSMine_Range_Mag",3,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}};
        backpackItems[] = {{"MineDetector",1},{"ToolKit",1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"APERSBoundingMine_Range_Mag",3,1},{"DemoCharge_Remote_Mag",1,1},{"SLAMDirectionalMine_Wire_Mag",2,1}};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        headgearClass = "H_HelmetB_TI_tna_F";
        goggles = "G_Balaclava_TI_G_tna_F";
        uniformClass = "U_B_CTRG_Soldier_F";
        vestClass = "V_PlateCarrierIAGL_oli";
        backpack = "B_Kitbag_rgr_CTRGExp_F";
    };
};

class B_CTRG_Soldier_JTAC_tna_F
{
    class Loadout0
    {
        //Faction: CTRG Unit: JTAC
        scope = 2;
        primaryWeapon[] = {"arifle_SPAR_01_GL_blk_ERCO_Pointer_F","","acc_pointer_IR","optic_ERCO_blk_F",{"30Rnd_556x45_Stanag_red",30},{"1Rnd_HE_Grenade_shell",1},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_P07_khk_Snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag_red",3,30}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag_red",2,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"B_IR_Grenade",2,1},{"1Rnd_HE_Grenade_shell",5,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",1,1},{"1Rnd_SmokeGreen_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        headgearClass = "H_HelmetB_TI_tna_F";
        goggles = "G_Balaclava_TI_G_tna_F";
        uniformClass = "U_B_CTRG_Soldier_F";
        vestClass = "V_PlateCarrierIAGL_oli";
        backpack = "B_Kitbag_rgr";
    };
};

class B_CTRG_Soldier_M_tna_F
{
    class Loadout0
    {
        //Faction: CTRG Unit: Marksman
        scope = 2;
        primaryWeapon[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_F","","acc_pointer_IR","optic_SOS",{"20Rnd_762x51_Mag",20},{},"bipod_01_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_P07_khk_Snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20},{"Chemlight_green",1,1}}; 
        vestItems[] = {{"20Rnd_762x51_Mag",5,20},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        headgearClass = "H_HelmetB_TI_tna_F";
        goggles = "G_Balaclava_TI_G_tna_F";
        uniformClass = "U_B_CTRG_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "B_Kitbag_rgr";
    };
};

class B_CTRG_Soldier_tna_F
{
    class Loadout0
    {
        //Faction: CTRG Unit: Scout
        scope = 2;
        primaryWeapon[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","","acc_pointer_IR","optic_ERCO_blk_F",{"30Rnd_556x45_Stanag_red",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_P07_khk_Snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag_red",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag_red",6,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        headgearClass = "H_HelmetB_TI_tna_F";
        goggles = "G_Balaclava_TI_G_tna_F";
        uniformClass = "U_B_CTRG_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "B_Kitbag_rgr";
    };
};

class B_CTRG_Soldier_LAT_tna_F
{
    class Loadout0
    {
        //Faction: CTRG Unit: Scout (AT)
        scope = 2;
        primaryWeapon[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","","acc_pointer_IR","optic_ERCO_blk_F",{"30Rnd_556x45_Stanag_red",30},{},""};
        secondaryWeapon[] = {"launch_NLAW_F","","","",{"NLAW_F",1},{},""};
        handgun[] = {"hgun_P07_khk_Snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_556x45_Stanag_red",3,30},{"SmokeShell",1,1}}; 
        vestItems[] = {{"30Rnd_556x45_Stanag_red",2,30},{"16Rnd_9x21_Mag",2,17},{"MiniGrenade",2,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}};
        backpackItems[] = {{"NLAW_F",2,1}};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        headgearClass = "H_HelmetB_TI_tna_F";
        goggles = "G_Balaclava_TI_G_tna_F";
        uniformClass = "U_B_CTRG_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "B_AssaultPack_rgr_CTRGLAT_F";
    };
};

class B_CTRG_Soldier_AR_tna_F
{
    class Loadout0
    {
        //Faction: CTRG Unit: Autorifleman
        scope = 2;
        primaryWeapon[] = {"arifle_SPAR_02_blk_ERCO_Pointer_F","","acc_pointer_IR","optic_ERCO_blk_F",{"150Rnd_556x45_Drum_Mag_F",150},{},"bipod_01_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_P07_khk_Snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"16Rnd_9x21_Mag",1,17},{"MiniGrenade",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}; 
        vestItems[] = {{"150Rnd_556x45_Drum_Mag_F",2,150},{"150Rnd_556x45_Drum_Mag_Tracer_F",1,150},{"16Rnd_9x21_Mag",1,17},{"SmokeShell",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        headgearClass = "H_HelmetB_TI_tna_F";
        goggles = "G_Balaclava_TI_G_tna_F";
        uniformClass = "U_B_CTRG_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "B_Kitbag_rgr";
    };
};
