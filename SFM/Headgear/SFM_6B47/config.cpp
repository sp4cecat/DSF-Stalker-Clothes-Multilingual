class CfgPatches
{
	class SFM_6B47_Helmet
	{
		units[]=
		{
			"SFM_6B47_Helmet_Black",
			"SFM_6B47_Helmet_Green",
			"SFM_6B47_Helmet_Tan",
			"SFM_6B47_Helmet_Free",
			"SFM_6B47_Helmet_Clear",
			"SFM_6B47_Helmet_Merc",
			"SFM_6B47_Helmet_Mill",
			"SFM_6B47_Helmet_Monolit",
			"SFM_6B47_Helmet_Neutral",
			"SFM_6B47_Helmet_stalker",
			"SFM_6B47_Helmet_airassault"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Data",
			"DZ_Characters_Glasses",
			"DZ_Characters_Headgear"
		};
	};
};
class CfgVehicles
{
	class Mich2001Helmet;
	class SFM_6B47_Helmet_Base: Mich2001Helmet
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_6B47_Helmet_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_6B47_Helmet_Base1";
		model="SFM\Headgear\SFM_6B47\SFM_6B47_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		attachments[]=
		{
			"NVG",
			"helmetFlashlight"
		};
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
		rotationFlags=2;
		weight=1200;
		itemSize[]={4,3};
		noMask=0;
		absorbency=0;
		heatIsolation=0.80000001;
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
			"SFM\Headgear\SFM_6B47\data\Helmet_05_Black_Diffuse.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Headgear\SFM_6B47\data\Helmet_05.rvmat"
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
								"SFM\Headgear\SFM_6B47\data\Helmet_05.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Headgear\SFM_6B47\data\Helmet_05.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Headgear\SFM_6B47\data\Helmet_05_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Headgear\SFM_6B47\data\Helmet_05_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Headgear\SFM_6B47\data\Helmet_05_destruct.rvmat"
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
			male="SFM\Headgear\SFM_6B47\SFM_6B47.p3d";
			female="SFM\Headgear\SFM_6B47\SFM_6B47.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SFM_6B47_Helmet_Black: SFM_6B47_Helmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_6B47\data\Helmet_05_Black_Diffuse.paa"
		};
	};
	class SFM_6B47_Helmet_Green: SFM_6B47_Helmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_6B47\data\Helmet_Green.paa"
		};
	};
	class SFM_6B47_Helmet_Tan: SFM_6B47_Helmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_6B47\data\Helmet_tan.paa"
		};
	};
	class SFM_6B47_Helmet_Free: SFM_6B47_Helmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_6B47\data\Helmet_Free.paa"
		};
	};
	class SFM_6B47_Helmet_Clear: SFM_6B47_Helmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_6B47\data\Helmet_Clear.paa"
		};
	};
	class SFM_6B47_Helmet_Merc: SFM_6B47_Helmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_6B47\data\Helmet_merc.paa"
		};
	};
	class SFM_6B47_Helmet_Mill: SFM_6B47_Helmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_6B47\data\Helmet_Mill.paa"
		};
	};
	class SFM_6B47_Helmet_Monolit: SFM_6B47_Helmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_6B47\data\Helmet_Monolit.paa"
		};
	};
	class SFM_6B47_Helmet_Neutral: SFM_6B47_Helmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_6B47\data\Helmet_Neutral.paa"
		};
	};
	class SFM_6B47_Helmet_stalker: SFM_6B47_Helmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_6B47\data\Helmet_stalker.paa"
		};
	};
	class SFM_6B47_Helmet_airassault: SFM_6B47_Helmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_6B47\data\Helmet_Mill_Air.paa"
		};
	};
};
