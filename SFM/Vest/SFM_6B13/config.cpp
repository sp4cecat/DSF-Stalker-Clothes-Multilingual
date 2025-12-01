class CfgPatches
{
	class SFM_6B13
	{
		units[]=
		{
			"SFM_6B13_Desert",
			"SFM_6B13_Desert_Dirt",
			"SFM_6B13_Flora",
			"SFM_6B13_Flora_Dirt",
			"SFM_6B13_Pixel",
			"SFM_6B13_Pixel_Dirt",
			"SFM_6B13_bandit",
			"SFM_6B13_clearsky",
			"SFM_6B13_duty",
			"SFM_6B13_freedom",
			"SFM_6B13_FS",
			"SFM_6B13_merc",
			"SFM_6B13_mil",
			"SFM_6B13_mono",
			"SFM_6B13_rene"
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
	class PlateCarrierVest;
	class SFM_6B13: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_6B130";
		descriptionShort="$STR_CfgVehicles_SFM_6B131";
		model="SFM\Vest\SFM_6B13\SFM_6B13_g.p3d";
		attachments[]={};
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=3000;
		itemSize[]={5,3};
		itemsCargoSize[]={0,0};
		quickBarBonus=3;
		absorbency=0.1;
		heatIsolation=0.25;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Vest\SFM_6B13\SFM_6B13.p3d";
			female="SFM\Vest\SFM_6B13\SFM_6B13.p3d";
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
								"SFM\Vest\SFM_6B13\data\6b13.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Vest\SFM_6B13\data\6b13.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Vest\SFM_6B13\data\6b13_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Vest\SFM_6B13\data\6b13_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Vest\SFM_6B13\data\6b13_destruct.rvmat"
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
	};
	class SFM_6B13_Desert: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_Desert_co.paa"
		};
	};
	class SFM_6B13_Desert_Dirt: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_Desert_Dirt_co.paa"
		};
	};
	class SFM_6B13_Flora: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_Flora_co.paa"
		};
	};
	class SFM_6B13_Flora_Dirt: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_Flora_Dirt_co.paa"
		};
	};
	class SFM_6B13_Pixel: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_Pixel_Base_co.paa"
		};
	};
	class SFM_6B13_Pixel_Dirt: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_Pixel_Dirt_co.paa"
		};
	};
	class SFM_6B13_bandit: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_bandit_co.paa"
		};
	};
	class SFM_6B13_clearsky: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_clearsky_co.paa"
		};
	};
	class SFM_6B13_duty: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_duty_co.paa"
		};
	};
	class SFM_6B13_freedom: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_freedom_co.paa"
		};
	};
	class SFM_6B13_FS: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_fs_co.paa"
		};
	};
	class SFM_6B13_merc: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_merc_co.paa"
		};
	};
	class SFM_6B13_mil: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_mil_co.paa"
		};
	};
	class SFM_6B13_mono: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_mono_co.paa"
		};
	};
	class SFM_6B13_rene: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_6B13\data\6b13_rene_co.paa"
		};
	};
};
