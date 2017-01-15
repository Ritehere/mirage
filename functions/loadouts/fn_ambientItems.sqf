/*
    Author: Xeno

    Spawns piles of loot in buildings near specified markers

    Params:
    0: Weapon classes
    1: Item classes
    2: Markers. Markers should all be named the same and this expects an array in the form of [markerName, count]. Count starts from 0

*/
params 
[
    ["_weapons",["arifle_Katiba_F"],[[]]], 
    ["_items", ["FirstAidKit"],[[]]],
    ["_specialItems", ["HandGrenade"],[[]]],
    ["_markers",["marker",0],[[]],2]
];

for[{_i = 0}, {_i < ((_markers select 1)+1)}, {_i = _i + 1}] do
{
    scopeName "markerScope";
    private _pos = getMarkerPos format["%1%2",(_markers select 0), _i];
    _house = nearestObjects [_pos,["house"],350];
    for[{_j=0},{_j<8},{_j = _j + 1}] do
    {
        scopeName "lootScope";
        //systemChat format["Pass number %1, pile number %2, location: %3%4", _i, _j, (_markers select 0), _i];
        _gun = selectRandom _weapons;
        _muzzle = (getArray(configFile >> "cfgWeapons" >> _gun >> "muzzles"));
        _spos = selectRandom ((selectRandom _house) buildingPos -1);
        while {isNil "_spos"} do { _spos = selectRandom ((selectRandom _house) buildingPos -1); };
        private "_crate";
        if ((_spos distance2D (_spos nearestObject "GroundWeaponHolder")) > 2) then
        {
            _crate = createVehicle["GroundWeaponHolder", _spos, [], 0, "NONE"];
        }
        else
        {
            _crate = (_spos nearestObject "GroundWeaponHolder");
        };
        //if (random(1)>0.985) then { _crate addItemCargo ["ACE_key_master", 1]};
        if (random(1)>0.50) then { _crate addWeaponCargoGlobal[_gun, 1] };
        if (random(1)>0.50) then { _crate addItemCargoGlobal["ACE_quikClot", floor random(12)]; _crate addItemCargoGlobal["ACE_morphine", floor random(12)]; _crate addItemCargoGlobal["ACE_epinephrine", floor random(12)]; _crate addItemCargoGlobal["ACE_personalAidKit", round random(3)]; };
        _ammo = ((getArray(configFile >> "CfgWeapons" >> _gun >> "magazines")) select 0);
        if (isNil "_ammo") then { _ammo = (selectRandom _items) };
        _ammocount = [3, 5, 12];
        if ("Launcher" in ([(configFile >> "cfgWeapons" >> _gun), true] call BIS_fnc_returnParents)) then
        {
            _ammocount = [1, 1.5, 3];
        };
        _crate addItemCargoGlobal [_ammo, round random(_ammocount)];
        _crate addItemCargoGlobal [selectRandom (getArray(configFile >> "CfgWeapons" >> _gun >> "magazines")), round random[2,4,8]];
        if (count _muzzle > 1) then
        {
            _muzzle = _muzzle select 1;
            _muzzleAmmo = getArray(configFile >> "cfgWeapons" >> _gun >> _muzzle >> "magazines");
            _crate addItemCargoGlobal [selectRandom _muzzleAmmo, round random[2, 4, 5]];
            _crate addItemCargoGlobal [_muzzleAmmo select 0, round random[2, 4, 7]];
        };
        {
            _crate addItemCargoGlobal [_x, floor random(2)];
        } foreach _items;
        if (random(1)>0.85) then
        {
            {
                _crate addItemCargoGlobal [_x, floor random(2)];
            } foreach _specialItems;
        };
        if (random(1)>0.70) then
        {
            private _attachments = [];
            private _pool = [];
            {
                if !(isClass (configFile >> "cfgWeapons" >> _gun >> "WeaponSlotsInfo" >> _x >> "compatibleItems")) then
                {
                    _attachments append getArray(configFile >> "cfgWeapons" >> _gun >> "WeaponSlotsInfo" >> _x >> "compatibleItems");
                }
                else
                {
                    _configs = configProperties [(configFile >> "cfgWeapons" >> _gun >> "WeaponSlotsInfo" >> _x >> "compatibleItems")];
                    _attachments append (_configs apply { configName _x });
                };
            } foreach ["CowsSlot", "MuzzleSlot", "PointerSlot"];
            for [{_k = 0}, {_k < 4}, {_k = _k + 1}] do
            {
                _pool pushBack (selectRandom _attachments);
            };
            {
                _crate addItemCargoGlobal [_x, floor random(2)];
            } foreach _pool;
        };
    };
    //_mark = createMarkerLocal[format["info%1", _i], _pos];
    //_mark setMarkerTypeLocal "mil_warning";
    //_mark setMarkerColorLocal "colorGreen";

};
