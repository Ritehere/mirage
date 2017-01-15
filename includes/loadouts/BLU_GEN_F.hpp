//Faction: Gendarmerie Infantry
class B_GEN_Commander_F
{
    class Loadout0
    {
        //Faction: Gendarmerie Unit: Gendarmerie Commander
        scope = 2;
        primaryWeapon[] = {"SMG_05_F","","","",{"30Rnd_9x21_Mag_SMG_02",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {"Binocular","","","",{},{},""};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_9x21_Mag_SMG_02",1,30}}; 
        vestItems[] = {{"30Rnd_9x21_Mag_SMG_02",4,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",1,1},{"SmokeShell",1,1},{"SmokeShellYellow",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_Beret_gen_F";
        goggles = "";
        uniformClass = "U_B_GEN_Commander_F";
        vestClass = "V_TacVest_gen_F";
        backpack = "";
    };
};

class B_GEN_Soldier_F
{
    class Loadout0
    {
        //Faction: Gendarmerie Unit: Gendarme
        scope = 2;
        primaryWeapon[] = {"SMG_05_F","","","",{"30Rnd_9x21_Mag_SMG_02",30},{},""};
        secondaryWeapon[] = {};
        handgun[] = {"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""};
        binocular[] = {};
        uniformItems[] = {{"FirstAidKit",1},{"30Rnd_9x21_Mag_SMG_02",2,30}}; 
        vestItems[] = {{"30Rnd_9x21_Mag_SMG_02",3,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",1,1},{"SmokeShell",1,1}};
        backpackItems[] = {};
        linkedItems[] = {"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        headgearClass = "H_MilCap_gen_F";
        goggles = "";
        uniformClass = "U_B_GEN_Soldier_F";
        vestClass = "V_TacVest_gen_F";
        backpack = "";
    };
};
