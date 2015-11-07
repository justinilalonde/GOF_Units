class CfgGroups
{
	class West
	{
		class GOFB
		{
			name = "GOF";
			class Infantry
			{
				name = "Infantry";
				class GOF_Fireteam
				{
					name = "Fireteam";
					faction = "GOFB";
					side = 1;
					aliveCategory = "Infantry";
					class Unit0
					{
						side = 1;
						vehicle = "GOFBUSFTL";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "GOFBUSAR";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "GOFBUSAAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "GOFBUSAT";
						rank = "Private";
						position[] = {7,0,0};
					};			
				};
			};			
		};	
	};
};