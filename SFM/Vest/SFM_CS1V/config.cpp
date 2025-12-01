class CfgPatches
{
	class SFM_PS7_Vest
	{
		units[]=
		{
			"SFM_CS1V"
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
	class SFM_CS1V: PlateCarrierVest
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_CS1V0";
		descriptionShort="$STR_CfgVehicles_SFM_CS1V1";
		model="SFM\Vest\SFM_CS1V\SFM_CS1V_g.p3d";
		itemSize[]={3,3};
		attachments[]={};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_CS1V\data\CS_1A_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Vest\SFM_CS1V\data\CS_1A_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Vest\SFM_CS1V\SFM_CS1V.p3d";
			female="SFM\Vest\SFM_CS1V\SFM_CS1V.p3d";
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
								"SFM\Vest\SFM_CS1V\data\CS_1A_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Vest\SFM_CS1V\data\CS_1A_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Vest\SFM_CS1V\data\CS_1A_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Vest\SFM_CS1V\data\CS_1A_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Vest\SFM_CS1V\data\CS_1A_destruct.rvmat"
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
