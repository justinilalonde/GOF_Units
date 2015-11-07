#include "script_component.hpp"

class CfgPatches
{
    class GOFB 
    {
        units[] = {
		//Infantry 
		GOFBUSSQL, GOFBUSFTL, GOFBUSR, GOFBUSAT, GOFBUSAR, GOFBUSAAR, GOFBUSEOD, GOFBUSMED, GOFBUSHEP, GOFBUSHEC, GOFBUSFIX,
		
		//Helicopters
		GOFBHAWK
		};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {a3_characters_F, a3_characters_f_beta, a3_characters_f_gamma};
		
    };
	
	  class PRESS 
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {a3_characters_F, a3_characters_f_beta, a3_characters_f_gamma};
		
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "cfgFactionClasses.hpp"
#include "CfgGroups.hpp"