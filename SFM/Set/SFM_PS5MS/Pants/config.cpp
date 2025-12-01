class CfgPatches
{
	class SFM_PS5MS_Pants
	{
		units[]=
		{
			"SFM_PS5MS_Pants_CS1",
			"SFM_PS5MS_Pants_Dolg1",
			"SFM_PS5MS_Pants_Svoboda1",
			"SFM_PS5MS_Pants_Naem1",
			"SFM_PS5MS_Pants_Naem21",
			"SFM_PS5MS_Pants_Monolit1",
			"SFM_PS5MS_Pants_Neitral1",
			"SFM_PS5MS_Pants_Voen1",
			"SFM_PS5MS_Pants_Bandit1"
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
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class GorkaPants_Summer;
	class SFM_PS5MS_Pants_Base: GorkaPants_Summer
	{
		displayName="$STR_CfgVehicles_SFM_PS5MS_Pants_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_PS5MS_Pants_Base1";
		model="SFM\Set\SFM_PS5MS\Pants\SFM_Pants_g.p3d";
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
		weight=530;
		ragQuantity=3;
		absorbency=0.2;
		heatIsolation=0.80000001;
		quickBarBonus=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Pants\data\Pants_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_PS5MS\Pants\data\Pants_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_PS5MS\Pants\SFM_Pants.p3d";
			female="SFM\Set\SFM_PS5MS\Pants\SFM_Pants.p3d";
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
								"SFM\Set\SFM_PS5MS\Pants\data\Pants_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_PS5MS\Pants\data\Pants_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_PS5MS\Pants\data\Pants_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_PS5MS\Pants\data\Pants_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_PS5MS\Pants\data\Pants_destruct.rvmat"
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
	class SFM_PS5MS_Pants_CS1: SFM_PS5MS_Pants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Pants\data\Pants_clear.paa"
		};
	};
	class SFM_PS5MS_Pants_Dolg1: SFM_PS5MS_Pants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Pants\data\Pants_Dolg.paa"
		};
	};
	class SFM_PS5MS_Pants_Svoboda1: SFM_PS5MS_Pants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Pants\data\Pants_free.paa"
		};
	};
	class SFM_PS5MS_Pants_Naem1: SFM_PS5MS_Pants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Pants\data\Pants_merc.paa"
		};
	};
	class SFM_PS5MS_Pants_Naem21: SFM_PS5MS_Pants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Pants\data\Pants_merc_02.paa"
		};
	};
	class SFM_PS5MS_Pants_Monolit1: SFM_PS5MS_Pants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Pants\data\Pants_monolit.paa"
		};
	};
	class SFM_PS5MS_Pants_Neitral1: SFM_PS5MS_Pants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Pants\data\Pants_neutral.paa"
		};
	};
	class SFM_PS5MS_Pants_Voen1: SFM_PS5MS_Pants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Pants\data\Pants_Mill.paa"
		};
	};
	class SFM_PS5MS_Pants_Bandit1: SFM_PS5MS_Pants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Pants\data\Pants_Bandit.paa"
		};
	};
};
