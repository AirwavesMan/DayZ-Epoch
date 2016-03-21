class MeleeSledge: MeleeWeapon
	{
		scope = public;
		melee= "true";
		autoreload=1;
		magazineReloadTime=0;
		model="\z\addons\dayz_epoch\models\sledge_weaponized";
		picture="\z\addons\dayz_epoch\pictures\equip_sledge_CA.paa"; // todo icon
		displayName=$STR_EQUIP_SLEDGE;
		droppeditem= "ItemSledge";
		magazines[]=
		{
			"Sledge_Swing"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\dayz_weapons\anim\melee_hatchet_holding.rtm"
		};
		class ItemActions
		{
			class Toolbelt
			{
				text=$STR_ACTIONS_2TB;
				script="spawn player_addToolbelt;";
				use[]=
				{
					"MeleeSledge"
				};
				output[]=
				{
					"ItemSledge"
				};
			};
		};
		class Library
		{
			libTextDesc=$STR_EQUIP_SLEDGE_DESC;
		};
		descriptionShort=$STR_EQUIP_SLEDGE_DESC;
	};
