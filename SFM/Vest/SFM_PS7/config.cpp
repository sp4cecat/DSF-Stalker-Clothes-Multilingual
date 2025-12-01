class CfgPatches
{
	class SFM_PS7_Vest
	{
		units[]=
		{
			"SFM_PS7_Vest"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"dz_data"
		};
	};
};
class CfgVehicles
{
	class PlateCarrierVest;
	class SFM_PS7_Vest: PlateCarrierVest
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_PS7_Vest0";
		descriptionShort="$STR_CfgVehicles_SFM_PS7_Vest1";
		model="SFM\Vest\SFM_PS7\SFM_PS7_g.p3d";
		itemSize[]={3,3};
		attachments[]={};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_PS7\data\PS7_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Vest\SFM_PS7\data\PS7.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Vest\SFM_PS7\SFM_PS7.p3d";
			female="SFM\Vest\SFM_PS7\SFM_PS7.p3d";
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
								"SFM\Vest\SFM_PS7\data\PS7.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Vest\SFM_PS7\data\PS7.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Vest\SFM_PS7\data\PS7_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Vest\SFM_PS7\data\PS7_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Vest\SFM_PS7\data\PS7_destruct.rvmat"
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
