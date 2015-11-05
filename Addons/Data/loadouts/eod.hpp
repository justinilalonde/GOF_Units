		side = 1; //Blufor
		faction = "GOFB"; //Your Faction
		backpack = "BluEODPack"; //Backpack
		vehicleclass = "GOFBUS"; //Unit Group
		author = "Derby"; //Self Explanatory 
		_generalMacro = "GOFBUSEOD"; //Class Name
		scope = 2; //makes it visible in the editor 
		displayName = "EOD/AT"; //In-Game Name
		
		weapons[] = {"GOFM4A1", "rhs_weap_M136_hedp","Binocular","Throw","Put"}; //Spawning Gear
		
		respawnWeapons[] = {"GOFM4A1", "rhs_weap_M136_hedp","Binocular","Throw","Put"}; 
		
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 
		"SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", };
		
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 
		"SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", };
		
		items[] = {MACRO_BasicKit, }; //ACE items in here
		
		respawnitems[] = {MACRO_BasicKit, };
		
		linkedItems[] = {"rhsusf_iotv_ocp_Repair","rhsusf_ach_helmet_ocp_norotos","ItemMap","ItemCompass","tfmicrodagr","tfanprc152_10","ItemGPS","NVGREG"};
		
		respawnLinkedItems[] = {"rhsusf_iotv_ocp_Repair","rhsusf_ach_helmet_ocp_norotos","ItemMap","ItemCompass","tfmicrodagr","tfanprc152_10","ItemGPS","NVGREG"};
		
		uniformClass = "rhs_uniform_cu_ocp"; //uniform you are using
		camouflage = 1.6; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1.6 is Default and 2.0 is a sniper ghille 