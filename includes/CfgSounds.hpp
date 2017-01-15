
class CfgSounds
{
    sounds[] = {"gonnadie", "ugh", "fuckyou"};
    class skull_move
	{
		name = "Teleport sound";
		sound[] = {"data\fx\hiss.wav", 0.8, 1};
		titles[] = {0,""};
	};
    class gonnadie
    {
        name = "You're Gonna Die (Mike)";
        sound[] = {"data\fx\die.ogg", 1,1};
        titles[] = {0, ""};
    };
    class ugh
    {
        name = "UGHHH (Mike)";
        sound[] = {"data\fx\ugh.ogg", 1,1};
        titles[] = {0, ""};
    };
    class fuckyou
    {
        name = "Fuck you (Mike)";
        sound[] = {"data\fx\fuckyou.ogg", 1,1};
        titles[] = {0, ""};
    };
    class scream1
    {
        name = "Death #1";
        sound[] = {"data\fx\scream\scream1.ogg", 1,1};
        titles[] = {0, ""};
    };
    class scream2
    {
        name = "Death #2";
        sound[] = {"data\fx\scream\scream2.ogg", 1,1};
        titles[] = {0, ""};
    };
    class scream3
    {
        name = "Death #3";
        sound[] = {"data\fx\scream\scream3.ogg", 1,1};
        titles[] = {0, ""};
    };
    class scream4
    {
        name = "Death #4";
        sound[] = {"data\fx\scream\scream4.ogg", 1,1};
        titles[] = {0, ""};
    };
    class scream5
    {
        name = "Death #5";
        sound[] = {"data\fx\scream\scream5.ogg", 1,1};
        titles[] = {0, ""};
    };
    class scream6
    {
        name = "Death #6";
        sound[] = {"data\fx\scream\scream6.ogg", 1,1};
        titles[] = {0, ""};
    };
    class takedown
    {
        name = "Knife Sound";
        sound[] = {"data\fx\takedown.ogg", 1,1};
        titles[] = {0, ""};
    };
    class radio_firemission
    {
        name = "Firemission Call";
        sound[] = {"data\fx\backup.ogg", 1,1};
        titles[] = {0, ""};
    };
    class radio_reinforcements
    {
        name = "Reinforcement Call";
        sound[] = {"data\fx\backup.ogg", 1,1};
        titles[] = {0, ""};
    };
    class radio_support
    {
        name = "Support Call";
        sound[] = {"data\fx\backup.ogg", 1,1};
        titles[] = {0, ""};
    };
};

class CfgMusic
{
    tracks[] = {"endscream"};
    class endscream
    {
        name = "Danton Scream";
        sound[] = {"data\fx\end.ogg", db+25, 1.0};
    };
};