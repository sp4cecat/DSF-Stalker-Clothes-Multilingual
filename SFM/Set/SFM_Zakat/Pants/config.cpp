class CfgPatches
{
	class SFM_ZakatPants
	{
		units[]=
		{
			"SFM_ZakatPants1",
			"SFM_ZakatPants2",
			"SFM_ZakatPants_Naem1"
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
	class SFM_ZakatPants_Base: GorkaPants_Summer
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_ZakatPants_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_ZakatPants_Base1";
		model="SFM\Set\SFM_Zakat\Pants\SFM_Zakat_Pants_g.p3d";
		inventorySlot[]=
		{
			"Legs"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		absorbency=0.0099999998;
		heatIsolation=1;
		quickBarBonus=2;
		itemSize[]={4,3};
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Zakat\Pants\data\zakat_pants_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Zakat\Pants\data\zakat_pants_ca.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Zakat\Pants\SFM_Zakat_Pants.p3d";
			female="SFM\Set\SFM_Zakat\Pants\SFM_Zakat_Pants.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"SFM\Set\SFM_Zakat\Pants\data\zakat_pants_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Zakat\Pants\data\zakat_pants_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Zakat\Pants\data\zakat_pants_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Zakat\Pants\data\zakat_pants_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"SFM\Set\SFM_Zakat\Pants\data\zakat_pants_destruct.rvmat"
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
	class SFM_ZakatPants1: SFM_ZakatPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Zakat\Pants\data\zakat_pants_ca.paa"
		};
	};
	class SFM_ZakatPants2: SFM_ZakatPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Zakat\Pants\data\zakat_pants_2_ca.paa"
		};
	};
	class SFM_ZakatPants_Naem1: SFM_ZakatPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Zakat\Pants\data\zakat_pants_merc_ca.paa"
		};
	};
};
