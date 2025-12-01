class CfgPatches
{
	class SFM_WinterSet
	{
		units[]=
		{
			"SFM_WinterJacket_1",
			"SFM_WinterJacket_2",
			"SFM_WinterJacket_3",
			"SFM_WinterJacket_4",
			"SFM_WinterJacket_CS1",
			"SFM_WinterJacket_Svoboda1",
			"SFM_WinterJacket_Naem1",
			"SFM_WinterJacket_Monolit1",
			"SFM_WinterJacket_Neitral1",
			"SFM_WinterJacket_Voen1",
			"SFM_WinterJacket_air"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Tops",
			"DZ_Characters_Pants"
		};
	};
};
class CfgVehicles
{
	class GorkaEJacket_Flat;
	class SFM_WinterJacket_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_WinterJacket_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_WinterJacket_Base1";
		model="SFM\Set\SFM_Winter\Jacket\SFM_WinterJacket_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={3,3};
		quickBarBonus=2;
		absorbency=0.050000001;
		heatIsolation=0.89999998;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co.rvmat"
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
								"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_destruct.rvmat"
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
			male="SFM\Set\SFM_Winter\Jacket\SFM_WinterJacket.p3d";
			female="SFM\Set\SFM_Winter\Jacket\SFM_WinterJacket.p3d";
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
	class SFM_WinterJacket_1: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co.paa"
		};
	};
	class SFM_WinterJacket_2: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co2.paa"
		};
	};
	class SFM_WinterJacket_3: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co3.paa"
		};
	};
	class SFM_WinterJacket_4: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co4.paa"
		};
	};
	class SFM_WinterJacket_CS1: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_clear.paa"
		};
	};
	class SFM_WinterJacket_Svoboda1: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_free.paa"
		};
	};
	class SFM_WinterJacket_Naem1: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_merc.paa"
		};
	};
	class SFM_WinterJacket_Monolit1: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_monolit.paa"
		};
	};
	class SFM_WinterJacket_Neitral1: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_neutral.paa"
		};
	};
	class SFM_WinterJacket_Voen1: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_voen.paa"
		};
	};
	class SFM_WinterJacket_air: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Jacket\data\winter_jacket_voen_air.paa"
		};
	};
};
