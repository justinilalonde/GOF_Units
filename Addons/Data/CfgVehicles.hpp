#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}


 class CfgVehicles
{
	class B_Soldier_F; 			// Rifleman
	class B_Soldier_TL_F; 		// FTL
	class B_soldier_LAT_F; 		// AT
	class B_soldier_AR_F; 		// Autorifleman
	class B_Soldier_A_F; 		// AR Assist
	class B_soldier_exp_F; 		// AT/EOD
	class B_medic_F; 			// Medic
	class B_Soldier_SL_F;		// Squadleader
	class B_Helipilot_F; 		// Chopper pilot
	class B_helicrew_F; 		// Chopper crewman
	class B_Pilot_F; 			// Fixed wing pilot
	class rhsusf_assault_eagleaiii_ocp;
	class NATO_Box_Base;
	class B_Heli_Light_01_F; 
	
    #define MACRO_BasicKit \
    "ACE_EarPlugs", \
	"ACE_CableTie", "ACE_CableTie", \
	"ACE_IR_Strobe_Item", \
	"ACE_M26_Clacker", \
	"ACE_morphine", "ACE_morphine", \
	"ACE_tourniquet", "ACE_tourniquet", \
	"ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", \
	
	class GOFBUSR:   B_Soldier_F   //Unit Class name: Class getting info from
	{
		side = 1; //Blufor
		faction = "GOFB"; //Your Faction
		backpack = "BluRiflePack"; //Backpack
		vehicleclass = "GOFBUS"; //Unit Group
		author = "Derby"; //Self Explanatory 
		_generalMacro = "GOFBUSR"; //Class Name
		scope = 2; //makes it visible in the editor 
		displayName = "Rifleman"; //In-Game Name
		weapons[] = {"GOFM16","rhs_weap_rsp30_red","Binocular","Throw","Put"}; //Spawning Gear
		respawnWeapons[] = {"GOFM16","rhs_weap_rsp30_red","Binocular","Throw","Put"}; 
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell",
		"SmokeShellGreen", "SmokeShellGreen", 
		"SmokeShellBlue", "SmokeShellBlue", };
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		};
		items[] = {MACRO_BasicKit, }; //ACE items in here
		respawnitems[] = {MACRO_BasicKit, };
		linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ocp_norotos","ItemMap","ItemCompass","tfmicrodagr","tfanprc152_10","ItemGPS","NVGREG"};
		respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ocp_norotos","ItemMap","ItemCompass","tfmicrodagr","tfanprc152_10","ItemGPS","NVGREG"};
		uniformClass = "rhs_uniform_cu_ocp"; //uniform you are using
		camouflage = 1.6; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1.6 is Default and 2.0 is a sniper ghille 
	};
	
	class GOFBUSFTL:   B_Soldier_TL_F   //Unit Class name: Class getting info from
	{
	#include "FTL.hpp"
	};

	class GOFBUSAT:   B_soldier_LAT_F
	{
	#include "AT.hpp"
	};
	
	
	class BluRiflePack: rhsusf_assault_eagleaiii_ocp
    {
        displayname = "Rifleman Backpack"; //In-Game Name
        scope = 2;
 
        class TransportItems
         {
            
         };
		
		class TransportMagazines
         {
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,2); //Item Classname
			mag_xx(SmokeShell,2); //Item Classname

         };
    };
	
	class GOFBOXTEST: NATO_Box_Base 
	{
		faction = "GOFB"; //Faction
		vehicleclass = "GOFBUS"; //Group Class
		displayName = "Crate(WIP)";
		scope = 2;
        class TransportItems 
		{
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 10; //amount
            };
            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 10; //amount
            };
		};
    };
	class TEST_MH9: B_Heli_Light_01_F 
	{
		faction = "GOFB"; //Faction
		vehicleclass = "GOFBUS"; //Group Class
		displayName = "MH-9(WIP)"; //Ingame name
		crew = "B_Helipilot_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
		class TransportItems //Cargo Items
         {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };
            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
			class _xx_TEST_Gun //Item Classname
			{
				name = "MX Camo";
				count = 10; //amount
			}
			class _xx_30Rnd_65x39_caseless_mag //Item Classname
			{
				count = 25; //amount
			}
         };
	};
	
};