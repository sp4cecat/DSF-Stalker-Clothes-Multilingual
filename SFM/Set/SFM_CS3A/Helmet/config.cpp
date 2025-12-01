class CfgPatches
{
	class SFM_CS3AHelmet
	{
		units[]=
		{
			"SFM_CS3AHelmet1",
			"SFM_CS3AHelmet2"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"dz_data",
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class Mich2001Helmet;
	class SFM_CS3AHelmet1: Mich2001Helmet
	{
		scope=2;
		sfmSwitchInto="SFM_CS3AHelmet2";
		displayName="$STR_CfgVehicles_SFM_CS3AHelmet10";
		descriptionShort="$STR_CfgVehicles_SFM_CS3AHelmet11";
		model="SFM\Set\SFM_CS3A\Helmet\SFM_CS3AHelmet_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		attachments[]={};
		weight=1200;
		itemSize[]={4,3};
		noMask=0;
		absorbency=0;
		heatIsolation=0.80000001;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"SFM\Set\SFM_CS3A\Helmet\data\cs3a_helmet_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_CS3A\Helmet\data\cs3a_helmet_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_CS3A\Helmet\data\cs3a_helmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_CS3A\Helmet\data\cs3a_helmet_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_CS3A\Helmet\data\cs3a_helmet_destruct.rvmat"
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
						damage=0;
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
						damage=0.23;
					};
					class Blood
					{
						damage=0;
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
						damage=0.23;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.2;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.23;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.12;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_CS3A\Helmet\SFM_CS3AHelmet1.p3d";
			female="SFM\Set\SFM_CS3A\Helmet\SFM_CS3AHelmet1.p3d";
		};
	};
	class SFM_CS3AHelmet2: SFM_CS3AHelmet1
	{
		sfmSwitchInto="SFM_CS3AHelmet1";
		class ClothingTypes
		{
			male="SFM\Set\SFM_CS3A\Helmet\SFM_CS3AHelmet2.p3d";
			female="SFM\Set\SFM_CS3A\Helmet\SFM_CS3AHelmet2.p3d";
		};
	};
};
