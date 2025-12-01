class CfgPatches
{
	class SFM_PlateVest
	{
		units[]=
		{
			"SFM_PlateVest",
			"SFM_PlateVest_Bandit",
			"SFM_PlateVest_Dolg",
			"SFM_PlateVest_Svoboda",
			"SFM_PlateVest_Merc",
			"SFM_PlateVest_Monolit",
			"SFM_PlateVest_Neutral",
			"SFM_PlateVest_Stalker",
			"SFM_PlateVest_Voen",
			"SFM_PlateVest_Prapor"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class PlateCarrierVest;
	class SFM_PlateVest: PlateCarrierVest
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_PlateVest0";
		descriptionShort="$STR_CfgVehicles_SFM_PlateVest1";
		model="SFM\Vest\SFM_PlateVest\SFM_PlateVest_g.p3d";
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]=
		{
			"FactionCover"
		};
		weight=5000;
		itemSize[]={4,4};
		itemsCargoSize[]={7,7};
		quickBarBonus=6;
		absorbency=0.1;
		heatIsolation=0.25;
		repairableWithKits[]={};
		repairCosts[]={};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_PlateVest\data\tacvest1_stalker.paa"
		};
		class ClothingTypes
		{
			male="SFM\Vest\SFM_PlateVest\SFM_PlateVest.p3d";
			female="SFM\Vest\SFM_PlateVest\SFM_PlateVest.p3d";
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
								"SFM\Vest\SFM_PlateVest\data\vest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Vest\SFM_PlateVest\data\vest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Vest\SFM_PlateVest\data\vest_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Vest\SFM_PlateVest\data\vest_damaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Vest\SFM_PlateVest\data\vest_ruined.rvmat"
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
	class SFM_PlateVest_Bandit: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_PlateVest\data\tacvest1_bandit.paa"
		};
	};
	class SFM_PlateVest_Dolg: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_PlateVest\data\tacvest1_dolg.paa"
		};
	};
	class SFM_PlateVest_Svoboda: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_PlateVest\data\tacvest1_free.paa"
		};
	};
	class SFM_PlateVest_Merc: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_PlateVest\data\tacvest1_merc.paa"
		};
	};
	class SFM_PlateVest_Monolit: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_PlateVest\data\tacvest1_monolit.paa"
		};
	};
	class SFM_PlateVest_Neutral: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_PlateVest\data\tacvest1_neutral.paa"
		};
	};
	class SFM_PlateVest_Stalker: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_PlateVest\data\tacvest1_stalker.paa"
		};
	};
	class SFM_PlateVest_Voen: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_PlateVest\data\tacvest1_voen.paa"
		};
	};
	class SFM_PlateVest_Prapor: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_PlateVest\data\tacvest1_1_co.paa"
		};
	};
};
