class CfgPatches
{
	class SFM_TacTec_Vest
	{
		units[]=
		{
			"SFM_TacTec_Vest",
			"SFM_VestTacTec_Black",
			"SFM_VestTacTec_BLUE",
			"SFM_VestTacTec_GREEN",
			"SFM_VestTacTec_MULTICAM",
			"SFM_VestTacTec_MULTICAM2",
			"SFM_VestTacTec_Tan",
			"SFM_VestTacTec_brown",
			"SFM_VestTacTec_Clear",
			"SFM_VestTacTec_Free",
			"SFM_VestTacTec_Mill",
			"SFM_VestTacTec_Dolg",
			"SFM_VestTacTec_Merc",
			"SFM_VestTacTec_Monolith",
			"SFM_VestTacTec_KB"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class PlateCarrierVest;
	class SFM_TacTec_Vest: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.94999999;
		displayName="$STR_CfgVehicles_SFM_TacTec_Vest0";
		descriptionShort="$STR_CfgVehicles_SFM_TacTec_Vest1";
		model="SFM\Vest\SFM_TacTec\SFM_TacTec_g.p3d";
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
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_GREEN.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Vest\SFM_TacTec\data\TacTec.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Vest\SFM_TacTec\SFM_TacTec.p3d";
			female="SFM\Vest\SFM_TacTec\SFM_TacTec.p3d";
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
								"SFM\Vest\SFM_TacTec\data\TacTec.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Vest\SFM_TacTec\data\TacTec.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Vest\SFM_TacTec\data\TacTec_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Vest\SFM_TacTec\data\TacTec_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Vest\SFM_TacTec\data\TacTec_destruct.rvmat"
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
	class SFM_VestTacTec_Black: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_Black.paa"
		};
	};
	class SFM_VestTacTec_BLUE: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_BLUE.paa"
		};
	};
	class SFM_VestTacTec_GREEN: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_GREEN.paa"
		};
	};
	class SFM_VestTacTec_MULTICAM: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_MULTICAM.paa"
		};
	};
	class SFM_VestTacTec_MULTICAM2: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_multicam2.paa"
		};
	};
	class SFM_VestTacTec_Tan: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_TAN.paa"
		};
	};
	class SFM_VestTacTec_brown: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_brown.paa"
		};
	};
	class SFM_VestTacTec_Clear: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_Clear.paa"
		};
	};
	class SFM_VestTacTec_Free: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_FREE.paa"
		};
	};
	class SFM_VestTacTec_Mill: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_Voen.paa"
		};
	};
	class SFM_VestTacTec_Dolg: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_Dolg.paa"
		};
	};
	class SFM_VestTacTec_Merc: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_Merc.paa"
		};
	};
	class SFM_VestTacTec_Monolith: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_Monolith.paa"
		};
	};
	class SFM_VestTacTec_KB: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_KB.paa"
		};
	};
};
