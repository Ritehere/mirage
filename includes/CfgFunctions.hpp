class CfgFunctions
{
    class Xeno
    {
        class main
        {
            file = "functions";
        };
        class misc
        {
        	class simpleTimer {};
        	class briefing {};
            class deadlyHeal {};
            class silentTakedown {};
            class manLauncher {};
            class switchBooster {};
            class KK_collectMrkrInfo {};
            class KK_markerEventHandler {  };
        };
        class dynamicspawn
        {
            class dynamicSpawn {};  //
            class fortressGear {}; //DEPRECATED & OBSOLETE;  USE SEPARATE FUNCTIONS FOR SPAWNING INSTEAD; DEFINITIONS ARE THERE TO MAINTAIN BACKWARDS COMPATIBILITY
            class patrolGear {};  //
            class initVariables { preInit = 1 };
            class ZenOccupyHouse {};
            class createAISector {};
            class createPatrols {};
            class createPatrolVehicle {};
            class createPatrolVehicles {}; //NOT A STANDALONE FUNC
            class createReinforcementTruck {};
            class createBackupVehicle {};
            class createStaticVehicle {};
            class createGarrison {};
            class GC {};
            class destroyGroup {};
            class serializeGroup {};
            class deserializeGroup {};
            class mortarStrike {};
        };
        class loadouts
        {
            class addMedicalSupplies {};
            class loadVehicleInventory {};
            class ambientItems {};
            class loadInventory {};
            class saveInventory {};
            class saveVehicleInventory {};
            class saveVehicleInventories {};
            class saveGroupInventory {};
        };
        //EVERYTHING IN THIS CATEGORY IS USELESS AND OBSOLETE; USE BIS FUNCTIONS INSTEAD
        class respawn
        {
            class attachRespawnMarker {};
            class createReinforcementVehicle {};
            class respawnOnSquad {};
            class respawnVehicle {};
        };
    };
};
