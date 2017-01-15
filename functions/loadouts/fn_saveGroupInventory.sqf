params
[
    ["_objects", [],[[]]]
];

private _output = [];
{
    _output pushBack ([_x, "Loadout0"] call Xeno_fnc_saveInventory);
} foreach _objects;

_output joinString "";