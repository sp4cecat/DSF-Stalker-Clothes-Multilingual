class CfgPatches
{
	class SFM_SunriseVest
	{
		units[]=
		{
			"SFM_SunriseVestFull_1",
			"SFM_SunriseVestFull_2",
			"SFM_SunriseVestFull_3",
			"SFM_SunriseVestFull_4",
			"SFM_SunriseVest1_1",
			"SFM_SunriseVest1_2",
			"SFM_SunriseVest1_3",
			"SFM_SunriseVest1_4",
			"SFM_SunriseVest2_1",
			"SFM_SunriseVest2_2",
			"SFM_SunriseVest2_3",
			"SFM_SunriseVest2_4",
			"SFM_SunriseVest3_1",
			"SFM_SunriseVest3_2",
			"SFM_SunriseVest3_3",
			"SFM_SunriseVest3_4"
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
	class PlateCarrierVest;
	class SFM_SunriseVestFull_Base: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SunriseVestFull_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SunriseVestFull_Base1";
		model="SFM\Set\SFM_Sunrise\Vest\SFM_SunriseVestFull_g.p3d";
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
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Sunrise\Vest\SFM_SunriseVestFull.p3d";
			female="SFM\Set\SFM_Sunrise\Vest\SFM_SunriseVestFull.p3d";
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
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_destruct.rvmat",
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
	class SFM_SunriseVestFull_1: SFM_SunriseVestFull_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVestFull_2: SFM_SunriseVestFull_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_gray_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVestFull_3: SFM_SunriseVestFull_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_brown_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVestFull_4: SFM_SunriseVestFull_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVest1_Base: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SunriseVest1_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SunriseVest1_Base1";
		model="SFM\Set\SFM_Sunrise\Vest\SFM_SunriseVest1_g.p3d";
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
		itemsCargoSize[]={0,0};
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
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Sunrise\Vest\SFM_SunriseVest1.p3d";
			female="SFM\Set\SFM_Sunrise\Vest\SFM_SunriseVest1.p3d";
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
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_destruct.rvmat",
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
	class SFM_SunriseVest1_1: SFM_SunriseVest1_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		KTSwitchInto="dzrp_SunriseM1_Set_Vest_V1_Universal";
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVest1_2: SFM_SunriseVest1_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		KTSwitchInto="dzrp_SunriseM1_Set_Vest_V1_Universal";
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_gray_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVest1_3: SFM_SunriseVest1_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		KTSwitchInto="dzrp_SunriseM1_Set_Vest_V1_Universal";
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_brown_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVest1_4: SFM_SunriseVest1_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SunriseVest1_40";
		descriptionShort="$STR_CfgVehicles_SFM_SunriseVest1_41";
		visibilityModifier=0.94999999;
		attachments[]=
		{
			"FactionCover"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVest2_Base: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SunriseVest2_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SunriseVest2_Base1";
		model="SFM\Set\SFM_Sunrise\Vest\SFM_SunriseVest2_g.p3d";
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
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Sunrise\Vest\SFM_SunriseVest2.p3d";
			female="SFM\Set\SFM_Sunrise\Vest\SFM_SunriseVest2.p3d";
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
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_destruct.rvmat",
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
	class SFM_SunriseVest2_1: SFM_SunriseVest2_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVest2_2: SFM_SunriseVest2_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_gray_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVest2_3: SFM_SunriseVest2_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_brown_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVest2_4: SFM_SunriseVest2_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVest3_Base: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SunriseVest3_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SunriseVest3_Base1";
		model="SFM\Set\SFM_Sunrise\Vest\SFM_SunriseVest3_g.p3d";
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
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Sunrise\Vest\SFM_SunriseVest3.p3d";
			female="SFM\Set\SFM_Sunrise\Vest\SFM_SunriseVest3.p3d";
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
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_damage.rvmat",
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_destruct.rvmat",
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
	class SFM_SunriseVest3_1: SFM_SunriseVest3_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVest3_2: SFM_SunriseVest3_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_gray_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVest3_3: SFM_SunriseVest3_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_brown_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
	class SFM_SunriseVest3_4: SFM_SunriseVest3_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vest_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_rps_co.paa",
			"SFM\Set\SFM_Sunrise\Vest\data\sunrisem1_vestplate_co.paa"
		};
	};
};
