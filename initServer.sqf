//BIS Dynamic Groups
["Initialize", [true]] call BIS_fnc_dynamicGroups;
//Radio Settings


//ACE Medical Check
private _level = false;
if ((missionNamespace getVariable ["ace_medical_level", 1]) == 2) then
{
    _level = true;
};

missionNamespace setVariable["isAdvancedMission", _level, true];

//Objectives

//Vehicle Inventories
//Dynaspawn Init
/*
{ 
    switch (triggerText _x) do
    {
        case "GEN_infantry":
        {
            [[_x, true], 3, west, Xeno_footPatrols, Xeno_specialPatrols, Xeno_weaponTeams, 0.75, false, [0.50, 0.92], [800,1600], [false, false]] spawn Xeno_fnc_createPatrols;
        };
        case "GEN_garrison":
        {
            [_x, ((triggerArea _x) select 0), west, ["O_Soldier_AR_F", "O_Soldier_GL_F", "O_Soldier_F", "O_medic_F", "O_Soldier_TL_F"], false, ["Land_Cargo_House_V1_F","Land_Cargo_House_V3_F","Land_Medevac_house_V1_F","Land_Cargo_House_V2_F", "Land_Research_house_V1_F"], 0.5, 35, { { (_x distance _basePos) < 3000 } count allPlayers > 0 }] spawn Xeno_fnc_createGarrison;
        };
    };
} foreach allMissionObjects "EmptyDetector";
*/