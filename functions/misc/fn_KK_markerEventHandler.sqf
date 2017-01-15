/*

    Author: Killzone Kid
    
    Description: Prints a message to RPT log whenever someone places\deletes a marker.
    
    Params:
    0: Display idd (Hint: 12 for In-game Map, 53 for MP Briefing screen)
    
    Returns:
    Nothing

*/
scopeName "func";
params ["_idd"];

waitUntil 
{
    if (_idd == 53 && getClientState == "BRIEFING READ") then 
    {
        breakOut "func";
    };
    !isNull (findDisplay _idd);
};

(findDisplay _idd) displayAddEventHandler ["KeyDown", 
{
    if (_this select 1 == 211) then 
    {
        _mrknames = allMapMarkers;
        _mrkdetails = [];
        
        {
            _mrkdetails pushBack (_x call Xeno_fnc_KK_collectMrkrInfo);
        } forEach _mrknames;
        
        _nullHandle = [_mrknames, _mrkdetails] spawn 
        {
            _mrknames = _this select 0;
            _mrkdetails = _this select 1;
            
            _markerArray = 
            [
                "deleted",
                name player,
                getplayerUID player
            ];
            
            {
                _i = _mrknames find _x;
                if (_i > -1) then 
                {
                    _markerArray append (_mrkdetails select _i);
                };
            } forEach (_mrknames - allMapMarkers);
            
            if (count _markerArray > 3) then 
            {
                _string = format["%1 (%2) just %6 a marker at gridref %3. Shape: %4. Text: '%5'.", (_markerArray select 1), (_markerArray select 2), (mapGridPosition (_markerArray select 5)), getText(configFile >> "CfgMarkers" >> (_markerArray select 9) >> "name"), (_markerArray select 4), (_markerArray select 0)];
                _string remoteExecCall["diag_log"];
            };
        };
        false
    };
}];

(findDisplay _idd) displayAddEventHandler ["ChildDestroyed", 
{
    if (ctrlIdd (_this select 1) == 54 && _this select 2 == 1) then 
    {
        _nullHandle = all_mrkrs spawn 
        {
            _markerArray = 
            [
                "placed",
                name player,
                getplayerUID player
            ];
            
            {
                _markerArray append (_x call Xeno_fnc_KK_collectMrkrInfo);
            } forEach (allMapMarkers - _this);
            
            if (count _markerArray > 3) then 
            {
                _string = format["%1 (%2) just %6 a marker at gridref %3. Shape: %4. Text: '%5'.", (_markerArray select 1), (_markerArray select 2), (mapGridPosition (_markerArray select 5)), getText(configFile >> "CfgMarkers" >> (_markerArray select 9) >> "name"), (_markerArray select 4), (_markerArray select 0)];
                _string remoteExecCall["diag_log"];
            };  
        };
    };
}];

((findDisplay _idd) displayCtrl 51) ctrlAddEventHandler ["MouseButtonDblClick", 
{
    _nullHandle = [] spawn 
    {
        if (!isNull (findDisplay 54)) then 
        {
            ((findDisplay 54) displayCtrl 1) buttonSetAction "all_mrkrs = allMapMarkers";
        };
    };
}];