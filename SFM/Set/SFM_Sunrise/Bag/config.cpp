class CfgPatches
{
	class SFM_SunriseBag
	{
		units[]=
		{
			"SFM_SunriseBag1",
			"SFM_SunriseBag2",
			"SFM_SunriseBag3"
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
	class SFM_SunriseBag1: TaloonBag_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SunriseBag10";
		descriptionShort="$STR_CfgVehicles_SFM_SunriseBag11";
		model="SFM\Set\SFM_Sunrise\Bag\SFM_SunriseBag_g.p3d";
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
		rotationFlags=64;
		weight=2000;
		itemSize[]={3,3};
		itemsCargoSize[]={8,9};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Bag\data\SunriseM1_Bag_co.paa"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Sunrise\Bag\SFM_SunriseBag.p3d";
			female="SFM\Set\SFM_Sunrise\Bag\SFM_SunriseBag.p3d";
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
								"SFM\Set\SFM_Sunrise\Bag\data\SunriseM1_Bag_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Sunrise\Bag\data\SunriseM1_Bag_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Sunrise\Bag\data\SunriseM1_Bag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Sunrise\Bag\data\SunriseM1_Bag_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Sunrise\Bag\data\SunriseM1_Bag_destruct.rvmat"
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
	class SFM_SunriseBag2: SFM_SunriseBag1
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Bag\data\SunriseM1_Bag_black.paa"
		};
	};
	class SFM_SunriseBag3: SFM_SunriseBag1
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Bag\data\SunriseM1_Bag_black.paa"
		};
	};
};
