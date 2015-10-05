	class rhs_msv_rifleman;	
	class rhs_msv_grenadier;	
	class rhs_msv_machinegunner;	
	class rhs_msv_machinegunner_assistant;	
	class rhs_msv_at;	
	class rhs_msv_aa;	
	class rhs_msv_strelok_rpg_assist;	
	class rhs_msv_marksman;	
	class rhs_msv_officer;	
	class rhs_msv_engineer;	
	class rhs_msv_medic;	
	class rhs_msv_crew;	
	class rhs_msv_sergeant;	
	class rhs_msv_junior_sergeant;	
	
	class LOP_US_Infantry_Rifleman : rhs_msv_rifleman {
		_generalMacro = "LOP_US_Infantry_Rifleman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_01";
		
		displayName = "Rifleman";
		
		hiddenSelections[] = {"camo1", "camo2", "camob", "insignia"};
		hiddenSelectionsTextures[] = {"lop_faction_us\data\u_fatigue_01_co.paa", "", ""};
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak103_dtk", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak103_dtk", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b13", "rhs_6b26_ess_bala", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b13", "rhs_6b26_ess_bala", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_US_Infantry_TL : rhs_msv_sergeant {
		_generalMacro = "LOP_US_Infantry_TL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_02";
		
		displayName = "Team Leader";
		
		hiddenSelections[] = {"camo1", "camo2", "camob", "insignia"};
		hiddenSelectionsTextures[] = {"lop_faction_us\data\u_fatigue_02_co.paa", "", ""};
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b23_digi_6sh92_radio", "rhs_6b28_green", "G_Balaclava_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_radio", "rhs_6b28_green", "G_Balaclava_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};		
	class LOP_US_Infantry_SL : rhs_msv_junior_sergeant {
		_generalMacro = "LOP_US_Infantry_SL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_03";
		
		displayName = "Section Leader";

		hiddenSelections[] = {"camo1", "camo2", "camob", "insignia"};
		hiddenSelectionsTextures[] = {"lop_faction_us\data\u_fatigue_03_co.paa", "", ""};
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_2mag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_2mag", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b23_digi_sniper", "rhs_6b26_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_digi_sniper", "rhs_6b26_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};		
	class LOP_US_Infantry_Crewman : rhs_msv_crew {
		_generalMacro = "LOP_US_Infantry_Crewman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_03";
		
		displayName = "Crewman";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6Sh92_OLV", "rhs_tsh4", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV", "rhs_tsh4", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_US_Infantry_Corpsman : rhs_msv_medic {
		_generalMacro = "LOP_US_Infantry_Corpsman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_04";
		
		hiddenSelections[] = {"camo1", "camo2", "camob", "insignia"};
		hiddenSelectionsTextures[] = {"lop_faction_us\data\u_fatigue_04_co.paa", "", ""};
		
		displayName = "Corpsman";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_Kitbag_Med";
	};	
	class LOP_US_Infantry_Officer : rhs_msv_officer {
		_generalMacro = "LOP_US_Infantry_Officer";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_01";
		
		displayName = "Officer";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase", "rhs_6b27m_ml_ess", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase", "rhs_6b27m_ml_ess", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_US_Infantry_Marksman : rhs_msv_marksman {
		_generalMacro = "LOP_US_Infantry_Marksman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_04";
		
		displayName = "Marksman";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"LOP_Weap_SVDS", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"LOP_Weap_SVDS", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b23_rifleman", "rhs_6b27m", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_rifleman", "rhs_6b27m", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_Sidor_SVD";
	};	
	class LOP_US_Infantry_AA : rhs_msv_at {
		_generalMacro = "LOP_US_Infantry_AA";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_03";
		
		displayName = "Anti Aircraft";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_2mag", "rhs_weap_igla", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_2mag", "rhs_weap_igla", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_Rifleman_OLV", "rhs_6b27m_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_Rifleman_OLV", "rhs_6b27m_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_AA_Pack";
	};		
	class LOP_US_Infantry_AT : rhs_msv_at {
		_generalMacro = "LOP_US_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "rhs_uniform_flora_patchless";
		
		displayName = "Anti Tank";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m", "rhs_weap_rpg7", "Throw", "Put"};
		
		magazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b13_Flora", "rhs_6b27m", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b13_Flora", "rhs_6b27m", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_RPG_Pack";
	};	
	class LOP_US_Infantry_AT_Asst : rhs_msv_strelok_rpg_assist {
		_generalMacro = "LOP_US_Infantry_AT_Asst";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "rhs_uniform_flora_patchless";
		
		displayName = "Anti Tank assisant";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b13_EMR", "rhs_6b26_ess_bala_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b13_EMR", "rhs_6b26_ess_bala_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_RPG_Pack";
	};	
	class LOP_US_Infantry_GL : rhs_msv_grenadier {
		_generalMacro = "LOP_US_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "rhs_uniform_flora_patchless";
		
		displayName = "Grenadier";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b23_6sh92", "rhs_6b26_bala", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_6sh92", "rhs_6b26_bala", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_US_Infantry_MG : rhs_msv_machinegunner {
		_generalMacro = "LOP_US_Infantry_MG";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_03";
		
		displayName = "Machinegunner";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b23_rifleman", "rhs_6b26_bala", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_rifleman", "rhs_6b26_bala", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_Fieldpack_PKM";
	};	
	class LOP_US_Infantry_MG_Asst : rhs_msv_machinegunner_assistant {
		_generalMacro = "LOP_US_Infantry_MG_Asst";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_03";
		
		displayName = "Machinegunner assistant";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_Rifleman_OLV", "rhs_6b27m_green_ess", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_Rifleman_OLV", "rhs_6b27m_green_ess", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_Fieldpack_PKM";
	};
	class LOP_US_Infantry_Engineer : rhs_msv_engineer {
		_generalMacro = "LOP_US_Infantry_Engineer";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_04";
		
		displayName = "Engineer";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_digi", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_digi", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};	