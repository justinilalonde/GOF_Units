 class CfgVehicles
{
	class b_survivor_F; //Calling classes
	class rhsusf_assault_eagleaiii_ocp; 
	class B_Heli_Light_01_F; 
		
	class GOFBUSR:   b_survivor_F   //Unit Class name: Class getting info from
	{
		side = 1; //Blufor
		faction = "GOFB"; //Your Faction
		backpack = "BluRiflePack"; //Backpack
		vehicleclass = "GOFBUS"; //Unit Group
		author = "Delta 1 Actual"; //Self Explanatory 
		_generalMacro = "GOFBUSR"; //Class Name
		scope = 2; //makes it visible in the editor 
		displayName = "Rifleman"; //In-Game Name
		weapons[] = {"GOFM16","rhs_weap_rsp30_red","Binocular","Throw","Put"}; //Spawning Gear
		respawnWeapons[] = {"GOFM16","rhs_weap_rsp30_red","Throw","Put"}; 
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","HandGrenade"};
		linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ocp_norotos","ItemMap","ItemCompass","tfmicrodagr","tfanprc152_10","ItemGPS","NVGREG"};
		respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ocp_norotos","ItemMap","ItemCompass","tfmicrodagr","tfanprc152_10","ItemGPS","NVGREG"};
		uniformClass = "rhs_uniform_cu_ocp"; //uniform you are using
		camouflage = 1.6; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1.6 is Default and 2.0 is a sniper ghille 
	};
	class BluRiflePack: rhsusf_assault_eagleaiii_ocp
    {
        displayname = "Rifleman Backpack"; //In-Game Name
        scope = 2;
 
        class TransportItems
         {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 0; //amount
            };
            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 0; //amount
            };
         };
    };
	class TEST_MH9: B_Heli_Light_01_F 
	{
		faction = "GOFB"; //Faction
		vehicleclass = "GOFBUS"; //Group Class
		displayName = "MH-9"; //Ingame name
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