#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class lop_faction_us {
		units[] = {
			"LOP_US_Infantry_Rifleman",
			"LOP_US_Infantry_Pilot",
			"LOP_US_Infantry_TL",
			"LOP_US_Infantry_SL",
			"LOP_US_Infantry_Crewman",
			"LOP_US_Infantry_Corpsman",
			"LOP_US_Infantry_Officer",
			"LOP_US_Infantry_Marksman",
			"LOP_US_Infantry_AA",
			"LOP_US_Infantry_AT",
			"LOP_US_Infantry_AT_Asst",
			"LOP_US_Infantry_GL",
			"LOP_US_Infantry_MG",
			"LOP_US_Infantry_MG_Asst",
			"LOP_US_Infantry_Engineer",
			
			"LOP_US_T72BB",
			"LOP_US_T72BA",
			"LOP_US_BMP2D",
			"LOP_US_BMP2",
			"LOP_US_BMP1",
			"LOP_US_BMP1D",
			"LOP_US_ZSU234",
			"LOP_US_BTR60",
			"LOP_US_BTR70",

			"LOP_US_BM21",
			"LOP_US_Ural",
			"LOP_US_Ural_open",
			"LOP_US_UAZ",
			"LOP_US_UAZ_Open",
			
			"LOP_US_NSV_TriPod",
		};
		weapons[] = {
			"LOP_U_US_Fatigue_01",
			"LOP_U_US_Fatigue_02",
			"LOP_U_US_Fatigue_03",
			"LOP_U_US_Fatigue_04"
			
		};
		requiredVersion = 1.32;
		requiredAddons[] = {
			A3_Soft_F,
			A3_Characters_F,
			rhs_c_bmp,
			rhs_c_bmd,
			rhs_c_t72,
			rhs_c_troops,
			rhs_c_btr,
			rhs_c_weapons,
			rhs_c_a2port_air,
			rhs_c_a2port_car,
			rhs_c_a2port_armor,
			rhs_cti_insurgents,
			rhs_c_heavyweapons,
			rhsusf_c_troops,
			rhsusf_c_weapons,
			rhsusf_c_m1a1,
			rhsusf_c_m113,
			RHS_US_A2_AirImport,
			rhsusf_c_hmmwv
		};
		author[] = {"Leight"};
		authorUrl = "http://www.armacoopcorps.pl/";
	};
};

class cfgWeapons {
	#include "CfgUniforms.hpp"
};
class CfgVehicles {
	#include "CfgInfantry.hpp"
	#include "CfgBackpacks.hpp"
	#include "CfgWheeled.hpp"
	#include "CfgArmored.hpp"
	#include "CfgStatic.hpp"
};
#include "CfgGroups.hpp"
