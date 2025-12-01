class CfgPatches
{
	class SFM_WFJacket
	{
		units[]=
		{
			"SFM_WFJacket_Stalker1",
			"SFM_WFJacket_Svoboda1",
			"SFM_WFJacket_Naem1",
			"SFM_WFJacket_Naem2",
			"SFM_WFJacket_Monolit1",
			"SFM_WFJacket_Monolit2"
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
	class GorkaEJacket_Flat;
	class SFM_WFJacket_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_WFJacket_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_WFJacket_Base1";
		model="SFM\Set\SFM_WindFreedom\Jacket\SFM_WFJacket_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={4,3};
		absorbency=0.2;
		heatIsolation=0.80000001;
		quickBarBonus=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		simpleHiddenSelections[]=
		{
			"unhidehood",
			"hidehood"
		};
		conflictedSlots[]=
		{
			"Headgear"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_co.rvmat",
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_co.rvmat",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.rvmat"
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
								"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_co.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_co.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_co.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_co.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_damage.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_damage.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\knees_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_damage.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_damage.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\knees_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_destruct.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_destruct.rvmat",
								"SFM\Set\SFM_WindFreedom\Jacket\data\knees_destrcut.rvmat"
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
		class ClothingTypes
		{
			male="SFM\Set\SFM_WindFreedom\Jacket\SFM_WFJacket.p3d";
			female="SFM\Set\SFM_WindFreedom\Jacket\SFM_WFJacket.p3d";
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
	class SFM_WFJacket_Stalker1: SFM_WFJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.paa"
		};
	};
	class SFM_WFJacket_Svoboda1: SFM_WFJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_free_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_free_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_free_co.paa"
		};
	};
	class SFM_WFJacket_Naem1: SFM_WFJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_merc_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_merc_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_merc_co.paa"
		};
	};
	class SFM_WFJacket_Naem2: SFM_WFJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_merc_02_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_merc_02_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_merc_co.paa"
		};
	};
	class SFM_WFJacket_Monolit1: SFM_WFJacket_Base
	{
		scope=2;
		visibilityModifier=0.1;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_monolith_01_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_monolith_01_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_monolith_co.paa"
		};
	};
	class SFM_WFJacket_Monolit2: SFM_WFJacket_Base
	{
		scope=2;
		visibilityModifier=0.1;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_monolith_02_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_monolith_02_co.paa",
			"SFM\Set\SFM_WindFreedom\Jacket\data\knees_monolith_co.paa"
		};
	};
};
