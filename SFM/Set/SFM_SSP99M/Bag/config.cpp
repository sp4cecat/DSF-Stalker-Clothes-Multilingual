class CfgPatches
{
	class SFM_SSP99M_Back
	{
		units[]=
		{
			"SFM_SSP99M_Back_Red",
			"SFM_SSP99M_Back_Green"
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
	class TaloonBag_ColorBase;
	class SFM_SSP99M_Back_Red: TaloonBag_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SSP99M_Back_Red0";
		descriptionShort="$STR_CfgVehicles_SFM_SSP99M_Back_Red1";
		model="SFM\Set\SFM_SSP99M\Bag\SSP99M_Bag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		simulation="clothing";
		attachments[]={};
		rotationFlags=64;
		weight=8000;
		itemSize[]={6,8};
		itemsCargoSize[]={7,9};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		varQuantityInit=3000;
		varQuantityMax=3000;
		varQuantityMin=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		simpleHiddenSelections[]=
		{
			"unhidetube",
			"hidetube"
		};
		conflictedSlots[]=
		{
			"Mask"
		};
		conflictedTypes[]=
		{
			"SFM_gm_t1_SSP99M_Set_Glass"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_co.paa",
			"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_co.rvmat",
			"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_SSP99M\Bag\SSP99M_Bag.p3d";
			female="SFM\Set\SFM_SSP99M\Bag\SSP99M_Bag.p3d";
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
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_co.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_co.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_damage.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_damage.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_destruct.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class SFM_SSP99M_Back_Green: TaloonBag_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SSP99M_Back_Green0";
		descriptionShort="$STR_CfgVehicles_SFM_SSP99M_Back_Green1";
		model="SFM\Set\SFM_SSP99M\Bag\SSP99M_Bag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		simulation="clothing";
		attachments[]={};
		rotationFlags=64;
		weight=8000;
		itemSize[]={7,10};
		itemsCargoSize[]={7,9};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		varQuantityInit=3000;
		varQuantityMax=3000;
		varQuantityMin=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		stackedUnit="percentage";
		conflictedSlots[]=
		{
			"Mask"
		};
		conflictedTypes[]=
		{
			"SFM_gm_t1_SSP99M_Set_Glass"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_green.paa",
			"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_co.rvmat",
			"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_SSP99M\Bag\SSP99M_Bag.p3d";
			female="SFM\Set\SFM_SSP99M\Bag\SSP99M_Bag.p3d";
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
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_co.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_co.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_damage.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_damage.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_SSP99M\Bag\data\SSP99_backpack_destruct.rvmat",
								"SFM\Set\SFM_SSP99M\Glass\data\SSP_visor_belt_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
};
