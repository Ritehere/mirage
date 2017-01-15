//Faction: AAF Infantry
class I_officer_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Officer
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36C","","","optic_MRCO",{"hlc_30rnd_556x45_EPR_G36",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Laserdesignator_03","","","",{"Laserbatteries",1},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1},{"hlc_30rnd_556x45_EPR_G36",3,30},{"hlc_30rnd_556x45_Tracers_G36",8,30}};
        backpackItems[] = {{"ACE_quikclot",18},{"ACE_bloodIV_500",4},{"ACE_epinephrine",8},{"ACE_morphine",20},{"ACE_CableTie",8},{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1}};
        linkedItems[] = {"ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Beret_blk";
        goggles = "";
        uniformClass = "U_I_OfficerUniform";
        vestClass = "V_Chestrig_oli";
        backpack = "tf_anprc155";
    };
};

class I_Soldier_SL_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Squad Leader
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_MRCO",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {{"ACE_quikclot",16},{"ACE_bloodIV_250",2},{"ACE_epinephrine",8},{"ACE_morphine",16},{"ACE_CableTie",8},{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1}};
        linkedItems[] = {"ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetB_camo";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "tf_anprc155";
    };
};

class I_Soldier_TL_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Team Leader
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36VAG36","","","optic_MRCO",{"hlc_30rnd_556x45_EPR_G36",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1},{"hlc_30rnd_556x45_EPR_G36",8,30},{"1Rnd_HE_Grenade_shell",7,1}};
        backpackItems[] = {{"ACE_quikclot",16},{"ACE_bloodIV_250",2},{"ACE_epinephrine",8},{"ACE_morphine",16},{"ACE_CableTie",8},{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1},{"1Rnd_SmokeRed_Grenade_shell",4,1},{"1Rnd_SmokeGreen_Grenade_shell",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_HE_Grenade_shell",4,1}};
        linkedItems[] = {"ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetB";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "V_PlateCarrierIAGL_dgtl";
        backpack = "B_Kitbag_rgr";
    };
};

class I_medic_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Combat Life Saver
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {{"ACE_quikclot",40},{"ACE_bloodIV_500",12},{"ACE_epinephrine",16},{"ACE_morphine",30},{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetIA";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "B_Kitbag_rgr";
    };
};

class I_engineer_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Engineer
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {{"ACE_DefusalKit",1},{"ACE_M26_Clacker",1},{"ToolKit",1},{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1},{"DemoCharge_Remote_Mag",4,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Cap_blk_Raven";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "B_Carryall_oli";
    };
};

class I_Soldier_exp_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Explosive Specialist
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {{"ACE_DefusalKit",1},{"ACE_M26_Clacker",1},{"ToolKit",1},{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1},{"SatchelCharge_Remote_Mag",1,1},{"DemoCharge_Remote_Mag",3,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Cap_blk_Raven";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "B_Carryall_oli";
    };
};

class I_Soldier_repair_F
{
    class Loadout0
    {
        //Used as a Crew Leader for armored vehicles
        //Faction: AAF Unit: Repair Specialist
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36CTac","","acc_pointer_IR","optic_MRCO",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1},{"hlc_30rnd_556x45_EPR_G36",9,30},{"hlc_30rnd_556x45_Tracers_G36",5,30}};
        backpackItems[] = {{"ToolKit",1},{"SmokeShellGreen",6,1},{"SmokeShell",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetCrew_I";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "tf_anprc155";
    };
};

class I_Soldier_AR_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Autorifleman
        scope = 2;
        primaryWeapon[] = {"hlc_m249_pip4","","acc_pointer_IR","",{"hlc_200rnd_556x45_M_SAW",200},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",2,1},{"ACE_M84",2,1},{"hlc_200rnd_556x45_M_SAW",2,200},{"MiniGrenade",1,1}};
        backpackItems[] = {{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1},{"hlc_200rnd_556x45_M_SAW",2,200},{"MiniGrenade",1,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Shemag_olive";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "B_Kitbag_rgr";
    };
};

class I_Soldier_AT_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Missile Specialist (AT)
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36CTac","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {"launch_I_Titan_short_F","","","",{"Titan_AT",1},{},""};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1},{"hlc_30rnd_556x45_EPR_G36",7,30}};
        backpackItems[] = {{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1},{"Titan_AT",2,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetIA";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "B_Carryall_oli";
    };
};

class I_Soldier_AA_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Missile Specialist (AA)
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36CTac","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {"launch_I_Titan_F","","","",{"Titan_AA",1},{},""};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1},{"hlc_30rnd_556x45_EPR_G36",7,30}};
        backpackItems[] = {{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1},{"Titan_AA",2,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetIA";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "B_Carryall_oli";
    };
};

