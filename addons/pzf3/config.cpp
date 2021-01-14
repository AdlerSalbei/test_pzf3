#include "script_component.hpp"
#define _ARMA_


class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        units[] = {};
        weapons[] = { "TEST_PZF3" };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { QMAINPATCH };
        authors[] = Authors;
        VERSION_CONFIG;
    };
};

#include <CfgWeapons.hpp>
#include <CfgAmmo.hpp>
#include <CfgMagazines.hpp>
