		faction = "GOFB"; //Faction
		vehicleclass = "GOFBUS"; //Group Class
		displayName = "UH60M MEV"; //Ingame name
		crew = "GOFBUSHEP"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		scope = 2;
		scopeCurator = 2;
		class TransportItems //Cargo Items
        {
		
			item_xx(ACE_morphine,100);
			item_xx(ACE_epinephrine,100);
			item_xx(ACE_atropine,100);
			item_xx(ACE_quikclot,100);
			item_xx(ACE_elasticBandage,100);
			item_xx(ACE_packingBandage,100);
			item_xx(ACE_salineIV_500,25);
			item_xx(ACE_tourniquet,10);
			item_xx(ACE_personalAidKit,25);
			item_xx(ACE_ACE_surgicalKit,5);
				
        };
		 
		class TransportMagazines
		{	
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,20);
			mag_xx(rhs_200rnd_556x45_T_SAW,5);			
		};
		
		class TransportWeapons 
		{
			weap_xx(GOFM16,2);
		};
		
		class TransportBackpacks
		{

		};