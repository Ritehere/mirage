params
[
    ["_mode", "groupgc", ["STRING"]],
    ["_args", [{ true }], [[]]]
];

switch (toLower _mode) do
{
    case "groupgc":
    {
        if (isNil "Xeno_nullGrp") then
        {
            _nullGrp = (createGroup sideLogic);
            _nullGrp setVariable["GC_ignore", true, true];
            missionNamespace setVariable["Xeno_nullGrp", _nullGrp, true];
        };

        while { (_args select 0) } do
        {
            
            {
                if ({ isPlayer _x } count (units _x) > 0) then { _x setVariable["grp_hasPlayers", true, true] } else { _x setVariable["grp_hasPlayers", false, true] };
                if (({ alive _x } count (units _x)) < 1 && !(_x getVariable["grp_hasPlayers", false]) && !(_x getVariable["GC_ignore", false])) then
                {
                    if (isNull _nullGrp) then { _nullGrp = (createGroup sideLogic); _nullGrp setVariable["GC_ignore", true, true]; };
                    (units _x) joinSilent _nullGrp;
                    _x remoteExecCall["deleteGroup", groupOwner _x];
                };
            } foreach allGroups;
            sleep 10;
        };
    };
    case "unscheduledgc":
    {
        if (isNil "Xeno_nullGrp") then
        {
            _nullGrp = (createGroup sideLogic);
            _nullGrp setVariable["GC_ignore", true, true];
            missionNamespace setVariable["Xeno_nullGrp", _nullGrp, true];
        };
        { 
            _x addEventHandler["Killed", 
            { 
                if ({alive _x} count (units (group (_this select 0))) < 1) then 
                { 
                    _oldGrp = (group (_this select 0)); 
                    (units (group (_this select 0))) joinSilent (missionNamespace getVariable ["Xeno_nullGrp", (createGroup sideLogic)]); 
                    deleteGroup _oldGrp;
                }; 
            }];
        } foreach (units (_args select 0));
    };
};