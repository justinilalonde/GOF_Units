		side = 1; //Blufor
		faction = "PRESS"; //Your Faction
		backpack = "BluRiflePack"; //Backpack
		vehicleclass = "USPRESS"; //Unit Group
		author = "Abel"; //Self Explanatory 
		_generalMacro = "PRESSPH"; //Class Name
		scope = 2; //makes it visible in the editor 
		displayName = "Photographer"; //In-Game Name
		
		weapons[] = {"Camera","Throw","Put"}; //Spawning Gear
		
		respawnWeapons[] = {"Camera","Throw","Put"}; 
		
		magazines[] = {};
		
		respawnMagazines[] = {};
		
		linkedItems[] = {"V_Press_F","H_Cap_press","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
		
		respawnLinkedItems[] = {"V_Press_F","H_Cap_press","ItemMap","ItemCompass","ItemGPS","ItemWatch"};
		
		uniformClass = "U_Rangemaster"; //uniform you are using
		camouflage = 1.6; //If wanting to edit how hard it is for AI to detect it, wouldn't recommend changing this. 1.6 is Default and 2.0 is a sniper ghille 