if (isNil "DP_healInProgress") then { DP_healInProgress = false};
if (DP_healInProgress) exitWith {};
DP_healInProgress = true;
if ("ACE_personalAidKit" in (items player)) then
{
    player playMove "AinvPknlMstpSlayWrflDnon_medic";
    [player, player] call ace_medical_fnc_treatmentAdvanced_fullHealLocal;
};
player removeItem "ACE_personalAidKit";
DP_healInProgress = false;
true
