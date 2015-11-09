class cfgFactionClasses
{
 class GOFB //Faction Calling Name
 {
  displayName = "GOF BLUFOR"; //Faction name in-game
  icon = "Data\logo.paa"; //Path to texture next to the faction name in editor "PBOname\filename.paa"
  priority = 1; //How far down it is on the menu
  side = 1; // 1 Blufor 0 opfor 2 independant i think.
 };
 
 class PRESS //Faction Calling Name
 {
  displayName = "PRESS"; //Faction name in-game
  icon = "Data\logo.paa"; //Path to texture next to the faction name in editor "PBOname\filename.paa"
  priority = 1; //How far down it is on the menu
  side = 1; // 1 Blufor 0 opfor 2 independant i think.
 };
 
};
class CfgVehicleClasses
{
 class GOFBUS //Name of unit group e.g Air, Infantry, Armour
 {
	displayName = "GOF US"; //In-game name
	priority = 1; // How far down it is on the menu
 };
 
  class USPRESS //Name of unit group e.g Air, Infantry, Armour
 {
	displayName = "GOF PRESS"; //In-game name
	priority = 1; // How far down it is on the menu
 };
 
 class GOFBNONE
 {
	 displayName = "nothing here yet"; //in-game name
	 priority = 2; // How far down it is on the menu
 }
};