class I_Soldier_AAR_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Asst. Autorifleman
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1},{"hlc_200rnd_556x45_B_SAW",3,200}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetIA";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "B_Kitbag_rgr";
    };
};

class I_Soldier_AAA_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Asst. Missile Specialist (AA)
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36CTac","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1},{"hlc_30rnd_556x45_EPR_G36",7,30}};
        backpackItems[] = {{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1},{"Titan_AA",2,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetIA";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "B_Carryall_oli";
    };
};

class I_Soldier_AAT_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Asst. Missile Specialist (AT)
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36CTac","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1},{"hlc_30rnd_556x45_EPR_G36",7,30}};
        backpackItems[] = {{"SmokeShellGreen",2,1},{"ACE_HandFlare_Green",4,1},{"Chemlight_green",6,1},{"Titan_AT",2,1},{"Titan_AP",1,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetIA";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "B_Carryall_oli";
    };
};

class I_soldier_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Rifleman
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Bandanna_surfer_grn";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "B_Kitbag_rgr";
    };
};

class I_Soldier_LAT_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Rifleman (AT)
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {"launch_NLAW_F","","","",{"NLAW_F",1},{},""};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {{"SmokeShellGreen",2,1},{"ACE_HandFlare_Green",4,1},{"Chemlight_green",6,1},{"NLAW_F",3,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Bandanna_surfer_grn";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "B_Kitbag_rgr";
    };
};

class I_Soldier_lite_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Rifleman (Light)
        scope = 2;
        primaryWeapon[] = {"hlc_smg_mp5a4","","acc_pointer_IR","optic_Aco",{"hlc_30Rnd_9x19_B_MP5",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_L",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",1,1},{"hlc_30Rnd_9x19_B_MP5",9,30}};
        backpackItems[] = {{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1},{"hlc_30Rnd_9x19_B_MP5",3,30}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "V_TacVest_oli";
        backpack = "B_AssaultPack_dgtl";
    };
};

class I_Soldier_A_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Ammo Bearer
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {{"hlc_20rnd_762x51_b_G3",8,20},{"hlc_30rnd_556x45_EPR_G36",12,30},{"hlc_200rnd_556x45_B_SAW",1,200},{"1Rnd_HE_Grenade_shell",10,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetIA";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "B_Carryall_oli";
    };
};

class I_Soldier_M_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Marksman
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_g3sg1","","","hlc_optic_accupoint_g3",{"hlc_20rnd_762x51_b_G3",20},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_B",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1},{"hlc_20rnd_762x51_b_G3",8,20}};
        backpackItems[] = {{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1},{"hlc_20rnd_762x51_b_G3",4,20}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Booniehat_dgtl";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "B_Kitbag_rgr";
    };
};

class I_Sniper_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Sniper
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_awMagnum_OD_ghillie","","","optic_LRPS",{"hlc_5rnd_300WM_FMJ_AWM",5},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Rangefinder","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1},{"hlc_5rnd_300WM_FMJ_AWM",7,5},{"hlc_5rnd_300WM_AP_AWM",1,5}};
        backpackItems[] = {{"ACE_ATragMX",1},{"ACE_EntrenchingTool",1},{"ACE_Kestrel4500",1},{"ACE_Flashlight_KSF1",1},{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1},{"hlc_5rnd_300WM_AP_AWM",3,5}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","NVGoggles_INDEP"};
        headgearClass = "H_HelmetIA";
        goggles = "";
        uniformClass = "U_I_GhillieSuit";
        vestClass = "V_Chestrig_oli";
        backpack = "tf_anprc155";
    };
};

class I_Spotter_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Spotter
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_MRCO",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Laserdesignator_03","","","",{"Laserbatteries",1},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {{"ACE_ATragMX",1},{"ACE_quikclot",20},{"ACE_bloodIV_250",4},{"ACE_epinephrine",10},{"ACE_morphine",20},{"ACE_Kestrel4500",1},{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1},{"hlc_5rnd_300WM_FMJ_AWM",4,5},{"hlc_5rnd_300WM_AP_AWM",4,5}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","NVGoggles_INDEP"};
        headgearClass = "H_HelmetIA";
        goggles = "";
        uniformClass = "U_I_GhillieSuit";
        vestClass = "V_Chestrig_oli";
        backpack = "B_Kitbag_rgr";
    };
};

