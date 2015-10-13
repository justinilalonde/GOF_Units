//Hope this helps you out :)
//Constructed by Delta 1 Actual and you are free to use this
//Calling classes = Items you Item will get extra information from e.g Models, physics etc.


class CfgPatches
{
    class GOFB 
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {a3_characters_F, a3_characters_f_beta, a3_characters_f_gamma};
    };
};
class cfgFactionClasses
{
 class GOFB //Faction Calling Name
 {
  displayName = "GOF BLUFOR"; //Faction name in-game
  icon = "BluforUS\logo.paa"; //Path to texture next to the faction name in editor "PBOname\filename.paa"
  priority = 1; //How far down it is on the menu
  side = 1; // 1 Blufor 0 opfor 2 independant i think.
 };
};
class CfgVehicleClasses
{
 class GOFBUS //Name of unit group e.g Air, Infantry, Armour
 {
	displayName = "US"; //In-game name
	priority = 1; // How far down it is on the menu
 };
 class GOFBNONE
 {
	 displayName = "nothing here yet"; //in-game name
	 priority = 2; // How far down it is on the menu
 }
};

 class CfgVehicles
{
	class   b_survivor_F  ; //Calling classes
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


class cfgWeapons
{
    class Uniform_Base; //Calling Classes
    class UniformItem; 
	class V_PlateCarrier3_rgr;
	class ItemInfo;
    class ItemCore;
    class HeadgearItem;
	class rhs_weap_m16a4_carryhandle_grip;
	class rhsusf_ANPVS_15;
	
 
    class TEST_Uniform: Uniform_Base
    {
        scope = 2;
        displayName = "Custom Uniform"; //In-Game name
        picture = "\A3\characters_f_epa\data\ui\icon_U_B_CTRG_uniform_ca.paa"; //Menu Picture
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; //the model it uses when its on the ground
		hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"TEST\data\TEST_Uniform_co.paa"}; //Path to my texture.
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TEST_Unit"; //A Unit that wears it
            containerClass = "Supply40"; //Carry Amount
            mass = 30; //Weight
			hiddenSelections[] = {"camo"};
        };
	};
	
	class TEST_Vest: V_PlateCarrier3_rgr
	{
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa"; //Menu Picture
		displayName = "Heavy Vest"; //In-Game name
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"TEST\Data\TEST_Vest_co.paa"}; //Vest texture path
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01"; //Vest model you are using
			containerClass = "Supply160"; //Carry Amount
			mass = 50; // Weight
			armor = "5*1.4";
			passThrough = 0.4;
			hiddenSelections[] = {"camo"};
		};
	};



    
    class TEST_Helmet: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Combat Helmet"; //In-Game name
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa"; //Menu Picture
        model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry"; // Model
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"TEST\data\TEST_Helmet_co.paa"}; // Path to your texture.
        class ItemInfo: HeadgearItem
        {
            mass = 40; // Weight
            uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
            modelSides[] = {3,1,2};
            armor = "3*0.6";
            passThrough = 0.6;
            hiddenSelections[] = {"camo"};
        };
	};
	
	
	class GOFM16: rhs_weap_m16a4_carryhandle_grip
    {
        scope = 2;
        displayName = "GOF M16A4";
        class LinkedItems
        {
            class LinkedItemsOptic //Attachment: Optics
         {
            slot = "CowsSlot";
            item = "rhsusf_acc_eotech_552";
         };
		 
            class LinkedItemsMuzzle //Attachment: Barrel
         {
            slot = "MuzzleSlot";
            item = "muzzle_snds_B";
         };
 
            class LinkedItemsAcc //Attachment: Accessory 
         {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15side";
         };
        };
    };
	class NVGREG: rhsusf_ANPVS_15
	{
        displayName = "High Quality NVGs";  // Name displayed in the inventory
        ace_nightVision_grain = 2.75;  // Amount of grain (dots) on the screen (more means more grain) - can be higher than 1   default:0.75
        ace_nightVision_blur = 0.100;  // Blur amount (more means more blur) - keep low values!                                 default:0.055
        ace_nightVision_radBlur = 0.001;  // Radial blur amount (more means more blur) - keep low values!                       default:0.001
    };
	
	
};


