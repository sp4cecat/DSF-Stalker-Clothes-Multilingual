class CfgPatches
{
	class SFM_Altyn
	{
		units[]=
		{
			"SFM_AltynHelmet_Green",
			"SFM_AltynHelmet_Clear_2",
			"SFM_AltynHelmet_Clear_3",
			"SFM_AltynHelmet_Free",
			"SFM_AltynHelmet_Mill",
			"SFM_AltynHelmet_Dolg",
			"SFM_AltynHelmet_Merc",
			"SFM_AltynHelmet_Merc_2",
			"SFM_AltynHelmet_Monolith"
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
	class SFM_AltynHelmet_Base: Mich2001Helmet
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_AltynHelmet_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_AltynHelmet_Base1";
		model="SFM\Headgear\SFM_Altyn\SFM_Altyn_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		attachments[]=
		{
			"Glass"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1100;
		itemSize[]={4,4};
		color="Green";
		varWetMax=0.49000001;
		heatIsolation=0.80000001;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Maska"
		};
		class ClothingTypes
		{
			male="SFM\Headgear\SFM_Altyn\SFM_Altyn.p3d";
			female="SFM\Headgear\SFM_Altyn\SFM_Altyn.p3d";
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_GREEN.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Headgear\SFM_Altyn\data\SFM_Altyn.rvmat"
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
								"SFM\Headgear\SFM_Altyn\data\SFM_Altyn.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Headgear\SFM_Altyn\data\SFM_Altyn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_destruct.rvmat"
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SFM_AltynHelmet_Green: SFM_AltynHelmet_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_GREEN.paa"
		};
		lootCategory="Crafted";
	};
	class SFM_AltynHelmet_Clear_2: SFM_AltynHelmet_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_Clear_2.paa"
		};
		lootCategory="Crafted";
	};
	class SFM_AltynHelmet_Clear_3: SFM_AltynHelmet_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_Clear_3.paa"
		};
		lootCategory="Crafted";
	};
	class SFM_AltynHelmet_Free: SFM_AltynHelmet_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_FREE.paa"
		};
		lootCategory="Crafted";
	};
	class SFM_AltynHelmet_Mill: SFM_AltynHelmet_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_Voen.paa"
		};
		lootCategory="Crafted";
	};
	class SFM_AltynHelmet_Dolg: SFM_AltynHelmet_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_Dolg.paa"
		};
		lootCategory="Crafted";
	};
	class SFM_AltynHelmet_Merc: SFM_AltynHelmet_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_Merc.paa"
		};
		lootCategory="Crafted";
	};
	class SFM_AltynHelmet_Merc_2: SFM_AltynHelmet_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_Merc_2.paa"
		};
		lootCategory="Crafted";
	};
	class SFM_AltynHelmet_Monolith: SFM_AltynHelmet_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_Monolith.paa"
		};
		lootCategory="Crafted";
	};
};
