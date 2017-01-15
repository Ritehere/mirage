params ["_caller"];
switch (primaryWeaponItems _caller select 2) do
{
    case "FHQ_optic_HWS_G33": { _caller addPrimaryWeaponItem "FHQ_optic_HWS" };
    case "FHQ_optic_HWS": { _caller addPrimaryWeaponItem "FHQ_optic_HWS_G33" };
    case "": { systemChat "no optic found" };
    default { systemChat "incompatible optics" };
};
