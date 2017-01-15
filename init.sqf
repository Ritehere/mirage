enableSaving [FALSE, FALSE];
//Radio Init
#include "\task_force_radio\functions\common.sqf";
tf_west_radio_code = "_tmtm_west";
tf_east_radio_code = "_tmtm_west";
tf_guer_radio_code = "_tmtm_west";
_settingsLr = call TFAR_fnc_generateLrSettings;
_settingsLr set [2, ["50","50.5","51","51.5","52","52.5","53","53.5","54"]];
_settingsSw = call TFAR_fnc_generateSwSettings;
_settingsSw set [2, ["248","250","252","254","256","258","260","262"]];
tf_freq_west = _settingsSw;
tf_freq_west_lr = _settingsLr;
tf_freq_east = _settingsSw;
tf_freq_east_lr = _settingsLr;
tf_freq_guer = _settingsSw;
tf_freq_guer_lr = _settingsLr;

if (isServer) then
{
    52 spawn Xeno_fnc_KK_markerEventHandler;
}
else
{
    53 spawn Xeno_fnc_KK_markerEventHandler;
};
