enableDebugConsole = 1;

respawn = 3;
respawnTemplates[] = { "MenuPosition", "Spectator", "Wave" };
respawnOnStart = -1;
respawnDialog = 0;

wreckManagerMode = 1;
corpseManagerMode = 1;
corpseLimit = 100;
corpseRemovalMinTime = 90;
corpseRemovalMaxTime = 600;

aiKills = 1;
disabledAi = 1;


class Header
{
	gameType = COOP;
	minPlayers = 1;
	maxPlayers = 64;
};

class Params
{
    class ace_medical_level
    {
        title = "ACE3 Medical Level";
        ACE_setting = 1;
        values[] = {1,2};
        texts[] = {"Basic", "Advanced"};
        default = 1;
    };
    class ace_medical_enabled
    {
        title = "ACE3 Medical";
        ACE_setting = 1;
        values[] = {0,1};
        texts[] = {"Disabled", "Enabled"};
        default = 0;
    };
    class ace_medical_enableRevive
    {
        title = "Enable ACE3 Revive";
        ACE_setting = 1;
        values[] = {0,1};
        texts[] = {"No", "Yes"};
        default = 0;
    };
    class ace_medical_enableUnconsciousnessAI
    {
        title = "AI Unconsciousness Setting";
        ACE_setting = 1;
        values[] = {0,1,2};
        texts[] = {"Instant Death", "50/50", "Always go unconscious first"};
        default = 0;
    };
};


#include <includes\CfgSounds.hpp>
#include <includes\CfgFunctions.hpp>
#include <includes\CfgXeno.hpp>