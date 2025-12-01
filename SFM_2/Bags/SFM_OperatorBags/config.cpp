class CfgPatches
{
	class SFM_OperatorBags
	{
		units[]=
		{
			"SFM_OperatorBags_Black",
			"SFM_OperatorBags_Green",
			"SFM_OperatorBags_Tan",
			"SFM_OperatorBags_Voen",
			"SFM_OperatorBags_CS",
			"SFM_OperatorBags_Svoboda",
			"SFM_OperatorBags_Dolg",
			"SFM_OperatorBags_Blue",
			"SFM_OperatorBags_Monolit"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Data",
			"DZ_Radio",
			"DZ_Gear_Consumables"
		};
	};
};
class CfgVehicles
{
	class TortillaBag;
	class SFM_OperatorBags_Base: TortillaBag
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_OperatorBags_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_OperatorBags_Base1";
		model="SFM_2\Bags\SFM_OperatorBags\SFM_OperatorBags_g.p3d";
		inventorySlot="Back";
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={5,6};
		itemsCargoSize[]={8,8};
		repairableWithKits[]={5,2};
		weight=2100;
		soundAttType="Outdoor";
		randomQuantity=3;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_OperatorBags\data\T_Backpack_02_GREEN_BaseColor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM_2\Bags\SFM_OperatorBags\data\Backpack_MilitarySmall.rvmat"
		};
		class ClothingTypes
		{
			male="SFM_2\Bags\SFM_OperatorBags\SFM_OperatorBags.p3d";
			female="SFM_2\Bags\SFM_OperatorBags\SFM_OperatorBags.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SFM_2\Bags\SFM_OperatorBags\data\Backpack_MilitarySmall.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM_2\Bags\SFM_OperatorBags\data\Backpack_MilitarySmall.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM_2\Bags\SFM_OperatorBags\data\Backpack_MilitarySmall_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM_2\Bags\SFM_OperatorBags\data\Backpack_MilitarySmall_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM_2\Bags\SFM_OperatorBags\data\Backpack_MilitarySmall_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="DayZRP_Slot_Soundset";
					id=796;
				};
				class pickUpItem
				{
					soundSet="DayZRP_Slot_Soundset";
					id=797;
				};
				class drop
				{
					soundset="DayZRP_Slot_Soundset";
					id=898;
				};
			};
		};
	};
	class SFM_OperatorBags_Black: SFM_OperatorBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_OperatorBags\data\T_Backpack_02_BLACK_BaseColor.paa"
		};
	};
	class SFM_OperatorBags_Green: SFM_OperatorBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_OperatorBags\data\T_Backpack_02_GREEN_BaseColor.paa"
		};
	};
	class SFM_OperatorBags_Tan: SFM_OperatorBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_OperatorBags\data\T_Backpack_02_TAN_BaseColor.paa"
		};
	};
	class SFM_OperatorBags_Voen: SFM_OperatorBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_OperatorBags\data\T_Backpack_02_Voen_BaseColor.paa"
		};
	};
	class SFM_OperatorBags_CS: SFM_OperatorBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_OperatorBags\data\T_Backpack_02_Clear.paa"
		};
	};
	class SFM_OperatorBags_Svoboda: SFM_OperatorBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_OperatorBags\data\T_Backpack_02_FREE_BaseColor.paa"
		};
	};
	class SFM_OperatorBags_Dolg: SFM_OperatorBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_OperatorBags\data\T_Backpack_02_dolg.paa"
		};
	};
	class SFM_OperatorBags_Blue: SFM_OperatorBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_OperatorBags\data\T_Backpack_02_Merc.paa"
		};
	};
	class SFM_OperatorBags_Monolit: SFM_OperatorBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_OperatorBags\data\T_Backpack_02_Monolith.paa"
		};
	};
};
