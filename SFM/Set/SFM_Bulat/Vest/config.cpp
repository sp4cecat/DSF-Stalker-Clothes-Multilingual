class CfgPatches
{
	class SFM_BulatVest
	{
		units[]=
		{
			"SFM_Bulat_Vest_Black",
			"SFM_Bulat_Vest_Dolg",
			"SFM_Bulat_Vest_Black_Heavy",
			"SFM_Bulat_Vest_Dolg_Heavy"
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
	class PlateCarrierVest;
	class SFM_BulatVestV1_Base: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_BulatVestV1_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_BulatVestV1_Base1";
		model="SFM\Set\SFM_Bulat\Vest\SFM_BulatVestV1_g.p3d";
		inventorySlot="Vest";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]={};
		compatiblePlates[]={3,7};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_2_co.paa",
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_2_co.rvmat",
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Bulat\Vest\SFM_BulatVestV1.p3d";
			female="SFM\Set\SFM_Bulat\Vest\SFM_BulatVestV1.p3d";
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
							1,
							
							{
								"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_2_co.rvmat",
								"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_2_co.rvmat",
								"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Bulat\Vest\data\BULAT_vest_2_co_damage.rvmat",
								"SFM\Set\SFM_Bulat\Vest\data\BULAT_vest_co_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Bulat\Vest\data\BULAT_vest_2_co_damage.rvmat",
								"SFM\Set\SFM_Bulat\Vest\data\BULAT_vest_co_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_co_destruct.rvmat",
								"SFM\Set\SFM_Bulat\Vest\data\BULAT_vest_co_destruct.rvmat"
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
	class SFM_Bulat_Vest_Black: SFM_BulatVestV1_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_2_co.paa",
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_co.paa"
		};
	};
	class SFM_Bulat_Vest_Dolg: SFM_BulatVestV1_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_2_dolg_co.paa",
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_dolg_co.paa"
		};
	};
	class SFM_BulatVestV2_Base: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_BulatVestV2_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_BulatVestV2_Base1";
		model="SFM\Set\SFM_Bulat\Vest\SFM_BulatVestV2_g.p3d";
		inventorySlot="Vest";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
		compatiblePlates[]={3,7};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_2_co.paa",
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_2_co.rvmat",
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Bulat\Vest\SFM_BulatVestV2.p3d";
			female="SFM\Set\SFM_Bulat\Vest\SFM_BulatVestV2.p3d";
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
							1,
							
							{
								"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_2_co.rvmat",
								"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_2_co.rvmat",
								"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Bulat\Vest\data\BULAT_vest_2_co_damage.rvmat",
								"SFM\Set\SFM_Bulat\Vest\data\BULAT_vest_co_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Bulat\Vest\data\BULAT_vest_2_co_damage.rvmat",
								"SFM\Set\SFM_Bulat\Vest\data\BULAT_vest_co_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_co_destruct.rvmat",
								"SFM\Set\SFM_Bulat\Vest\data\BULAT_vest_co_destruct.rvmat"
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
	class SFM_Bulat_Vest_Black_Heavy: SFM_BulatVestV2_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_2_co.paa",
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_co.paa"
		};
	};
	class SFM_Bulat_Vest_Dolg_Heavy: SFM_BulatVestV2_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_2_dolg_co.paa",
			"SFM\Set\SFM_Bulat\Vest\data\bulat_vest_dolg_co.paa"
		};
	};
};
