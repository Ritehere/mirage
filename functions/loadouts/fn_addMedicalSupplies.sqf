/*

    Author: Xeno

    Description:
    Gives ACE medical supplies to a unit. Coefficients can be tweaked in { If (_i % x) == 0 } statements

    Usage: Call

    Parameters:
    0:  Unit to receive medical supplies
    1: Amount of supplies
    2: Should unit receive medic loadout
    4: Amount of medic supplies
    5: ACE Advanced medical state (true/false)
    6: Backpack classname to replace unit's backpack

*/
#define UADD(i) i=i+1

params 
[
    "_unit", 
    "_amount", 
    "_isMedic", 
    "_clsAmount", 
    "_advanced", 
    "_bag"
];

if (_isMedic) then
{
    if (_bag == "") then
    {

    }
    else
    {
        removeBackpack _unit;
        _unit addBackpack _bag;
    };
    if (_advanced) then
    {
        _unit addItemToBackpack "ACE_surgicalKit";
    };
    for [{ _i = 0 }, { _i < _clsAmount }, { UADD(_i) }] do
    {
        if !(_advanced) then
        {
            _unit addItemToBackpack "ACE_quikClot";
        }
        else
        {
            if (_i % 2 == 0) then { _unit addItemToBackpack "ACE_quikclot"; };
        };
        if (_advanced) then
        {
            if (_i % 2 == 0) then
            {
                _unit addItemToBackpack "ACE_elasticBandage";
                _unit addItemToBackpack "ACE_packingBandage";
            };
        };
        if (_i % 2 == 0) then
        {
            _unit addItemToBackpack "ACE_morphine";
            _unit addItemToBackpack "ACE_epinephrine";
        };
        if (_i % 4 == 0) then
        {
            _unit addItemToBackpack "ACE_BloodIV";
            if (_advanced) then
            {
                _unit addItemToBackpack "ACE_tourniquet";
            };
        };
        if (_advanced && (_i % 10 == 0)) then
        {
            _unit addItemToBackpack "ACE_personalAidKit";
        };
    };
};

for [{ _i = 0 }, { _i < _amount }, { UADD(_i) }] do
{
    if !(_advanced) then
    {
        _unit addItemToUniform "ACE_quikClot";
    }
    else
    {
        _unit addItemToUniform "ACE_quikclot";
        if (_i % _amount == 0) then
        {
            _unit addItem "ACE_personalAidKit";
        };
    };
    if (_i % 2 == 0) then
    {
        _unit addItemToUniform "ACE_morphine";
        if (_advanced) then
        {
            _unit addItemToUniform "ACE_tourniquet";
        };
    };
    if (_i % 4 == 0) then
    {
        _unit addItemToUniform "ACE_epinephrine";
    };
};
