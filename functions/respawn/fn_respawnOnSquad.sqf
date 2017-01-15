/*

    Author: Xeno

    Description:
    Creates a respawn marker on your squad leader, allowing you to respawn on him.
    If squad leader dies or size of squad is less than 2 units the script pauses.
    Not very useful without "MenuPosition" respawn template

    Params:
    NONE


*/
params [["_player", player]];
private ["_groupLeader", "_respawnPos", "_type", "_position", "_side", "_sidePlayer", "_respawnPos"];

if (didJIP) then { [_player, getPos (leader group player)] remoteExecCall ["setPos", _player]  };

trackerMarkerType = compileFinal  "switch (playerSide) do
    {
        case west: { _sidePlayer = 'b_inf' };
        case east: { _sidePlayer = 'o_inf' };
        case resistance: { _sidePlayer = 'n_inf' };
        case civilian: { _sidePlayer = 'c_unknown' };
    };
    _sidePlayer;";


if (playerSide == resistance) then { _side = "guerrila" } else { _side = playerSide };

Xeno_respawnOnSquad_allowed = true;
_respawnPos = "";
_respawnPos = createMarkerLocal [format["respawn_%1_squad", _side], getPos BIS_startingPos];
_respawnPos setMarkerTextLocal (groupId group player);
_respawnPos setMarkerTypeLocal call trackerMarkerType;
_respawnPos setMarkerColorLocal "colorGreen";

waitUntil { !BIS_recentStart };
while { Xeno_respawnOnSquad_allowed } do
{
    sleep 4;
    deleteMarkerLocal _respawnPos;
    if (((!alive (leader group player))) || ( count (units group player) < 2)) then {}
    else
    {
        _respawnPos = createMarkerLocal [format["respawn_%1_squad", _side], getPos (leader group player)];
        _respawnPos setMarkerTextLocal (groupId group player);
        _respawnPos setMarkerTypeLocal call trackerMarkerType;
        _respawnPos setMarkerColorLocal "colorGreen";
    };
};