class I_soldier_UAV_F
{
    class Loadout0
    {
        //Faction: AAF Unit: UAV Operator
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1},{"ItemMicroDAGR",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","I_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetIA";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "I_UAV_01_backpack_F";
    };
};

class I_support_Mort_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Gunner (Mk6)
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetIA";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "I_Mortar_01_weapon_F";
    };
};

class I_support_MG_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Gunner (HMG)
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetIA";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "I_HMG_01_high_weapon_F";
    };
};

class I_support_GMG_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Gunner (GMG)
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetIA";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "I_GMG_01_high_weapon_F";
    };
};

class I_support_AMort_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Asst. Gunner (Mk6)
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Cap_headphones";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "I_Mortar_01_support_F";
    };
};

class I_support_AMG_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Asst. Gunner (HMG/GMG)
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36TAC","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"hlc_30rnd_556x45_EPR_G36",10,30},{"hlc_30rnd_556x45_Tracers_G36",4,30},{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Cap_headphones";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "TFAx_PlateCarrierH_Grn";
        backpack = "I_HMG_01_support_high_F";
    };
};

class I_crew_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Crewman
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36CTac","","","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1},{"hlc_30rnd_556x45_EPR_G36",9,30}};
        backpackItems[] = {{"ToolKit",1},{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1}};
        linkedItems[] = {"ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetCrew_I";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "V_TacVest_oli";
        backpack = "B_Kitbag_rgr";
    };
};

class I_pilot_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Pilot
        scope = 2;
        primaryWeapon[] = {"SMG_02_F","","acc_pointer_IR","optic_Aco",{"30Rnd_9x21_Mag_SMG_02",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_L",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",1,1},{"30Rnd_9x21_Mag_SMG_02",9,30}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_PilotHelmetFighter_I";
        goggles = "";
        uniformClass = "U_I_pilotCoveralls";
        vestClass = "V_TacVest_oli";
        backpack = "B_Parachute";
    };
};

class I_helipilot_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Helicopter Pilot
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36CTac","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",1,1},{"hlc_30rnd_556x45_EPR_G36",10,30},{"SmokeShellGreen",4,1}};
        backpackItems[] = {{"ToolKit",1},{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1}};
        linkedItems[] = {"ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_PilotHelmetHeli_I";
        goggles = "";
        uniformClass = "U_I_HeliPilotCoveralls";
        vestClass = "V_TacVest_khk";
        backpack = "B_Kitbag_cbr";
    };
};

class I_helicrew_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Helicopter Crew
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36CTac","","acc_pointer_IR","optic_Aco",{"hlc_30rnd_556x45_EPR_G36",30},{},"bipod_03_F_blk"};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",1,1},{"hlc_30rnd_556x45_EPR_G36",12,30}};
        backpackItems[] = {{"ToolKit",1},{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_CrewHelmetHeli_I";
        goggles = "";
        uniformClass = "U_I_HeliPilotCoveralls";
        vestClass = "V_TacVest_brn";
        backpack = "B_Kitbag_cbr";
    };
};

class I_Soldier_GL_F
{
    class Loadout0
    {
        //Faction: AAF Unit: Grenadier
        scope = 2;
        primaryWeapon[] = {"hlc_rifle_G36VAG36","","","optic_MRCO",{"hlc_30rnd_556x45_EPR_G36",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"ACE_quikclot",8},{"ACE_morphine",4},{"ACE_epinephrine",2},{"9Rnd_45ACP_Mag",3,8},{"SmokeShell",2,1},{"muzzle_snds_M",1},{"NVGoggles_INDEP",1},{"ItemcTabHCam",1}}; 
        vestItems[] = {{"ACE_HandFlare_Green",2,1},{"MiniGrenade",2,1},{"ACE_M84",2,1},{"hlc_30rnd_556x45_EPR_G36",8,30},{"1Rnd_HE_Grenade_shell",7,1}};
        backpackItems[] = {{"SmokeShellGreen",4,1},{"SmokeShell",2,1},{"HandGrenade",2,1},{"ACE_HandFlare_Green",8,1},{"Chemlight_green",6,1},{"1Rnd_SmokeRed_Grenade_shell",4,1},{"1Rnd_SmokeGreen_Grenade_shell",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_HE_Grenade_shell",8,1}};
        linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_HelmetB";
        goggles = "";
        uniformClass = "U_I_CombatUniform";
        vestClass = "V_PlateCarrierIAGL_dgtl";
        backpack = "B_Kitbag_rgr";
    };
};
