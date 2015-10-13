#include "script_component.hpp"

class CfgPatches
{
    class GOFB 
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {a3_characters_F, a3_characters_f_beta, a3_characters_f_gamma};
		VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"