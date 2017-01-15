//Faction: NATO Infantry
class B_Soldier_lite_F
{
    class Loadout0
    {
        //Faction: NATO Unit: Rifleman (Light)
        scope = 2;
        primaryWeapon[] = {"hlc_smg_mp5a4","","acc_pointer_IR","optic_Holosight_blk_F",{"hlc_30Rnd_9x19_B_MP5",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_L",1},{"NVGoggles_tna_F",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Red",1,1},{"hlc_30Rnd_9x19_B_MP5",9,30}};
        backpackItems[] = {{"SmokeShellBlue",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Red",8,1},{"Chemlight_green",6,1},{"hlc_30Rnd_9x19_B_MP5",3,30}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "";
        goggles = "";
        uniformClass = "U_B_T_Soldier_F";
        vestClass = "V_TacVest_oli";
        backpack = "B_AssaultPack_tna_F";
    };
};

class B_Sharpshooter_F
{
    class Loadout0
    {
        //Faction: NATO, Unit: Sharpshooter
        scope = 2;
        primaryWeapon[] = {"srifle_DMR_03_tan_AMS_LP_F","","acc_pointer_IR","optic_AMS_snd",{"20Rnd_762x51_Mag",20},{},"bipod_01_F_snd"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20}}; 
        vestItems[] = {{"20Rnd_762x51_Mag",5,20},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};
        headgearClass = "H_HelmetB";
        goggles = "";
        uniformClass = "U_B_CombatUniform_mcam";
        vestClass = "V_PlateCarrier1_rgr";
        backpack = "B_Kitbag_rgr";
    };
};

class B_HeavyGunner_F
{
    class Loadout0
    {
        //Faction: NATO, Unit: Heavy Gunner
        scope = 2;
        primaryWeapon[] = {"MMG_02_sand_RCO_LP_F","","acc_pointer_IR","optic_Hamr",{"130Rnd_338_Mag",130},{},"bipod_01_F_snd"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}; 
        vestItems[] = {{"130Rnd_338_Mag",2,130}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};
        headgearClass = "H_HelmetB";
        goggles = "G_Aviator";
        uniformClass = "U_B_CombatUniform_mcam";
        vestClass = "V_PlateCarrier1_rgr";
        backpack = "B_Kitbag_rgr";
    };
};

class B_Recon_Sharpshooter_F
{
    class Loadout0
    {
        //Faction: NATO, Unit: Recon Sharpshooter
        scope = 2;
        primaryWeapon[] = {"srifle_DMR_02_sniper_AMS_LP_S_F","muzzle_snds_338_sand","acc_pointer_IR","optic_AMS_snd",{"10Rnd_338_Mag",10},{},"bipod_01_F_snd"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_P07_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"10Rnd_338_Mag",1,10},{"Chemlight_green",1,1}}; 
        vestItems[] = {{"10Rnd_338_Mag",6,10},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1},{"MiniGrenade",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};
        headgearClass = "H_Watchcap_camo";
        goggles = "G_Combat";
        uniformClass = "U_B_CombatUniform_mcam";
        vestClass = "V_Chestrig_rgr";
        backpack = "B_Kitbag_rgr";
    };
};
