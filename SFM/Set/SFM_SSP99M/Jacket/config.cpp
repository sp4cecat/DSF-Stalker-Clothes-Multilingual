class CfgPatches
{
	class SFM_SSP99M_Jacket
	{
		units[]=
		{
			"SFM_SSP99M_Jacket_V1_Red",
			"SFM_SSP99M_Jacket_V2_Green"
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
			"DZ_Characters_Vests",
			"DZ_Weapons_Magazines"
		};
	};
};
class CfgVehicles
{
	class GorkaEJacket_Flat;
	class SFM_SSP99M_Jacket_V1_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SSP99M_Jacket_V1_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SSP99M_Jacket_V1_Base1";
		model="SFM\Set\SFM_SSP99M\Jacket\SSP99M_Jacket_V1_g.p3d";
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
			"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_01_co.paa",
			"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_01_co.rvmat",
			"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_SSP99M\Jacket\SSP99M_Jacket_V1.p3d";
			female="SFM\Set\SFM_SSP99M\Jacket\SSP99M_Jacket_V1.p3d";
		};
		class Protection
		{
			biological=1;
			chemical=1;
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
								"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_01_co.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_01_co.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_01_damage.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_01_damage.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_01_destruct.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_destruct.rvmat"
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
	class SFM_SSP99M_Jacket_V1_Red: SFM_SSP99M_Jacket_V1_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_01_co.paa",
			"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_co.paa"
		};
	};
	class SFM_SSP99M_Jacket_V2_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SSP99M_Jacket_V2_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SSP99M_Jacket_V2_Base1";
		model="SFM\Set\SFM_SSP99M\Jacket\SSP99M_Jacket_V2_g.p3d";
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
		itemsCargoSize[]={4,2};
		simpleHiddenSelections[]=
		{
			"unhidehood",
			"hidehood"
		};
		conflictedSlots[]=
		{
			"Headgear"
		};
		NoSlots[]=
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
			"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_02_co.paa",
			"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_green.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_02_co.rvmat",
			"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_SSP99M\Jacket\SSP99M_Jacket_V2.p3d";
			female="SFM\Set\SFM_SSP99M\Jacket\SSP99M_Jacket_V2.p3d";
		};
		class Protection
		{
			biological=1;
			chemical=1;
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
								"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_02_co.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_02_co.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_02_damage.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_02_damage.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_02_destruct.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_destruct.rvmat"
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
	class SFM_SSP99M_Jacket_V2_Green: SFM_SSP99M_Jacket_V2_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SSP99M\Jacket\data\SSP_jacket_02_co.paa",
			"SFM\Set\SFM_SSP99M\Glass\data\SSP_hood_green.paa"
		};
	};
};
