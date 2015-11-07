		side = 1; //Blufor
		faction = "GOFB"; //Your Faction
		backpack = "BluARPack"; //Backpack
		vehicleclass = "GOFBUS"; //Unit Group
		author = "Derby"; //Self Explanatory 
		_generalMacro = "GOFBUSAR"; //Class Name
		scope = 2; //makes it visible in the editor 
		displayName = "Automatic Rifleman"; //In-Game Name
		
		weapons[] = {"GOFM249","Throw","Put"}; //Spawning Gear
		
		respawnWeapons[] = {"GOFM249","Throw","Put"}; 
		
		magazines[] = {"rhs_200rnd_556x45_T_SAW", "rhs_200rnd_556x45_T_SAW", "rhs_200rnd_556x45_T_SAW",
		"SmokeShell", "SmokeShell", };
		
		respawnMagazines[] = {"rhs_200rnd_556x45_T_SAW", "rhs_200rnd_556x45_T_SAW", "rhs_200rnd_556x45_T_SAW",
		"SmokeShell", "SmokeShell", };
		
		items[] = {MACRO_BasicKit, }; //ACE items in here
		
		respawnitems[] = {MACRO_BasicKit, };
		
		linkedItems[] = {"rhsusf_iotv_ocp_SAW","rhsusf_ach_helmet_ocp_norotos","ItemMap","ItemCompass","tfmicrodagr","tfanprc152","ItemGPS","NVGREG"};
		
		respawnLinkedItems[] = {"rhsusf_iotv_ocp_SAW","rhsusf_ach_helmet_ocp_norotos","ItemMap","ItemCompass","tfmicrodagr","tfanprc152","ItemGPS","NVGREG"};
		
		uniformClass = "rhs_uniform_cu_ocp"; //uniform you are using
		camouflage = 1.6; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1.6 is Default and 2.0 is a sniper ghille 