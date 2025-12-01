class CfgPatches
{
	class SFM_BerilVest
	{
		units[]=
		{
			"SFM_BerilVest_Stalker",
			"SFM_BerilVest_Svoboda1",
			"SFM_BerilVest_Voen1"
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
	class SFM_BerilVest_Base: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_BerilVest_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_BerilVest_Base1";
		model="SFM\Set\SFM_Beril\Vest\SFM_BerilVest_g.p3d";
		inventorySlot="Vest";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
		};
		quickBarBonus=5;
		absorbency=0.1;
		heatIsolation=0.25;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Vest\data\Berill_vest_stalker.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Beril\Vest\data\Berill_vest.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Beril\Vest\SFM_BerilVest.p3d";
			female="SFM\Set\SFM_Beril\Vest\SFM_BerilVest.p3d";
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
								"SFM\Set\SFM_Beril\Vest\data\Berill_vest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Beril\Vest\data\Berill_vest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Beril\Vest\data\Berill_vest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Beril\Vest\data\Berill_vest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Beril\Vest\data\Berill_vest_destruct.rvmat"
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
	class SFM_BerilVest_Stalker: SFM_BerilVest_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Vest\data\Berill_vest_stalker.paa"
		};
	};
	class SFM_BerilVest_Svoboda1: SFM_BerilVest_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_BerilVest_Svoboda10";
		descriptionShort="$STR_CfgVehicles_SFM_BerilVest_Svoboda11";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Vest\data\Berill_vest_free.paa"
		};
	};
	class SFM_BerilVest_Voen1: SFM_BerilVest_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Vest\data\Berill_vest_mill.paa"
		};
	};
};
