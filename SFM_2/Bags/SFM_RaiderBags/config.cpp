class CfgPatches
{
	class SFM_RaiderBags
	{
		units[]=
		{
			"SFM_RaiderBags_Black",
			"SFM_RaiderBags_Green",
			"SFM_RaiderBags_Tan"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class TortillaBag;
	class SFM_RaiderBags_Base: TortillaBag
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_RaiderBags_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_RaiderBags_Base1";
		model="SFM_2\Bags\SFM_RaiderBags\SFM_RaiderBags_g.p3d";
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
		itemSize[]={4,4};
		itemsCargoSize[]={9,10};
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
			"SFM_2\Bags\SFM_RaiderBags\data\T_BACKPACK_01_GREEN_BaseColor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM_2\Bags\SFM_RaiderBags\data\Backpack_MilitaryBig.rvmat"
		};
		class ClothingTypes
		{
			male="SFM_2\Bags\SFM_RaiderBags\SFM_RaiderBags.p3d";
			female="SFM_2\Bags\SFM_RaiderBags\SFM_RaiderBags.p3d";
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
								"SFM_2\Bags\SFM_RaiderBags\data\Backpack_MilitaryBig.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM_2\Bags\SFM_RaiderBags\data\Backpack_MilitaryBig.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM_2\Bags\SFM_RaiderBags\data\Backpack_MilitaryBig_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM_2\Bags\SFM_RaiderBags\data\Backpack_MilitaryBig_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM_2\Bags\SFM_RaiderBags\data\Backpack_MilitaryBig_destruct.rvmat"
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
	class SFM_RaiderBags_Black: SFM_RaiderBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_RaiderBags\data\T_BACKPACK_01_BLACK_BaseColor.paa"
		};
	};
	class SFM_RaiderBags_Green: SFM_RaiderBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_RaiderBags\data\T_BACKPACK_01_GREEN_BaseColor.paa"
		};
	};
	class SFM_RaiderBags_Tan: SFM_RaiderBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_RaiderBags\data\T_BACKPACK_01_TAN_BaseColor.paa"
		};
	};
};
