#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}


 class CfgVehicles              // *Finished does not mean no mistakes were made! Double check all gear!*
{
	class B_Soldier_F; 			// Rifleman  *Finished*
	class B_Soldier_TL_F; 		// FTL  *Finished*
	class B_soldier_LAT_F; 		// AT  *Finished*
	class B_soldier_AR_F; 		// Autorifleman  *Finished*
	class B_Soldier_A_F; 		// AR Assist  *Finished*
	class B_soldier_exp_F; 		// AT/EOD *Finished has 2 earplugs*
	class B_medic_F; 			// Medic	*Finished*
	class B_Soldier_SL_F;		// Squadleader *Finished*
	class B_Helipilot_F; 		// Chopper pilot
	class B_helicrew_F; 		// Chopper crewman
	class B_Pilot_F; 			// Fixed wing pilot
	class rhsusf_assault_eagleaiii_ocp; // Standard Backpack
	class tf_rt1523g_rhs; 		// Radio Backpack
	class tf_rt1523g_big_rhs;	// Radio Backpack larger
	class NATO_Box_Base;		//Test box, texture not showing
	class B_Heli_Light_01_F; 	//Test Vehicle
	
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
		#include "loadouts\rifleman.hpp"
	};
	
	class GOFBUSFTL:   B_Soldier_TL_F 
	{
		#include "loadouts\ftl.hpp"
	};

	class GOFBUSAT:   B_soldier_LAT_F
	{
		#include "loadouts\at.hpp"
	};
	
	class GOFBUSAR:   B_soldier_AR_F
	{
		#include "loadouts\ar.hpp"
	};
	
	class GOFBUSAAR:   B_Soldier_A_F
	{
		#include "loadouts\aar.hpp"
	};
	
	class GOFBUSEOD:   B_soldier_exp_F
	{
		#include "loadouts\eod.hpp"
	};
	
	class GOFBUSMED:   B_medic_F
	{
		#include "loadouts\medic.hpp"
	};
	
	class GOFBUSSQL:   B_Soldier_SL_F
	{
		#include "loadouts\sql.hpp"
	};
	
	class GOFBUSHEP:   B_Helipilot_F
	{
		#include "loadouts\helipilot.hpp"
	};
	
	class GOFBUSHEC:   B_helicrew_F
	{
		#include "loadouts\helicrew.hpp"
	};
	
	class GOFBUSFIX:   B_Pilot_F
	{
		#include "loadouts\fixpilot.hpp"
	};
	
	
	
	//PRESS
	
	class PRESSPH:   B_Soldier_F
	{
		#include "loadouts\photographer.hpp"
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
	
	
	class BluAARPack: rhsusf_assault_eagleaiii_ocp
    {
        displayname = "AAR Backpack"; //In-Game Name
        scope = 2;
 
        class TransportItems
         {
            
         };
		
		class TransportMagazines
         {
			mag_xx(rhs_200rnd_556x45_T_SAW,2); //Item Classname
			mag_xx(SmokeShell,0); //Item Classname

         };
    };
	
	
	class BluARPack: rhsusf_assault_eagleaiii_ocp
    {
        displayname = "Automatic Rifleman Backpack"; //In-Game Name
        scope = 2;
 
        class TransportItems
         {
            
         };
		
		class TransportMagazines
         {
			mag_xx(rhs_200rnd_556x45_T_SAW,2); //Item Classname
			mag_xx(SmokeShell,0); //Item Classname

         };
    };
	
		class BluATPack: rhsusf_assault_eagleaiii_ocp
    {
        displayname = "AT Rifleman Backpack"; //In-Game Name
        scope = 2;
 
        class TransportItems
         {
            
         };
		
		class TransportMagazines
         {
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,0); //Item Classname
			mag_xx(SmokeShell,0); //Item Classname

         };
    };
	
	
	class BluEODPack: rhsusf_assault_eagleaiii_ocp
    {
        displayname = "Rifleman Backpack"; //In-Game Name
        scope = 2;
 
        class TransportItems
         {
            item_xx(ACE_DefusalKit,1);
         };
		
		class TransportMagazines
         {
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,0); //Item Classname
			mag_xx(DemoCharge_Remote_Mag,4); //Item Classname

         };
    };
	
		class BluMEDPack: tf_rt1523g_big_rhs
    {
        displayname = "Medical Radio Backpack"; //In-Game Name
        scope = 2;
 
        class TransportItems
         {
            item_xx(ACE_elasticBandage,15);
			item_xx(ACE_salineIV_500,15);
			item_xx(ACE_tourniquet,2);
			item_xx(ACE_packingBandage,20);
			item_xx(ACE_personalAidKit,5);
         };
		
		class TransportMagazines
         {
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,0); //Item Classname
			mag_xx(DemoCharge_Remote_Mag,0); //Item Classname

         };
    };
	
	
	class BluFTLPack: rhsusf_assault_eagleaiii_ocp
    {
        displayname = "FTL Backpack"; //In-Game Name
        scope = 2;
 
        class TransportItems
         {
            
         };
		
		class TransportMagazines
         {
			mag_xx(rhs_mag_M433_HEDP,6); //Item Classname
			mag_xx(rhs_mag_m662_red,2);
			mag_xx(rhs_mag_M585_white,2);
			mag_xx(rhs_mag_m713_Red,4);
			mag_xx(rhs_mag_m714_White,10);
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,0);	//Item Classname

         };
    };
	
	
	class BluSQLPack: tf_rt1523g_rhs
    {
        displayname = "FTL Backpack"; //In-Game Name
        scope = 2;
 
        class TransportItems
         {
            
         };
		
		class TransportMagazines
         {
			mag_xx(rhs_mag_M433_HEDP,0); //Item Classname
			mag_xx(rhs_mag_m662_red,2);
			mag_xx(rhs_mag_M585_white,2);
			mag_xx(rhs_mag_m713_Red,0);
			mag_xx(rhs_mag_m714_White,10);
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,0);	//Item Classname

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