params 
[
    ["_input",[],[[]]]
];

_output = [];
{ _output pushBack ([_x] call Xeno_fnc_saveVehicleInventory) } foreach _input;

_output joinString ""