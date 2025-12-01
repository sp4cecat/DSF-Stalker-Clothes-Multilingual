class CfgPatches
{
	class SFM_CS1A
	{
		units[]=
		{
			"SFM_CS1A_Vest"
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
	class SFM_CS1A_Vest: PlateCarrierVest
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_CS1A_Vest0";
		descriptionShort="$STR_CfgVehicles_SFM_CS1A_Vest1";
		model="SFM\Set\SFM_CS1A\Vest\SFM_CS1A_Vest_g.p3d";
		attachments[]=
		{
			""
		};
		itemSize[]={4,4};
		itemsCargoSize[]={6,3};
		quickBarBonus="3";
		varWetMax=0.49000001;
		heatIsolation=0.25;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS1A\Vest\data\CS1A_vest_co.paa",
			"SFM\Set\SFM_CS1A\Vest\data\cs1a_vestbelt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_CS1A\Vest\data\CS1A_vest_co.rvmat",
			"SFM\Set\SFM_CS1A\Vest\data\cs1a_vestbelt_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_CS1A\Vest\SFM_CS1A_Vest.p3d";
			female="SFM\Set\SFM_CS1A\Vest\SFM_CS1A_Vest.p3d";
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
								"SFM\Set\SFM_CS1A\Vest\data\CS1A_vest_co.rvmat",
								"SFM\Set\SFM_CS1A\Vest\data\cs1a_vestbelt_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_CS1A\Vest\data\CS1A_vest_co.rvmat",
								"SFM\Set\SFM_CS1A\Vest\data\cs1a_vestbelt_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_CS1A\Vest\data\CS1A_vest_damage.rvmat",
								"SFM\Set\SFM_CS1A\Vest\data\cs1a_vestbelt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_CS1A\Vest\data\CS1A_vest_damage.rvmat",
								"SFM\Set\SFM_CS1A\Vest\data\cs1a_vestbelt_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_CS1A\Vest\data\CS1A_vest_destruct.rvmat",
								"SFM\Set\SFM_CS1A\Vest\data\cs1a_vestbelt_destruct.rvmat"
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
