class CfgPatches
{
	class SFM_BerilPants
	{
		units[]=
		{
			"SFM_BerilPants_Stalker",
			"SFM_BerilPants_Svoboda1",
			"SFM_BerilPants_Voen1",
			"SFM_BerilPants_Dolg1",
			"SFM_BerilPants_Monolit1",
			"SFM_BerilPants_Monolit2"
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
			"DZ_Weapons_Lights",
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class GorkaPants_Summer;
	class SFM_BerilPants_Base: GorkaPants_Summer
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_BerilPants_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_BerilPants_Base1";
		model="SFM\Set\SFM_Beril\Pants\SFM_BerilPants_g.p3d";
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		inventorySlot="Legs";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={4,3};
		absorbency=0.2;
		heatIsolation=0.80000001;
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Pants\data\Berill_pants_stalker.paa",
			"SFM\Set\SFM_Beril\Jacket\data\knees_stalker.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Beril\Pants\data\Berill_pants.rvmat",
			"SFM\Set\SFM_Beril\Jacket\data\knees.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Beril\Pants\SFM_BerilPants_m.p3d";
			female="SFM\Set\SFM_Beril\Pants\SFM_BerilPants_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SFM\Set\SFM_Beril\Pants\data\Berill_pants.rvmat",
								"SFM\Set\SFM_Beril\Jacket\data\knees.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Beril\Pants\data\Berill_pants.rvmat",
								"SFM\Set\SFM_Beril\Jacket\data\knees.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Beril\Pants\data\Berill_pants_damage.rvmat",
								"SFM\Set\SFM_Beril\Jacket\data\knees_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Beril\Pants\data\Berill_pants_damage.rvmat",
								"SFM\Set\SFM_Beril\Jacket\data\knees_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Beril\Pants\data\Berill_pants_destrect.rvmat",
								"SFM\Set\SFM_Beril\Jacket\data\knees_destruct.rvmat"
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
	class SFM_BerilPants_Stalker: SFM_BerilPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Pants\data\Berill_pants_stalker.paa",
			"SFM\Set\SFM_Beril\Jacket\data\knees_stalker.paa"
		};
	};
	class SFM_BerilPants_Svoboda1: SFM_BerilPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Pants\data\Berill_pants_free.paa",
			"SFM\Set\SFM_Beril\Jacket\data\knees_free.paa"
		};
	};
	class SFM_BerilPants_Voen1: SFM_BerilPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Pants\data\Berill_pants_mill.paa",
			"SFM\Set\SFM_Beril\Jacket\data\knees_mill.paa"
		};
	};
	class SFM_BerilPants_Dolg1: SFM_BerilPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Pants\data\Berill_pants_dolg.paa",
			"SFM\Set\SFM_Beril\Jacket\data\knees_dolg.paa"
		};
	};
	class SFM_BerilPants_Monolit1: SFM_BerilPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Pants\data\Berill_pants_mono_01.paa",
			"SFM\Set\SFM_Beril\Jacket\data\knees_mono.paa"
		};
	};
	class SFM_BerilPants_Monolit2: SFM_BerilPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Pants\data\Berill_pants_mono_02.paa",
			"SFM\Set\SFM_Beril\Jacket\data\knees_mono.paa"
		};
	};
};
