class CfgPatches
{
	class SFM_TuristBags
	{
		units[]=
		{
			"SFM_TuristBags_Blue",
			"SFM_TuristBags_Green",
			"SFM_TuristBags_Red",
			"SFM_TuristBags_Yellow"
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
	class SFM_TuristBags_Base: TortillaBag
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_TuristBags_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_TuristBags_Base1";
		model="SFM_2\Bags\SFM_TuristBags\SFM_TuristBags_g.p3d";
		inventorySlot="Back";
		attachments[]={};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={4,4};
		itemsCargoSize[]={10,8};
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
			"SFM_2\Bags\SFM_TuristBags\data\Backpack_03_Green_BaseColor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM_2\Bags\SFM_TuristBags\data\Backpack_Tourists.rvmat"
		};
		class ClothingTypes
		{
			male="SFM_2\Bags\SFM_TuristBags\SFM_TuristBags.p3d";
			female="SFM_2\Bags\SFM_TuristBags\SFM_TuristBags.p3d";
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
								"SFM_2\Bags\SFM_TuristBags\data\Backpack_Tourists.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM_2\Bags\SFM_TuristBags\data\Backpack_Tourists.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM_2\Bags\SFM_TuristBags\data\Backpack_Tourists_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM_2\Bags\SFM_TuristBags\data\Backpack_Tourists_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM_2\Bags\SFM_TuristBags\data\Backpack_Tourists_destruct.rvmat"
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
	class SFM_TuristBags_Blue: SFM_TuristBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_TuristBags\data\Backpack_03_Blue_BaseColor.paa"
		};
	};
	class SFM_TuristBags_Green: SFM_TuristBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_TuristBags\data\Backpack_03_Green_BaseColor.paa"
		};
	};
	class SFM_TuristBags_Red: SFM_TuristBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_TuristBags\data\Backpack_03_Red_BaseColor.paa"
		};
	};
	class SFM_TuristBags_Yellow: SFM_TuristBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_TuristBags\data\Backpack_03_Yellow_BaseColor.paa"
		};
	};
};
