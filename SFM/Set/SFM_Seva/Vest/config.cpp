class CfgPatches
{
	class SFM_SevaVest
	{
		units[]=
		{
			"SFM_SevaVestFull",
			"SFM_SevaVestFull_Stalker1",
			"SFM_SevaVestFull_Dolg1",
			"SFM_SevaVestFull_Svoboda1",
			"SFM_SevaVestFull_CS1",
			"SFM_SevaVestFull_Naem1",
			"SFM_SevaVestV2",
			"SFM_SevaVestV2_Stalker1",
			"SFM_SevaVestV2_Dolg1",
			"SFM_SevaVestV2_Svoboda1",
			"SFM_SevaVestV2_CS1",
			"SFM_SevaVestV2_Naem1",
			"SFM_SevaVestV1",
			"SFM_SevaVestV1_Stalker1",
			"SFM_SevaVestV1_Dolg1",
			"SFM_SevaVestV1_Svoboda1",
			"SFM_SevaVestV1_CS1",
			"SFM_SevaVestV1_Naem1",
			"SFM_SevaVest3",
			"SFM_SevaVest3_Stalker1",
			"SFM_SevaVest3_Dolg1",
			"SFM_SevaVest3_Svoboda1",
			"SFM_SevaVest3_CS1",
			"SFM_SevaVest3_Naem1"
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
			"DZ_Weapons_Magazines",
			"SFM"
		};
	};
};
class CfgVehicles
{
	class PlateCarrierVest;
	class SFM_SevaVestFull_Base: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SevaVestFull_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaVestFull_Base1";
		model="SFM\Set\SFM_Seva\Vest\SFM_SevaVestFull_g.p3d";
		attachments[]={};
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=1000;
		itemSize[]={2,2};
		itemsCargoSize[]={5,8};
		quickBarBonus=5;
		ragQuantity=4;
		absorbency=0;
		heatIsolation=1;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="HeavyJacket";
		simpleHiddenSelections[]=
		{
			"unhidehood",
			"hidehood"
		};
		conflictedSlots[]=
		{
			"Headgear"
		};
		noVest=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\Vest\SFM_SevaVestFull.p3d";
			female="SFM\Set\SFM_Seva\Vest\SFM_SevaVestFull.p3d";
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
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_VestPlate_destruct.rvmat"
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
						damage=0.23;
					};
					class Blood
					{
						damage=0.33000001;
					};
					class Shock
					{
						damage=0.23;
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
						damage=0.15000001;
					};
					class Shock
					{
						damage=0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.1;
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
						damage=0.2;
					};
					class Shock
					{
						damage=0.2;
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
	class SFM_SevaVestFull: SFM_SevaVestFull_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_RPS_Dark_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_VestPlate_Dark_co.paa"
		};
	};
	class SFM_SevaVestFull_Stalker1: SFM_SevaVestFull_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestFull_Dolg1: SFM_SevaVestFull_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_dolg.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestFull_Svoboda1: SFM_SevaVestFull_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_free.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestFull_CS1: SFM_SevaVestFull_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_clear.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestFull_Naem1: SFM_SevaVestFull_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_merc.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestV2_Base: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SevaVestV2_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaVestV2_Base1";
		model="SFM\Set\SFM_Seva\Vest\SFM_SevaVest2_g.p3d";
		attachments[]={};
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=1000;
		itemSize[]={3,3};
		itemsCargoSize[]={5,4};
		quickBarBonus=5;
		ragQuantity=4;
		absorbency=0;
		heatIsolation=1;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="HeavyJacket";
		simpleHiddenSelections[]=
		{
			"unhidehood",
			"hidehood"
		};
		conflictedSlots[]=
		{
			"Headgear"
		};
		noVest=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\Vest\SFM_SevaVest2.p3d";
			female="SFM\Set\SFM_Seva\Vest\SFM_SevaVest2.p3d";
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
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_VestPlate_destruct.rvmat"
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
						damage=0.23;
					};
					class Blood
					{
						damage=0.33000001;
					};
					class Shock
					{
						damage=0.23;
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
						damage=0.15000001;
					};
					class Shock
					{
						damage=0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.1;
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
						damage=0.2;
					};
					class Shock
					{
						damage=0.2;
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
	class SFM_SevaVestV2: SFM_SevaVestV2_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_RPS_Dark_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_VestPlate_Dark_co.paa"
		};
	};
	class SFM_SevaVestV2_Stalker1: SFM_SevaVestV2_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestV2_Dolg1: SFM_SevaVestV2_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_dolg.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestV2_Svoboda1: SFM_SevaVestV2_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_free.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestV2_CS1: SFM_SevaVestV2_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_clear.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestV2_Naem1: SFM_SevaVestV2_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_merc.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestV1_Base: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SevaVestV1_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaVestV1_Base1";
		model="SFM\Set\SFM_Seva\Vest\SFM_SevaVest1_g.p3d";
		attachments[]={};
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=1000;
		itemSize[]={3,3};
		itemsCargoSize[]={5,2};
		quickBarBonus=5;
		ragQuantity=4;
		absorbency=0;
		heatIsolation=1;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="HeavyJacket";
		simpleHiddenSelections[]=
		{
			"unhidehood",
			"hidehood"
		};
		conflictedSlots[]=
		{
			"Headgear"
		};
		noVest=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\Vest\SFM_SevaVest1.p3d";
			female="SFM\Set\SFM_Seva\Vest\SFM_SevaVest1.p3d";
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
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_VestPlate_destruct.rvmat"
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
						damage=0.23;
					};
					class Blood
					{
						damage=0.33000001;
					};
					class Shock
					{
						damage=0.23;
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
						damage=0.15000001;
					};
					class Shock
					{
						damage=0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.1;
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
						damage=0.2;
					};
					class Shock
					{
						damage=0.2;
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
	class SFM_SevaVestV1: SFM_SevaVestV1_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_RPS_Dark_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_VestPlate_Dark_co.paa"
		};
	};
	class SFM_SevaVestV1_Stalker1: SFM_SevaVestV1_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestV1_Dolg1: SFM_SevaVestV1_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_dolg.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestV1_Svoboda1: SFM_SevaVestV1_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_free.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestV1_CS1: SFM_SevaVestV1_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_clear.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVestV1_Naem1: SFM_SevaVestV1_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_merc.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVest3_Base: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SevaVest3_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaVest3_Base1";
		model="SFM\Set\SFM_Seva\Vest\SFM_SevaVest3_g.p3d";
		attachments[]={};
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=1000;
		itemSize[]={3,3};
		itemsCargoSize[]={5,4};
		quickBarBonus=5;
		ragQuantity=4;
		absorbency=0;
		heatIsolation=1;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="HeavyJacket";
		simpleHiddenSelections[]=
		{
			"unhidehood",
			"hidehood"
		};
		conflictedSlots[]=
		{
			"Headgear"
		};
		noVest=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\Vest\SFM_SevaVest3.p3d";
			female="SFM\Set\SFM_Seva\Vest\SFM_SevaVest3.p3d";
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
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Seva\Vest\data\seva_vest_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_VestPlate_destruct.rvmat"
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
						damage=0.23;
					};
					class Blood
					{
						damage=0.33000001;
					};
					class Shock
					{
						damage=0.23;
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
						damage=0.15000001;
					};
					class Shock
					{
						damage=0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.1;
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
						damage=0.2;
					};
					class Shock
					{
						damage=0.2;
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
	class SFM_SevaVest3: SFM_SevaVest3_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_RPS_Dark_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_VestPlate_Dark_co.paa"
		};
	};
	class SFM_SevaVest3_Stalker1: SFM_SevaVest3_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_ca.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVest3_Dolg1: SFM_SevaVest3_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_dolg.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVest3_Svoboda1: SFM_SevaVest3_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_free.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVest3_CS1: SFM_SevaVest3_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_clear.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
	class SFM_SevaVest3_Naem1: SFM_SevaVest3_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Vest\data\seva_vest_merc.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co2.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co2.paa"
		};
	};
};
