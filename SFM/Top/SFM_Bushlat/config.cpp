class CfgPatches
{
	class SFM_Bushlat
	{
		units[]=
		{
			"SFM_Bushlat_old_1",
			"SFM_Bushlat_old_2",
			"SFM_Bushlat_old_3",
			"SFM_Bushlat_old_4",
			"SFM_Bushlat_old_5",
			"SFM_Bushlat_old_6"
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
	class SFM_Bushlat_ColorBase: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_Bushlat_ColorBase0";
		descriptionShort="$STR_CfgVehicles_SFM_Bushlat_ColorBase1";
		model="SFM\Top\SFM_Bushlat\SFM_Bushlat_g.p3d";
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
		quickBarBonus=2;
		absorbency=0.050000001;
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
			"SFM\Top\SFM_Bushlat\data\Bushlat_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Top\SFM_Bushlat\data\Bushlat_old_co.rvmat"
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
								"SFM\Top\SFM_Bushlat\data\Bushlat_old_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Top\SFM_Bushlat\data\Bushlat_old_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Top\SFM_Bushlat\data\Bushlat_old_co_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Top\SFM_Bushlat\data\Bushlat_old_co_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Top\SFM_Bushlat\data\Bushlat_old_co_destruct.rvmat"
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
			male="SFM\Top\SFM_Bushlat\SFM_Bushlat.p3d";
			female="SFM\Top\SFM_Bushlat\SFM_Bushlat.p3d";
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
	class SFM_Bushlat_old_1: SFM_Bushlat_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_Bushlat\data\Bushlat_old_co.paa"
		};
	};
	class SFM_Bushlat_old_2: SFM_Bushlat_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_Bushlat\data\Bushlat_old_co2.paa"
		};
	};
	class SFM_Bushlat_old_3: SFM_Bushlat_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_Bushlat\data\Bushlat_old_co3.paa"
		};
	};
	class SFM_Bushlat_old_4: SFM_Bushlat_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_Bushlat\data\Bushlat_old_co4.paa"
		};
	};
	class SFM_Bushlat_old_5: SFM_Bushlat_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_Bushlat\data\Bushlat_old_co5.paa"
		};
	};
	class SFM_Bushlat_old_6: SFM_Bushlat_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_Bushlat\data\Bushlat_old_co6.paa"
		};
	};
};
