class CfgPatches
{
	class SFM_SunrisePants
	{
		units[]=
		{
			"SFM_SunrisePants1",
			"SFM_SunrisePants2",
			"SFM_SunrisePants3",
			"SFM_SunrisePants4"
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
	class GorkaPants_Summer;
	class SFM_SunrisePants_Base: GorkaPants_Summer
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SunrisePants_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SunrisePants_Base1";
		model="SFM\Set\SFM_Sunrise\Pants\SFM_SunrisePants_g.p3d";
		inventorySlot="Legs";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		absorbency=0.2;
		heatIsolation=0.80000001;
		quickBarBonus=2;
		itemSize[]={2,2};
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Sunrise\Pants\SFM_SunrisePants.p3d";
			female="SFM\Set\SFM_Sunrise\Pants\SFM_SunrisePants_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.94999999;
					};
					class Blood
					{
						damage=0.94999999;
					};
					class Shock
					{
						damage=0.94999999;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.94999999;
					};
					class Blood
					{
						damage=0.94999999;
					};
					class Shock
					{
						damage=0.94999999;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SFM_SunrisePants1: SFM_SunrisePants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_co.paa"
		};
	};
	class SFM_SunrisePants2: SFM_SunrisePants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_gray_co.paa"
		};
	};
	class SFM_SunrisePants3: SFM_SunrisePants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_brown_co.paa"
		};
	};
	class SFM_SunrisePants4: SFM_SunrisePants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_co.paa"
		};
	};
};
