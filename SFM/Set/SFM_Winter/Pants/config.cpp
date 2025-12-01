class CfgPatches
{
	class SFM_WinterPants
	{
		units[]=
		{
			"SFM_WinterPants_1",
			"SFM_WinterPants_2",
			"SFM_WinterPants_3",
			"SFM_WinterPants_4",
			"SFM_WinterPants_CS1",
			"SFM_WinterPants_Svoboda1",
			"SFM_WinterPants_Naem1",
			"SFM_WinterPants_Monolit1",
			"SFM_WinterPants_Neitral1",
			"SFM_WinterPants_Voen1"
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
	class GorkaPants_Summer;
	class SFM_WinterPants_Base: GorkaPants_Summer
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_WinterPants_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_WinterPants_Base1";
		model="SFM\Set\SFM_Winter\Pants\SFM_WinterPants_g.p3d";
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
		itemSize[]={3,3};
		weight=530;
		ragQuantity=3;
		absorbency=0.60000002;
		heatIsolation=0.89999998;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Pants\data\winter_pants_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Winter\Pants\data\winter_pants_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Winter\Pants\SFM_WinterPants.p3d";
			female="SFM\Set\SFM_Winter\Pants\SFM_WinterPants.p3d";
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
								"SFM\Set\SFM_Winter\Pants\data\winter_pants_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Winter\Pants\data\winter_pants_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Winter\Pants\data\winter_pants_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Winter\Pants\data\winter_pants_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Winter\Pants\data\winter_pants_destruct.rvmat"
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
	class SFM_WinterPants_1: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Pants\data\winter_pants_co.paa"
		};
	};
	class SFM_WinterPants_2: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Pants\data\winter_pants_co2.paa"
		};
	};
	class SFM_WinterPants_3: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Pants\data\winter_pants_co3.paa"
		};
	};
	class SFM_WinterPants_4: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Pants\data\winter_pants_co4.paa"
		};
	};
	class SFM_WinterPants_CS1: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Pants\data\winter_pants_clear.paa"
		};
	};
	class SFM_WinterPants_Svoboda1: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Pants\data\winter_pants_free.paa"
		};
	};
	class SFM_WinterPants_Naem1: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Pants\data\winter_pants_merc.paa"
		};
	};
	class SFM_WinterPants_Monolit1: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Pants\data\winter_pants_monolit.paa"
		};
	};
	class SFM_WinterPants_Neitral1: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Pants\data\winter_pants_neutral.paa"
		};
	};
	class SFM_WinterPants_Voen1: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Winter\Pants\data\winter_pants_voen.paa"
		};
	};
};
