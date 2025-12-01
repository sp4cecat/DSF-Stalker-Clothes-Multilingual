class CfgPatches
{
	class SFM_BerilHelmet
	{
		units[]=
		{
			"SFM_BerilHelmet_Stalker",
			"SFM_BerilHelmet_Svoboda1",
			"SFM_BerilHelmet_Voen1",
			"SFM_BerilFlashLiht"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Belts",
			"DZ_Characters_Glasses",
			"DZ_Characters_Gloves",
			"DZ_Characters_Headgear",
			"DZ_Characters_Heads",
			"DZ_Characters_Masks",
			"DZ_Characters_Pants",
			"DZ_Characters_Shoes",
			"DZ_Characters_Tops",
			"DZ_Weapons_Lights",
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class Headtorch_ColorBase;
	class SFM_BerilHelmet_Base: Headtorch_ColorBase
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_BerilHelmet_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_BerilHelmet_Base1";
		model="SFM\Set\SFM_Beril\Helmet\SFM_BerilHelmet_g.p3d";
		weight=1200;
		itemSize[]={4,3};
		noMask=0;
		absorbency=0;
		heatIsolation=0.80000001;
		attachments[]=
		{
			"BatteryD"
		};
		simpleHiddenSelections[]=
		{
			"unhidehood",
			"hidehood"
		};
		inventorySlot[]=
		{
			"Headgear"
		};
		conflictedSlots[]=
		{
			"Eyewear"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.paa",
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_glasses_ca.paa",
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_glasses_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_glasses.rvmat",
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_glasses_glass.rvmat"
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
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Glasses.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_glasses_glass.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Glasses.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_glasses_glass.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_damage.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Glasses_damage.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Glasses_Glass_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_damage.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Glasses_damage.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Glasses_Glass_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_destruct.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Glasses_destruct.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Glasses_Glass_destruct.rvmat"
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
			male="SFM\Set\SFM_Beril\Helmet\SFM_BerilHelmet.p3d";
			female="SFM\Set\SFM_Beril\Helmet\SFM_BerilHelmet.p3d";
		};
	};
	class SFM_BerilHelmet_Stalker: SFM_BerilHelmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.paa",
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_glasses_ca.paa",
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_glasses_ca.paa"
		};
	};
	class SFM_BerilHelmet_Svoboda1: SFM_BerilHelmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_Free.paa",
			"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Glasses_Free.paa",
			"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Glasses_Free.paa"
		};
	};
	class SFM_BerilHelmet_Voen1: SFM_BerilHelmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_Mill.paa",
			"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Glasses_Mill.paa",
			"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Glasses_Mill.paa"
		};
	};
	class UniversalLight;
	class SFM_BerilFlashLiht: UniversalLight
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_BerilFlashLiht0";
		descriptionShort="$STR_CfgVehicles_SFM_BerilFlashLiht1";
		model="SFM\Set\SFM_Beril\Helmet\SFM_BerilFlashLight.p3d";
		rotationFlags=17;
		reversed=1;
		weight=80;
		itemSize[]={2,1};
		inventorySlot[]=
		{
			"Berill_FlashLight"
		};
		hiddenSelections[]=
		{
			"camo1",
			"glass",
			"reflector",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\weapons\attachments\data\m4_flashlight_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
			"dz\data\data\default.rvmat",
			"dz\weapons\attachments\data\m4_flashlight.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
								"dz\data\data\default.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
								"dz\data\data\default.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_damage.rvmat",
								"dz\data\data\default.rvmat",
								"dz\weapons\attachments\data\m4_flashlight_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_damage.rvmat",
								"dz\data\data\default.rvmat",
								"dz\weapons\attachments\data\m4_flashlight_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_destruct.rvmat",
								"dz\data\data\default.rvmat",
								"dz\weapons\attachments\data\m4_flashlight_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
	};
};
class CfgSlots
{
	class Slot_Berill_FlashLight
	{
		name="Berill_FlashLight";
		displayName="Berill_FlashLight";
		ghostIcon="flashlight";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBerill_FlashLight: ProxyAttachment
	{
		scope=2;
		inventorySlot="Berill_FlashLight";
		model="SFM\Set\SFM_Beril\Helmet\proxy\Berill_FlashLight_proxy.p3d";
	};
};
