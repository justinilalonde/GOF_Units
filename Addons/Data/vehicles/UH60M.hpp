		faction = "GOFB"; //Faction
		vehicleclass = "GOFBUS"; //Group Class
		displayName = "UH60M"; //Ingame name
		crew = "GOFBUSHEP"; //or if you make your own crew... crew = "TEST_Heli_pilot";
		scope = 2;
		scopeCurator = 2;
		class TransportItems //Cargo Items
        {
		
			item_xx(ACE_morphine,50);
			item_xx(ACE_epinephrine,50);
			item_xx(ACE_atropine,50);
			item_xx(ACE_quikclot,50);
			item_xx(ACE_elasticBandage,50);
			item_xx(ACE_packingBandage,50);
			item_xx(ACE_salineIV_500,25);
			item_xx(ACE_tourniquet,10);
			item_xx(ACE_personalAidKit,25);
			item_xx(ACE_ACE_surgicalKit,1);
				
        };
		
		class TransportMagazines
		{	
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,50);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(rhs_200rnd_556x45_T_SAW,20);			
		};
		
		class TransportWeapons 
		{
			weap_xx(GOFM16,5);
		};
		
		class TransportBackpacks
		{

		};