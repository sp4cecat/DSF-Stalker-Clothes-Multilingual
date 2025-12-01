class CfgPatches
{
	class SFM_OPS_CORE
	{
		units[]=
		{
			"SFM_OPSCORE_Helmet_Black",
			"SFM_OPSCORE_Helmet_Camo",
			"SFM_OPSCORE_Helmet_Green",
			"SFM_OPSCORE_Helmet_Tan",
			"SFM_OPSCORE_Helmet_Clear",
			"SFM_OPSCORE_Helmet_Clear_2",
			"SFM_OPSCORE_Helmet_Clear_3",
			"SFM_OPSCORE_Helmet_Free",
			"SFM_OPSCORE_Helmet_Mill",
			"SFM_OPSCORE_Helmet_Dolg",
			"SFM_OPSCORE_Helmet_Merc",
			"SFM_OPSCORE_Helmet_Merc_2",
			"SFM_OPSCORE_Helmet_Monolith",
			"SFM_OPSCORE_Helmet_KB"
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
	class Mich2001Helmet;
	class SFM_OPSCORE_Helmet_Base: Mich2001Helmet
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_OPSCORE_Helmet_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_OPSCORE_Helmet_Base1";
		model="SFM\Headgear\SFM_OPS_CORE\SFM_OPS_CORE_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		attachments[]=
		{
			"NVG",
			"helmetFlashlight"
		};
		rotationFlags=2;
		weight=1200;
		itemSize[]={4,3};
		noMask=0;
		varWetMax=0.249;
		heatIsolation=0.25;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_GREEN_BaseColor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Headgear\SFM_OPS_CORE\SFM_OPS_CORE.p3d";
			female="SFM\Headgear\SFM_OPS_CORE\SFM_OPS_CORE.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_Damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_Damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_destruct.rvmat"
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
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
	};
	class SFM_OPSCORE_Helmet_Black: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_BLACK_BaseColor.paa"
		};
	};
	class SFM_OPSCORE_Helmet_Camo: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_CAMO_BaseColor.paa"
		};
	};
	class SFM_OPSCORE_Helmet_Green: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_GREEN_BaseColor.paa"
		};
	};
	class SFM_OPSCORE_Helmet_Tan: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_TAN_BaseColor.paa"
		};
	};
	class SFM_OPSCORE_Helmet_Clear: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_Clear.paa"
		};
	};
	class SFM_OPSCORE_Helmet_Clear_2: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_Clear_2.paa"
		};
	};
	class SFM_OPSCORE_Helmet_Clear_3: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_Clear_3.paa"
		};
	};
	class SFM_OPSCORE_Helmet_Free: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_FREE.paa"
		};
	};
	class SFM_OPSCORE_Helmet_Mill: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_Voen.paa"
		};
	};
	class SFM_OPSCORE_Helmet_Dolg: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_Dolg.paa"
		};
	};
	class SFM_OPSCORE_Helmet_Merc: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_Merc.paa"
		};
	};
	class SFM_OPSCORE_Helmet_Merc_2: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_Merc_2.paa"
		};
	};
	class SFM_OPSCORE_Helmet_Monolith: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_Monolith.paa"
		};
	};
	class SFM_OPSCORE_Helmet_KB: SFM_OPSCORE_Helmet_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_OPS_CORE\data\SFM_OPS_CORE_KB.paa"
		};
	};
};
