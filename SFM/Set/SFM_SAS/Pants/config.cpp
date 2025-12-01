class CfgPatches
{
	class SFM_SASPants
	{
		units[]=
		{
			"SFM_SASPants1",
			"SFM_SASPants2",
			"SFM_SASPants3",
			"SFM_SASPants4",
			"SFM_SASPants5",
			"SFM_SASPants6",
			"SFM_SASPants7",
			"SFM_SASPants_Naem1",
			"SFM_SASPants_Naem2",
			"SFM_SASPants_Bandit1",
			"SFM_SASPants_Renegat1",
			"SFM_SASPants_Voen1",
			"SFM_SASPants_Svoboda1"
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
	class SFM_SASPants_Base: GorkaPants_Summer
	{
		displayName="$STR_CfgVehicles_SFM_SASPants_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SASPants_Base1";
		scope=0;
		model="SFM\Set\SFM_SAS\Pants\SFM_SASPants_g.p3d";
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
			"SFM\Set\SFM_SAS\Pants\data\sas_pants_co.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\sas_pants_co.rvmat",
			"SFM\Set\SFM_SAS\Pants\data\kneepad_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_SAS\Pants\SFM_SASPants_m.p3d";
			female="SFM\Set\SFM_SAS\Pants\SFM_SASPants_f.p3d";
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
								"SFM\Set\SFM_SAS\Pants\data\sas_pants_co.rvmat",
								"SFM\Set\SFM_SAS\Pants\data\kneepad_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_SAS\Pants\data\sas_pants_co.rvmat",
								"SFM\Set\SFM_SAS\Pants\data\kneepad_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_SAS\Pants\data\SAS_Pants_damage.rvmat",
								"SFM\Set\SFM_SAS\Pants\data\kneepad_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_SAS\Pants\data\SAS_Pants_damage.rvmat",
								"SFM\Set\SFM_SAS\Pants\data\kneepad_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_SAS\Pants\data\SAS_Pants_destruct.rvmat",
								"SFM\Set\SFM_SAS\Pants\data\kneepad_destruct.rvmat"
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
	class SFM_SASPants1: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\SAS_Pasnts_Stalker_1.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class SFM_SASPants2: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\SAS_Pasnts_Stalker_2.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class SFM_SASPants3: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\SAS_Pasnts_Stalker_3.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class SFM_SASPants4: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\SAS_Pasnts_Stalker_4.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class SFM_SASPants5: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\SAS_Pasnts_Stalker_5.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class SFM_SASPants6: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\SAS_Pasnts_Stalker_6.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class SFM_SASPants7: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\SAS_Pants_co.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class SFM_SASPants_Naem1: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\SAS_pants_merc.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class SFM_SASPants_Naem2: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\SAS_pants_merc_02.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class SFM_SASPants_Bandit1: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\SAS_pants_bandit.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class SFM_SASPants_Renegat1: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\SAS_pants_rene.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class SFM_SASPants_Voen1: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\SAS_pants_mill.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class SFM_SASPants_Svoboda1: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Pants\data\SAS_pants_freedom.paa",
			"SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
};
