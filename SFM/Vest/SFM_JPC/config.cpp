class CfgPatches
{
	class SFM_JPC_Vest
	{
		units[]=
		{
			"SFM_JPC_Vest",
			"SFM_JPC_Black",
			"SFM_JPC_Green",
			"SFM_JPC_TAN",
			"SFM_JPC_brown",
			"SFM_JPC_multicam",
			"SFM_JPC_Clear",
			"SFM_JPC_Free",
			"SFM_JPC_Mill",
			"SFM_JPC_Dolg",
			"SFM_JPC_Merc",
			"SFM_JPC_Monolith"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Vests",
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class PlateCarrierVest;
	class SFM_JPC_Vest: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.94999999;
		displayName="$STR_CfgVehicles_SFM_JPC_Vest0";
		descriptionShort="$STR_CfgVehicles_SFM_JPC_Vest1";
		model="SFM\Vest\SFM_JPC\SFM_JPC_g.p3d";
		inventorySlot="Vest";
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		itemSize[]={4,4};
		itemsCargoSize[]={0,0};
		quickBarBonus=3;
		absorbency=0.1;
		heatIsolation=0.25;
		repairableWithKits[]={};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_JPC\data\JPC_green.paa"
		};
		class ClothingTypes
		{
			male="SFM\Vest\SFM_JPC\SFM_JPC.p3d";
			female="SFM\Vest\SFM_JPC\SFM_JPC.p3d";
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
								"SFM\Vest\SFM_JPC\data\JPC.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Vest\SFM_JPC\data\JPC.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Vest\SFM_JPC\data\JPC_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Vest\SFM_JPC\data\JPC_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Vest\SFM_JPC\data\JPC_destruct.rvmat"
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
	class SFM_JPC_Black: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_JPC\data\JPC_black.paa"
		};
	};
	class SFM_JPC_Green: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_JPC\data\JPC_green.paa"
		};
	};
	class SFM_JPC_TAN: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_JPC\data\JPC_tan.paa"
		};
	};
	class SFM_JPC_brown: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_JPC\data\JPC_brown.paa"
		};
	};
	class SFM_JPC_multicam: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_JPC\data\JPC_multicam.paa"
		};
	};
	class SFM_JPC_Clear: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_JPC\data\JPC_Clear.paa"
		};
	};
	class SFM_JPC_Free: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_JPC\data\JPC_FREE.paa"
		};
	};
	class SFM_JPC_Mill: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_JPC\data\JPC_Voen.paa"
		};
	};
	class SFM_JPC_Dolg: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_JPC\data\JPC_Dolg.paa"
		};
	};
	class SFM_JPC_Merc: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_JPC\data\JPC_Merc.paa"
		};
	};
	class SFM_JPC_Monolith: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_JPC\data\JPC_Monolith.paa"
		};
	};
};
