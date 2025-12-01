class CfgPatches
{
	class SFM_ExoBelt
	{
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
		units[]=
		{
			"SFM_ExoBelt",
			"SFM_ExoBattery",
			"SFM_ExoBattery1",
			"SFM_ExoBackPack"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class CivilianBelt;
	class SFM_ExoBelt_Base: CivilianBelt
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_ExoBelt_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_ExoBelt_Base1";
		model="SFM\Set\SFM_Exoskelet\Belts\SFM_ExoBelt_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot="Hips";
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		attachments[]=
		{
			"ExoAcc"
		};
		itemSize[]={4,2};
		itemsCargoSize[]={10,1};
		weight=1500;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		repairableWithKits[]={};
		repairCosts[]={};
		simpleHiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_ca.paa",
			"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.paa",
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_ca.rvmat",
			"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat",
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_ca.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_destruct.rvmat",
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_destruct.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Exoskelet\Belts\SFM_ExoBelt.p3d";
			female="SFM\Set\SFM_Exoskelet\Belts\SFM_ExoBelt.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SFM_ExoBelt: SFM_ExoBelt_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_ca.paa",
			"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.paa"
		};
	};
	class Inventory_Base;
	class SFM_ExoBattery: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_ExoBattery0";
		descriptionShort="$STR_CfgVehicles_SFM_ExoBattery1";
		model="SFM\Set\SFM_Exoskelet\Attach\Exo_Acc_02_01.p3d";
		inventorySlot[]=
		{
			"ExoBattery",
			"ExoBattery2"
		};
		weight=1000;
		itemSize[]={1,2};
		quantityBar=1;
		stackedUnit="percentage";
		varQuantityInit=8000;
		varQuantityMin=0;
		varQuantityMax=8000;
		varQuantityDestroyOnMin=0;
		rotationFlags=17;
		itemBehaviour=1;
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
							1,
							
							{
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SFM_ExoBattery1: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_ExoBattery10";
		descriptionShort="$STR_CfgVehicles_SFM_ExoBattery11";
		model="SFM\Set\SFM_Exoskelet\Attach\exo_acc_01.p3d";
		inventorySlot[]=
		{
			"ExoAcc"
		};
		weight=1000;
		itemSize[]={1,2};
		quantityBar=1;
		stackedUnit="percentage";
		varQuantityInit=8000;
		varQuantityMin=0;
		varQuantityMax=8000;
		varQuantityDestroyOnMin=0;
		rotationFlags=17;
		itemBehaviour=1;
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
							1,
							
							{
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SFM_ExoBackPack: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_ExoBackPack0";
		descriptionShort="$STR_CfgVehicles_SFM_ExoBackPack1";
		model="SFM\Set\SFM_Exoskelet\Attach\ExoAttBag.p3d";
		inventorySlot[]=
		{
			"ExoBackpack"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_ca.paa",
			"SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_skelet_ca.paa"
		};
		weight=5000;
		itemSize[]={5,9};
		itemsCargoSize[]={7,11};
		rotationFlags=17;
		itemBehaviour=1;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=800;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
