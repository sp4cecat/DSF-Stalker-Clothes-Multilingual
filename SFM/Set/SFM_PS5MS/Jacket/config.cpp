class CfgPatches
{
	class SFM_PS5MS_Jacket
	{
		units[]=
		{
			"SFM_PS5MS_Jacket_CS1",
			"SFM_PS5MS_Jacket_Dolg1",
			"SFM_PS5MS_Jacket_Svoboda1",
			"SFM_PS5MS_Jacket_Naem1",
			"SFM_PS5MS_Jacket_Monolit1",
			"SFM_PS5MS_Jacket_Neitral1",
			"SFM_PS5MS_Jacket_Voen1",
			"SFM_PS5MS_Jacket_Bandit1"
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
	class GorkaEJacket_Flat;
	class SFM_PS5MS_Jacket_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_PS5MS_Jacket_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_PS5MS_Jacket_Base1";
		model="SFM\Set\SFM_PS5MS\Jacket\SFM_Jacket_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={4,3};
		ragQuantity=3;
		absorbency=0.2;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_co.rvmat"
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
								"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_destruct.rvmat"
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
			male="SFM\Set\SFM_PS5MS\Jacket\SFM_Jacket.p3d";
			female="SFM\Set\SFM_PS5MS\Jacket\SFM_Jacket.p3d";
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
	class SFM_PS5MS_Jacket_CS1: SFM_PS5MS_Jacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_clear.paa"
		};
	};
	class SFM_PS5MS_Jacket_Dolg1: SFM_PS5MS_Jacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_Dolg.paa"
		};
	};
	class SFM_PS5MS_Jacket_Svoboda1: SFM_PS5MS_Jacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_free.paa"
		};
	};
	class SFM_PS5MS_Jacket_Naem1: SFM_PS5MS_Jacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_merc.paa"
		};
	};
	class SFM_PS5MS_Jacket_Monolit1: SFM_PS5MS_Jacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_monolit.paa"
		};
	};
	class SFM_PS5MS_Jacket_Neitral1: SFM_PS5MS_Jacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_neutral.paa"
		};
	};
	class SFM_PS5MS_Jacket_Voen1: SFM_PS5MS_Jacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_Mill.paa"
		};
	};
	class SFM_PS5MS_Jacket_Bandit1: SFM_PS5MS_Jacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5MS\Jacket\data\Jacket_Bandit.paa"
		};
	};
};
