class cfgWeapons
{
    class Uniform_Base; //Calling Classes
    class UniformItem; 
	class V_PlateCarrier3_rgr;
	class ItemInfo;
    class ItemCore;
    class HeadgearItem;
	class rhs_weap_m16a4_carryhandle_grip;
	class rhs_weap_m4a1_carryhandle_m203S;
	class rhsusf_ANPVS_15;
	class rhs_weap_m249_pip_S_vfg;
	class rhs_weap_m4_grip2;
	
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
			ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
            ace_hearing_lowerVolume = 0.60;  // Muffling of the sound (0 to 1, higher means more muffling)
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
	
		class GOFM4A1203: rhs_weap_m4a1_carryhandle_m203S
    {
        scope = 2;
        displayName = "GOF M4A1 m203";
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
	
	
			class GOFM4A1: rhs_weap_m4_grip2
    {
        scope = 2;
        displayName = "GOF M4A1 Grip";
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
	
	
	class FunMG: rhs_weap_m249_pip_S_vfg //test gun DO NOT USE
	{
		scope = 2;
        displayName = "GOFMG";
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
		magazines[] = {"GOFHESAWAMMO", "rhs_200rnd_556x45_M_SAW"};
		reloadTime = 0.13;
        ace_overheating_allowSwapBarrel = 1;  // Enable barrel swap (0-disabled, 1-enabled) - information below
        ace_overheating_dispersion[] = {0, -0.001, 0.001, 0.004};  // Bullet dispersion (in radians) - information below
        ace_overheating_slowdownFactor[] = {1, 1, 1, 0.9};  // Slowdown factor inside the barrel - information below
        ace_overheating_jamChance[] = {0, 0.0003, 0.0015, 0.0075};  // Jam chance - information below
    };
	
	
	class NVGREG: rhsusf_ANPVS_15
	{
        displayName = "High Quality NVGs";  // Name displayed in the inventory
        ace_nightVision_grain = 2.75;  // Amount of grain (dots) on the screen (more means more grain) - can be higher than 1   default:0.75
        ace_nightVision_blur = 0.100;  // Blur amount (more means more blur) - keep low values!                                 default:0.055
        ace_nightVision_radBlur = 0.001;  // Radial blur amount (more means more blur) - keep low values!                       default:0.001
    };

	
	class MyLauncher 
	{
		scope = 2;
        displayName = "GOFROCKET";
        ace_overpressure_angle = 60;  // Cone in which the damage is applied (in degrees from the back end of the launcher)
        ace_overpressure_range = 15;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.7;  // Damage multiplier
		ace_reloadlaunchers_enabled = 1;  // Allow your buddies to reload your launcher (0-disabled, 1-enabled)
    };
	
};