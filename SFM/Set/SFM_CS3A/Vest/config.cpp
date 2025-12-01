class CfgPatches
{
	class SFM_CS3AVest
	{
		units[]=
		{
			"SFM_CS3AVest"
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
	class PlateCarrierVest;
	class SFM_CS3AVest: PlateCarrierVest
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_CS3AVest0";
		descriptionShort="$STR_CfgVehicles_SFM_CS3AVest1";
		model="SFM\Set\SFM_CS3A\Vest\SFM_CS3AVest_g.p3d";
		attachments[]={};
		itemSize[]={4,4};
		itemsCargoSize[]={6,3};
		quickBarBonus="3";
		varWetMax=0.49000001;
		heatIsolation=0.25;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Vest\data\cs3a_vest_cs_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_CS3A\Vest\data\cs3a_vest_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_CS3A\Vest\SFM_CS3AVest.p3d";
			female="SFM\Set\SFM_CS3A\Vest\SFM_CS3AVest.p3d";
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
								"SFM\Set\SFM_CS3A\Vest\data\cs3a_vest_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_CS3A\Vest\data\cs3a_vest_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_CS3A\Vest\data\cs3a_vest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_CS3A\Vest\data\cs3a_vest_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_CS3A\Vest\data\cs3a_vest_destruct.rvmat"
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
};
