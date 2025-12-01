class CfgPatches
{
	class SFM_ZakatJacket
	{
		units[]=
		{
			"SFM_ZakatJacket1",
			"SFM_ZakatJacket2",
			"SFM_ZakatJacket_Naem1"
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
	class SFM_ZakatJacket_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_ZakatJacket_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_ZakatJacket_Base1";
		model="SFM\Set\SFM_Zakat\Jacket\SFM_Zakat_Jacket_g.p3d";
		ContinuousActions[]={190};
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={4,3};
		absorbency=0.0099999998;
		heatIsolation=1;
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
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava_3holes"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_ca.paa",
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_belt_ca.paa",
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_hoods_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_ca.rvmat",
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_belt_ca.rvmat",
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_hoods_ca.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Zakat\Jacket\SFM_Zakat_Jacket.p3d";
			female="SFM\Set\SFM_Zakat\Jacket\SFM_Zakat_Jacket.p3d";
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
							1.1,
							
							{
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_ca.rvmat",
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_belt_ca.rvmat",
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_hoods_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_ca.rvmat",
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_belt_ca.rvmat",
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_hoods_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_damage.rvmat",
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_belt_damage.rvmat",
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_hoods_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_damage.rvmat",
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_belt_damage.rvmat",
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_hoods_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_destruct.rvmat",
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_belt_destruct.rvmat",
								"SFM\Set\SFM_Zakat\Jacket\data\zakat_hoods_destruct.rvmat"
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
	class SFM_ZakatJacket1: SFM_ZakatJacket_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_ca.paa",
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_belt_ca.paa",
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_hoods_ca.paa"
		};
	};
	class SFM_ZakatJacket2: SFM_ZakatJacket_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_2_ca.paa",
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_belt_ca.paa",
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_hoods_2_ca.paa"
		};
	};
	class SFM_ZakatJacket_Naem1: SFM_ZakatJacket_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_merc_ca.paa",
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_jacket_belt_ca.paa",
			"SFM\Set\SFM_Zakat\Jacket\data\zakat_hoods_merc_ca.paa"
		};
	};
};
