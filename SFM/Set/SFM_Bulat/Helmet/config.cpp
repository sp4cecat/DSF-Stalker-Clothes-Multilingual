class CfgPatches
{
	class SFM_BulatHelmet
	{
		units[]=
		{
			"SFM_BulatHelmet_Voen1",
			"SFM_BulatHelmet_Dolg1",
			"SFM_BulatHelmet"
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
	class Mich2001Helmet;
	class Headtorch_ColorBase;
	class SFM_BulatHelmetBase: Headtorch_ColorBase
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_BulatHelmetBase0";
		descriptionShort="$STR_CfgVehicles_SFM_BulatHelmetBase1";
		model="SFM\Set\SFM_Bulat\Helmet\SFM_BulatHelmet_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		weight=1200;
		itemSize[]={4,3};
		noMask=0;
		absorbency=0;
		heatIsolation=0.80000001;
		attachments[]=
		{
			"BatteryD"
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
			"SFM\Set\SFM_Bulat\Helmet\data\bulat_helm_mill_co.paa",
			"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Mill_co.paa",
			"dz\weapons\attachments\data\m4_flashlight_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Bulat\Helmet\data\bulat_helm_mill_co.rvmat",
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
			"dz\weapons\attachments\data\m4_flashlight.rvmat"
		};
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
								"SFM\Set\SFM_Bulat\Helmet\data\bulat_helm_mill_co.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\bulat_helm_mill_co.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Mill_co_damage.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_damage.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Mill_co_damage.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_damage.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Mill_co_destruct.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_destruct.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
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
			male="SFM\Set\SFM_Bulat\Helmet\SFM_BulatHelmet.p3d";
			female="SFM\Set\SFM_Bulat\Helmet\SFM_BulatHelmet.p3d";
		};
	};
	class SFM_BulatHelmet_Voen1: SFM_BulatHelmetBase
	{
		scope=2;
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
			"SFM\Set\SFM_Bulat\Helmet\data\bulat_helm_mill_co.paa",
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.paa",
			"dz\weapons\attachments\data\m4_flashlight_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Bulat\Helmet\data\bulat_helm_mill_co.rvmat",
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
			"dz\weapons\attachments\data\m4_flashlight.rvmat"
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
								"SFM\Set\SFM_Bulat\Helmet\data\bulat_helm_mill_co.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\bulat_helm_mill_co.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Mill_co_damage.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_damage.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Mill_co_damage.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_damage.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Mill_co_destruct.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_destruct.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
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
	};
	class SFM_BulatHelmet_Dolg1: SFM_BulatHelmetBase
	{
		scope=2;
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
			"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Dolg.paa",
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.paa",
			"dz\weapons\attachments\data\m4_flashlight_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Dolg.rvmat",
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
			"dz\weapons\attachments\data\m4_flashlight.rvmat"
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
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Dolg.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Dolg.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Dolg_damage.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_damage.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Dolg_damage.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_damage.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_Dolg_destruct.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_destruct.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
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
	};
	class SFM_BulatHelmet: SFM_BulatHelmetBase
	{
		scope=2;
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
			"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_co.paa",
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.paa",
			"dz\weapons\attachments\data\m4_flashlight_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_co.rvmat",
			"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
			"dz\weapons\attachments\data\m4_flashlight.rvmat"
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
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_co.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_co.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\berill_suit_helmet.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_co_damage.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_damage.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_co_damage.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_damage.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Bulat\Helmet\data\BULAT_helm_co_destruct.rvmat",
								"SFM\Set\SFM_Beril\Helmet\data\Berill_Suit_Helmet_destruct.rvmat",
								"dz\weapons\attachments\data\m4_flashlight.rvmat"
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
	};
};
