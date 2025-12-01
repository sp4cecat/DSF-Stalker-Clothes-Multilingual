class CfgPatches
{
	class SFM_WFPants
	{
		units[]=
		{
			"SFM_WFPants_Stalker",
			"SFM_WFPants_Svoboda1",
			"SFM_WFPants_Naem1",
			"SFM_WFPants_Naem2",
			"SFM_WFPants_Monolit1",
			"SFM_WFPants_Monolit2"
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
	class SFM_WFPants_Base: GorkaPants_Summer
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_WFPants_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_WFPants_Base1";
		model="SFM\Set\SFM_WindFreedom\Pants\SFM_WFPants_g.p3d";
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
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_co.rvmat",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_WindFreedom\Pants\SFM_WFPants.p3d";
			female="SFM\Set\SFM_WindFreedom\Pants\SFM_WFPants.p3d";
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
								"SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_co.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_co.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_damage.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\knees_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_damage.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\knees_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_destruct.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\knees_damage.rvmat"
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
	class SFM_WFPants_Stalker: SFM_WFPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.paa"
		};
	};
	class SFM_WFPants_Svoboda1: SFM_WFPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_free_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_free_co.paa"
		};
	};
	class SFM_WFPants_Naem1: SFM_WFPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_merc_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_merc_co.paa"
		};
	};
	class SFM_WFPants_Naem2: SFM_WFPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_merc_02_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_merc_co.paa"
		};
	};
	class SFM_WFPants_Monolit1: SFM_WFPants_Base
	{
		scope=2;
		visibilityModifier=0.1;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_monolith_01_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_monolith_co.paa"
		};
	};
	class SFM_WFPants_Monolit2: SFM_WFPants_Base
	{
		scope=2;
		visibilityModifier=0.1;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_monolith_02_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_monolith_co.paa"
		};
	};
};
