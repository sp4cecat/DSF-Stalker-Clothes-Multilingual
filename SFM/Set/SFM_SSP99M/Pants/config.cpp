class CfgPatches
{
	class SFM_SSP99M_Pants
	{
		units[]=
		{
			"SFM_SSP99M_Pants_Red",
			"SFM_SSP99M_Pants_Green"
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
	class SFM_SSP99M_Pants_Base: GorkaPants_Summer
	{
		scope=0;
		model="SFM\Set\SFM_SSP99M\Pants\SSP99M_Pants_g.p3d";
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
		itemSize[]={4,3};
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SSP99M\Pants\data\SSP_pants_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_SSP99M\Pants\data\SSP_pants_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_SSP99M\Pants\SSP99M_Pants.p3d";
			female="SFM\Set\SFM_SSP99M\Pants\SSP99M_Pants.p3d";
		};
		class Protection
		{
			biological=1;
			chemical=1;
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
								"SFM\Set\SFM_SSP99M\Pants\data\SSP_pants_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_SSP99M\Pants\data\SSP_pants_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_SSP99M\Pants\data\SSP_pants_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_SSP99M\Pants\data\SSP_pants_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"SFM\Set\SFM_SSP99M\Pants\data\SSP_pants_destruct.rvmat"
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
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
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
	class SFM_SSP99M_Pants_Red: SFM_SSP99M_Pants_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SSP99M_Pants_Red0";
		descriptionShort="$STR_CfgVehicles_SFM_SSP99M_Pants_Red1";
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SSP99M\Pants\data\SSP_pants_co.paa"
		};
	};
	class SFM_SSP99M_Pants_Green: SFM_SSP99M_Pants_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SSP99M_Pants_Green0";
		descriptionShort="$STR_CfgVehicles_SFM_SSP99M_Pants_Green1";
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SSP99M\Pants\data\SSP_pants_green.paa"
		};
	};
};
