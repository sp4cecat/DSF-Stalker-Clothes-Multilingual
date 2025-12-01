class CfgPatches
{
	class SFM_StalkerJacket
	{
		units[]=
		{
			"SFM_StalkerJacket1",
			"SFM_StalkerJacket2"
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
	class SFM_StalkerJacket_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_StalkerJacket_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_StalkerJacket_Base1";
		model="SFM\Top\SFM_StalkerJacket\SFM_StalkerJacket_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
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
			"camo1",
			"camo2"
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
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_StalkerJacket\data\jacket_novice_co.paa",
			"SFM\Top\SFM_StalkerJacket\data\jacket_novice_co2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Top\SFM_StalkerJacket\data\jacket_novice_co.rvmat",
			"SFM\Top\SFM_StalkerJacket\data\jacket_novice_co2.rvmat"
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
								"SFM\Top\SFM_StalkerJacket\data\jacket_novice_co.rvmat",
								"SFM\Top\SFM_StalkerJacket\data\jacket_novice_co2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Top\SFM_StalkerJacket\data\jacket_novice_co.rvmat",
								"SFM\Top\SFM_StalkerJacket\data\jacket_novice_co2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Top\SFM_StalkerJacket\data\Jacket_Novice_co_damage.rvmat",
								"SFM\Top\SFM_StalkerJacket\data\Jacket_Novice_co2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Top\SFM_StalkerJacket\data\Jacket_Novice_co_damage.rvmat",
								"SFM\Top\SFM_StalkerJacket\data\Jacket_Novice_co2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Top\SFM_StalkerJacket\data\Jacket_Novice_co_destruct.rvmat",
								"SFM\Top\SFM_StalkerJacket\data\Jacket_Novice_co2_destruct.rvmat"
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
			male="SFM\Top\SFM_StalkerJacket\SFM_StalkerJacket.p3d";
			female="SFM\Top\SFM_StalkerJacket\SFM_StalkerJacket.p3d";
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
	class SFM_StalkerJacket1: SFM_StalkerJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_StalkerJacket\data\jacket_novice_co.paa",
			"SFM\Top\SFM_StalkerJacket\data\jacket_novice_co2.paa"
		};
	};
	class SFM_StalkerJacket2: SFM_StalkerJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_StalkerJacket\data\Jacket_Novice_black.paa",
			"SFM\Top\SFM_StalkerJacket\data\jacket_novice_co2.paa"
		};
	};
};
