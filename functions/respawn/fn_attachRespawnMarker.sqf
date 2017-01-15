
params ["_side", "_vehicle", "_count"];
private _sideS = "";
if (_side == resistance) then { _sideS = "guerrila"} else { _sideS = str (_this select 0)};
_marker = createMarker[format["respawn_%1_commandVeh%2", _sideS, _count], _vehicle];
missionNamespace setVariable[format["Xeno_commandVehicleMarker%1", _count], _marker];
_deathMarker = createMarker[format["deadCV%1", _count], getMarkerPos _marker];
missionNamespace setVariable[format["Xeno_deathMarker%1", _count], _deathMarker];
systemChat "markerCreated";
_marker setMarkerType call
    ({
        private _type = "";
        switch _side do
        {
            case west: { _type = "b_inf" };
            case east: { _type = "o_inf" };
            case resistance: { _type = "n_inf" };
            case civilian: { _type = "n_inf" };
        };
        _type;
    });
_marker setMarkerColor call
    ({
        private _color = "";
        switch _side do
        {
            case west: { _color = "colorWEST" };
            case east: { _color = "colorEAST" };
            case resistance: { _color = "colorGUER" };
            case civilian: { _color = "colorCIV" };
        };
        _color;
    });
_marker setMarkerText "Command Vehicle";

while { alive _vehicle } do
{
    _marker setMarkerPos getPos _vehicle;
    sleep 4;
};
_deathMarker setMarkerPos getMarkerPos _marker;
_deathMarker setMarkerType "KIA";
_deathMarker setMarkerColor "colorBlack";
_deathMarker setMarkerText "Destroyed Command Vehicle";
deleteMarker _marker;
