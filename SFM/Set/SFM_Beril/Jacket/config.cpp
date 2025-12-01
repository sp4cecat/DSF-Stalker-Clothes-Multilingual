class CfgPatches
{
	class SFM_BerilJacket
	{
		units[]=
		{
			"SFM_BerilJacket_Svoboda1",
			"SFM_BerilJacket_Voen1",
			"SFM_BerilJacket_Dolg1",
			"SFM_BerilJacket_Monolit1",
			"SFM_BerilJacket_Monolit2"
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
	class SFM_BerilJacket_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_BerilJacket_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_BerilJacket_Base1";
		model="SFM\Set\SFM_Beril\Jacket\SFM_BerilJacket_g.p3d";
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
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Jacket\data\Berill_shirt_stalker.paa",
			"SFM\Set\SFM_Beril\Jacket\data\knees_stalker.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Beril\Jacket\data\Berill_shirt.rvmat",
			"SFM\Set\SFM_Beril\Jacket\data\knees.rvmat"
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
								"SFM\Set\SFM_Beril\Jacket\data\Berill_shirt.rvmat",
								"SFM\Set\SFM_Beril\Jacket\data\knees.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Beril\Jacket\data\Berill_shirt.rvmat",
								"SFM\Set\SFM_Beril\Jacket\data\knees.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Beril\Jacket\data\Berill_shirt_damage.rvmat",
								"SFM\Set\SFM_Beril\Jacket\data\knees_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Beril\Jacket\data\Berill_shirt_damage.rvmat",
								"SFM\Set\SFM_Beril\Jacket\data\knees_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Beril\Jacket\data\Berill_shirt_destruct.rvmat",
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
		class ClothingTypes
		{
			male="SFM\Set\SFM_Beril\Jacket\SFM_BerilJacket.p3d";
			female="SFM\Set\SFM_Beril\Jacket\SFM_BerilJacket.p3d";
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
	class SFM_BerilJacket_Svoboda1: SFM_BerilJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Jacket\data\Berill_shirt_free.paa",
			"SFM\Set\SFM_Beril\Jacket\data\knees_free.paa"
		};
	};
	class SFM_BerilJacket_Voen1: SFM_BerilJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Jacket\data\Berill_shirt_mill.paa",
			"SFM\Set\SFM_Beril\Jacket\data\knees_mill.paa"
		};
	};
	class SFM_BerilJacket_Dolg1: SFM_BerilJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Jacket\data\Berill_shirt_dolg.paa",
			"SFM\Set\SFM_Beril\Jacket\data\knees_dolg.paa"
		};
	};
	class SFM_BerilJacket_Monolit1: SFM_BerilJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Jacket\data\Berill_shirt_mono_01.paa",
			"SFM\Set\SFM_Beril\Jacket\data\knees_mono.paa"
		};
	};
	class SFM_BerilJacket_Monolit2: SFM_BerilJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Jacket\data\Berill_shirt_mono_02.paa",
			"SFM\Set\SFM_Beril\Jacket\data\knees_mono.paa"
		};
	};
};
