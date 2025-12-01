class CfgPatches
{
	class SFM_SSP99M_Boots
	{
		units[]=
		{
			"SFM_SSP99M_Boots"
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
	class Sneakers_Black;
	class SFM_SSP99M_Boots: Sneakers_Black
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SSP99M_Boots0";
		descriptionShort="$STR_CfgVehicles_SFM_SSP99M_Boots1";
		model="SFM\Set\SFM_SSP99M\Boots\SSP99M_Boots_g.p3d";
		inventorySlot[]=
		{
			"Feet"
		};
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		weight=270;
		durability=0.5;
		varWetMax=0.49000001;
		heatIsolation=0.5;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SSP99M\Boots\data\SSP_boots_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_SSP99M\Boots\data\SSP_boots_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_SSP99M\Boots\SSP99M_Boots.p3d";
			female="SFM\Set\SFM_SSP99M\Boots\SSP99M_Boots.p3d";
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
							1.1,
							
							{
								"SFM\Set\SFM_SSP99M\Boots\data\SSP_boots_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_SSP99M\Boots\data\SSP_boots_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_SSP99M\Boots\data\SSP_boots_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_SSP99M\Boots\data\SSP_boots_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_SSP99M\Boots\data\SSP_boots_destruct.rvmat"
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
					soundSet="AthleticShoes_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="AthleticShoes_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};
