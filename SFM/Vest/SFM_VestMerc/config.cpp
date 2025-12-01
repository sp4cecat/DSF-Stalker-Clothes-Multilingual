class CfgPatches
{
	class SFM_VestMerc
	{
		units[]=
		{
			"SFM_VestMerc_Bandit",
			"SFM_VestMerc_Clear",
			"SFM_VestMerc_Black",
			"SFM_VestMerc_Dolg",
			"SFM_VestMerc_Free",
			"SFM_VestMerc_Green",
			"SFM_VestMerc_Merc",
			"SFM_VestMerc_Mill",
			"SFM_VestMerc_Monolit",
			"SFM_VestMerc_Neutral",
			"SFM_VestMerc_Stalker",
			"SFM_VestMerc_Yellow"
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
	class SFM_VestMerc_ColorBace: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_VestMerc_ColorBace0";
		descriptionShort="$STR_CfgVehicles_SFM_VestMerc_ColorBace1";
		model="SFM\Vest\SFM_VestMerc\SFM_VestMerc_g.p3d";
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]={};
		weight=1000;
		itemSize[]={3,2};
		itemsCargoSize[]={6,4};
		quickBarBonus=3;
		absorbency=0.1;
		heatIsolation=0.5;
		repairableWithKits[]={};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_Dolg.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Vest\SFM_VestMerc\SFM_VestMerc.p3d";
			female="SFM\Vest\SFM_VestMerc\SFM_VestMerc.p3d";
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
								"SFM\Vest\SFM_VestMerc\data\MercVest_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Vest\SFM_VestMerc\data\MercVest_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Vest\SFM_VestMerc\data\MercVest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Vest\SFM_VestMerc\data\MercVest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Vest\SFM_VestMerc\data\MercVest_destruct.rvmat"
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
	class SFM_VestMerc_Bandit: SFM_VestMerc_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_bandit.paa"
		};
	};
	class SFM_VestMerc_Clear: SFM_VestMerc_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_clear.paa"
		};
	};
	class SFM_VestMerc_Black: SFM_VestMerc_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_co.paa"
		};
	};
	class SFM_VestMerc_Dolg: SFM_VestMerc_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_dolg.paa"
		};
	};
	class SFM_VestMerc_Free: SFM_VestMerc_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_free.paa"
		};
	};
	class SFM_VestMerc_Green: SFM_VestMerc_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_Green.paa"
		};
	};
	class SFM_VestMerc_Merc: SFM_VestMerc_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_Merc.paa"
		};
	};
	class SFM_VestMerc_Mill: SFM_VestMerc_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_mill.paa"
		};
	};
	class SFM_VestMerc_Monolit: SFM_VestMerc_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_monolit.paa"
		};
	};
	class SFM_VestMerc_Neutral: SFM_VestMerc_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_neutral.paa"
		};
	};
	class SFM_VestMerc_Stalker: SFM_VestMerc_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_stalker.paa"
		};
	};
	class SFM_VestMerc_Yellow: SFM_VestMerc_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_VestMerc\data\MercVest_Yellow.paa"
		};
	};
};
