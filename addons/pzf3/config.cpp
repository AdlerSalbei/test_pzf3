#include "script_component.hpp"
#define _ARMA_


class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        units[] = {};
        weapons[] = { "TEST_PZF3" };
        magazines[] = { "PZF3_HEAT_DM12A1", "PZF3_DM32", "PZF3_HEAT_DM22" };
		ammo[] = { "R_PZF3_HEAT_DM12A1", "R_PZF3_DM32", "R_PZF3_HEAT_DM22" };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { QMAINPATCH };
        authors[] = Authors;
        VERSION_CONFIG;
    };
};

#include <CfgWeapons.hpp>
#include <CfgAmmo.hpp>
#include <CfgMagazines.hpp>
//#include <CfgVehicles.hpp>