class CfgPatches
{
	class SFM_CS3AJacket
	{
		units[]=
		{
			"SFM_CS3AJacket",
			"SFM_CS3AJacket_Stalker1",
			"SFM_CS3AJacket_Stalker2",
			"SFM_CS3AJacket_Stalker3",
			"SFM_CS3AJacket_Renegat1",
			"SFM_CS3AJacket_Monolit1",
			"SFM_CS3AJacket_Monolit2",
			"SFM_CS3AJacket_Bandit1",
			"SFM_CS3AJacket_Svoboda1"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"dz_data",
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class GorkaEJacket_Flat;
	class SFM_CS3AJacket: GorkaEJacket_Flat
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_CS3AJacket0";
		descriptionShort="$STR_CfgVehicles_SFM_CS3AJacket1";
		model="SFM\Set\SFM_CS3A\Jacket\SFM_CS3AJacket_g.p3d";
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
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava_3holes"
		};
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
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_cs_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_cs_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_co.rvmat",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_CS3A\Jacket\SFM_CS3AJacket.p3d";
			female="SFM\Set\SFM_CS3A\Jacket\SFM_CS3AJacket.p3d";
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
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_co.rvmat",
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_co.rvmat",
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_damage.rvmat",
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_damage.rvmat",
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_destruct.rvmat",
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_destruct.rvmat"
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
	class SFM_CS3AJacket_Stalker1: SFM_CS3AJacket
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_stalker_01_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_stalker_01_co.paa"
		};
	};
	class SFM_CS3AJacket_Stalker2: SFM_CS3AJacket
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_stalker_02_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_stalker_02_co.paa"
		};
	};
	class SFM_CS3AJacket_Stalker3: SFM_CS3AJacket
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_stalker_03_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_stalker_03_co.paa"
		};
	};
	class SFM_CS3AJacket_Renegat1: SFM_CS3AJacket
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_renegade_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_renegade_co.paa"
		};
	};
	class SFM_CS3AJacket_Monolit1: SFM_CS3AJacket
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_mono_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_mono_01_co.paa"
		};
	};
	class SFM_CS3AJacket_Monolit2: SFM_CS3AJacket
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_mono_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_mono_02_co.paa"
		};
	};
	class SFM_CS3AJacket_Bandit1: SFM_CS3AJacket
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_bandit_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_bandit_co.paa"
		};
	};
	class SFM_CS3AJacket_Svoboda1: SFM_CS3AJacket
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_free_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_free_co.paa"
		};
	};
};
