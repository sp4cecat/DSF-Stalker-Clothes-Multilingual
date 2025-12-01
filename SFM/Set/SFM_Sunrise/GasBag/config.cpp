class CfgPatches
{
	class SFM_SunriseGasBag
	{
		units[]=
		{
			"SFM_SunriseGasBag",
			"SFM_SunriseGasBag2"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Belts",
			"DZ_Characters_Glasses",
			"DZ_Characters_Gloves",
			"DZ_Characters_Headgear",
			"DZ_Characters_Heads",
			"DZ_Characters_Masks",
			"DZ_Characters_Pants",
			"DZ_Characters_Shoes",
			"DZ_Characters_Tops",
			"DZ_Characters_Vests",
			"DZ_Weapons_Magazines"
		};
	};
};
class CfgVehicles
{
	class TaloonBag_ColorBase;
	class SFM_SunriseGasBag: TaloonBag_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SunriseGasBag0";
		descriptionShort="$STR_CfgVehicles_SFM_SunriseGasBag1";
		model="SFM\Set\SFM_Sunrise\GasBag\SFM_SunriseGasBag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		simulation="clothing";
		attachments[]={};
		KTSwitchInto="dzrp_SunriseM1_Set_Rebreather_Universal";
		rotationFlags=64;
		weight=4000;
		itemSize[]={3,3};
		itemsCargoSize[]={};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		simpleHiddenSelections[]=
		{
			"unhidetube",
			"hidetube"
		};
		conflictedSlots[]=
		{
			"Mask"
		};
		conflictedTypes[]=
		{
			"GP5GasMask"
		};
		varQuantityInit=216;
		varQuantityMax=216;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\GasBag\SunriseM1_GasBag_co.paa"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Sunrise\GasBag\SFM_SunriseGasBag.p3d";
			female="SFM\Set\SFM_Sunrise\GasBag\SFM_SunriseGasBag.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"SFM\Set\SFM_Sunrise\GasBag\SunriseM1_GasBag_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Sunrise\GasBag\SunriseM1_GasBag_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Sunrise\GasBag\SunriseM1_GasBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Sunrise\GasBag\SunriseM1_GasBag_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Sunrise\GasBag\SunriseM1_GasBag_destruct.rvmat"
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
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class SFM_SunriseGasBag2: TaloonBag_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SunriseGasBag20";
		descriptionShort="$STR_CfgVehicles_SFM_SunriseGasBag21";
		model="SFM\Set\SFM_Sunrise\GasBag\SFM_SunriseGasBag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		simulation="clothing";
		attachments[]=
		{
			"FactionCover"
		};
		rotationFlags=64;
		weight=4000;
		itemSize[]={3,3};
		itemsCargoSize[]={};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		varQuantityInit=2500;
		varQuantityMax=2500;
		varQuantityMin=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		stackedUnit="percentage";
		simpleHiddenSelections[]=
		{
			"unhidetube",
			"hidetube"
		};
		conflictedSlots[]=
		{
			"Mask"
		};
		conflictedTypes[]=
		{
			"GP5GasMask"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\GasBag\SunriseM1_GasBag_co.paa"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Sunrise\GasBag\SFM_SunriseGasBag.p3d";
			female="SFM\Set\SFM_Sunrise\GasBag\SFM_SunriseGasBag.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"SFM\Set\SFM_Sunrise\GasBag\SunriseM1_GasBag_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Sunrise\GasBag\SunriseM1_GasBag_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Sunrise\GasBag\SunriseM1_GasBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Sunrise\GasBag\SunriseM1_GasBag_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Sunrise\GasBag\SunriseM1_GasBag_destruct.rvmat"
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
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
};
