class CfgPatches
{
	class SFM_MTV_Vest
	{
		units[]=
		{
			"SFM_MTV_Black",
			"SFM_MTV_Green",
			"SFM_MTV_TAN",
			"SFM_MTV_UCP",
			"SFM_MTV_Woods",
			"SFM_MTV_Mill",
			"SFM_MTV_Clear",
			"SFM_MTV_Free",
			"SFM_MTV_Dolg",
			"SFM_MTV_Merc",
			"SFM_MTV_Monolith",
			"SFM_MTV_KB"
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
	class Clothing_Base;
	class PlateCarrierVest;
	class SFM_MTV_ColorBace: PlateCarrierVest
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_MTV_ColorBace0";
		descriptionShort="$STR_CfgVehicles_SFM_MTV_ColorBace1";
		model="SFM\Vest\SFM_MTV\SFM_MTV_g.p3d";
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
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Green_BaseColor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Vest\SFM_MTV\SFM_MTV.p3d";
			female="SFM\Vest\SFM_MTV\SFM_MTV.p3d";
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
								"SFM\Vest\SFM_MTV\data\SFM_MTV.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Vest\SFM_MTV\data\SFM_MTV.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Vest\SFM_MTV\data\SFM_MTV_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Vest\SFM_MTV\data\SFM_MTV_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Vest\SFM_MTV\data\SFM_MTV_destruct.rvmat"
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
	class SFM_MTV_Black: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Black_BaseColor.paa"
		};
	};
	class SFM_MTV_Green: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Green_BaseColor.paa"
		};
	};
	class SFM_MTV_TAN: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_TAN_BaseColor.paa"
		};
	};
	class SFM_MTV_UCP: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_UCP_BaseColor.paa"
		};
	};
	class SFM_MTV_Woods: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Woods_BaseColor.paa"
		};
	};
	class SFM_MTV_Mill: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Voen.paa"
		};
	};
	class SFM_MTV_Clear: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Clear.paa"
		};
	};
	class SFM_MTV_Free: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Free.paa"
		};
	};
	class SFM_MTV_Dolg: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Dolg.paa"
		};
	};
	class SFM_MTV_Merc: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Merc.paa"
		};
	};
	class SFM_MTV_Monolith: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Monolith.paa"
		};
	};
	class SFM_MTV_KB: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_KB.paa"
		};
	};
};
