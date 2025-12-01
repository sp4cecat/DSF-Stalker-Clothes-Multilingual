class CfgPatches
{
	class SFM_SevaPants
	{
		units[]=
		{
			"SFM_SevaPants",
			"SFM_SevaPants_Stalker1",
			"SFM_SevaPants_Dolg1",
			"SFM_SevaPants_Svoboda1",
			"SFM_SevaPants_CS1",
			"SFM_SevaPants_Naem1"
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
			"DZ_Characters_Vests",
			"DZ_Weapons_Magazines"
		};
	};
};
class CfgVehicles
{
	class GorkaPants_Summer;
	class SFM_SevaPants_Base: GorkaPants_Summer
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SevaPants_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaPants_Base1";
		model="SFM\Set\SFM_Seva\Pants\SFM_SevaPants_g.p3d";
		inventorySlot="Legs";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		absorbency=0.0099999998;
		heatIsolation=1;
		quickBarBonus=2;
		itemSize[]={2,2};
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Pants\data\seva_pants_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\Pants\data\seva_pants_ca.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\Pants\SFM_SevaPants.p3d";
			female="SFM\Set\SFM_Seva\Pants\SFM_SevaPants.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=700;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"SFM\Set\SFM_Seva\Pants\data\seva_pants_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\Pants\data\seva_pants_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\Pants\data\seva_pants_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\Pants\data\seva_pants_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"SFM\Set\SFM_Seva\Pants\data\seva_pants_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
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
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SFM_SevaPants: SFM_SevaPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		attachments[]=
		{
			"FactionCover"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Pants\data\seva_pants_ca.paa"
		};
	};
	class SFM_SevaPants_Stalker1: SFM_SevaPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Pants\data\seva_pants_ca.paa"
		};
	};
	class SFM_SevaPants_Dolg1: SFM_SevaPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Pants\data\seva_pants_dolg.paa"
		};
	};
	class SFM_SevaPants_Svoboda1: SFM_SevaPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Pants\data\seva_pants_free.paa"
		};
	};
	class SFM_SevaPants_CS1: SFM_SevaPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Pants\data\seva_pants_clear.paa"
		};
	};
	class SFM_SevaPants_Naem1: SFM_SevaPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Pants\data\seva_pants_merc.paa"
		};
	};
};
