class CfgPatches
{
	class SFM_ExoVest
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
			"SFM_ExoVestRazgruz",
			"SFM_ExoVestFull",
			"SFM_ExoVest",
			"SFM_ExoVestArm"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class HighCapacityVest_Black;
	class SFM_ExoVestUn_Base: HighCapacityVest_Black
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_ExoVestUn_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_ExoVestUn_Base1";
		model="SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestUn_g.p3d";
		attachments[]={};
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=2000;
		itemSize[]={4,4};
		itemsCargoSize[]={6,5};
		quickBarBonus=5;
		ragQuantity=4;
		absorbency=0;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		heatIsolation=1;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestUn.p3d";
			female="SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestUn.p3d";
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
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.30000001;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.30000001;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.30000001;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.30000001;
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
	class SFM_ExoVestRazgruz: SFM_ExoVestUn_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.paa"
		};
	};
	class SFM_ExoVestFull_Base: HighCapacityVest_Black
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_ExoVestFull_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_ExoVestFull_Base1";
		model="SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestFull_g.p3d";
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]={};
		weight=30000;
		itemSize[]={4,4};
		itemsCargoSize[]={6,5};
		quickBarBonus=5;
		ragQuantity=4;
		absorbency=0;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		heatIsolation=1;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.paa",
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat",
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestFull.p3d";
			female="SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestFull.p3d";
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
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_destruct.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.090000004;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.1;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.1;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.1;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.1;
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
	class SFM_ExoVestFull: SFM_ExoVestFull_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.paa",
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.paa"
		};
	};
	class SFM_ExoVest_Base: HighCapacityVest_Black
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_ExoVest_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_ExoVest_Base1";
		model="SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVest_g.p3d";
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]={};
		weight=30000;
		itemSize[]={4,4};
		itemsCargoSize[]={0,0};
		quickBarBonus=2;
		ragQuantity=4;
		absorbency=0;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		heatIsolation=1;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVest.p3d";
			female="SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVest.p3d";
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
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.12;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.15000001;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.1;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.1;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.1;
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
	class SFM_ExoVest: SFM_ExoVest_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.paa"
		};
	};
	class SFM_ExoVestArm_Base: HighCapacityVest_Black
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_ExoVestArm_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_ExoVestArm_Base1";
		model="SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestArm_g.p3d";
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]={};
		weight=30000;
		itemSize[]={4,4};
		itemsCargoSize[]={0,0};
		quickBarBonus=2;
		ragQuantity=4;
		absorbency=0;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		heatIsolation=1;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.paa",
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat",
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_ca.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestArm.p3d";
			female="SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestArm.p3d";
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
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_destruct.rvmat",
								"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.090000004;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.1;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.1;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.1;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.1;
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
	class SFM_ExoVestArm: SFM_ExoVestArm_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.paa",
			"SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_ca.paa"
		};
	};
};
