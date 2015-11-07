		side = 1; //Blufor
		faction = "GOFB"; //Your Faction
		backpack = "BluFixPilotPack"; //Backpack
		vehicleclass = "GOFBUS"; //Unit Group
		author = "Derby"; //Self Explanatory 
		_generalMacro = "GOFBUSFIX"; //Class Name
		scope = 2; //makes it visible in the editor 
		displayName = "Fixed wing Pilot"; //In-Game Name
		
		weapons[] = {"GOFM4A1","rhs_weap_rsp30_red","Binocular","Throw","Put"}; //Spawning Gear
		
		respawnWeapons[] = {"GOFM4A1","rhs_weap_rsp30_red","Binocular","Throw","Put"}; 
		
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"SmokeShellGreen",
		"SmokeShellBlue",  };
		
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"SmokeShellGreen",
		"SmokeShellBlue",  };
		
		items[] = {MACRO_BasicKit,
		"ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", 
		"ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", 
		"ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", 
		"ACE_atropine", "ACE_atropine", 
		"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", 
		"ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", 
		"ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", 		}; //ACE items in here
		
		respawnitems[] = {MACRO_BasicKit,
		"ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", 
		"ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", 
		"ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", 
		"ACE_atropine", "ACE_atropine", 
		"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", 
		"ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", 
		"ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", 		};
		
		linkedItems[] = {"V_TacVest_oli","H_PilotHelmetFighter_O","ItemMap","ItemCompass","tfmicrodagr","tfanprc152","ItemGPS","NVGTL"};
		
		respawnLinkedItems[] = {"V_TacVest_oli","H_PilotHelmetFighter_O","ItemMap","ItemCompass","tfmicrodagr","tfanprc152","ItemGPS","NVGTL"};
		
		uniformClass = "U_I_pilotCoveralls"; //uniform you are using
		camouflage = 1.6; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1.6 is Default and 2.0 is a sniper ghille 