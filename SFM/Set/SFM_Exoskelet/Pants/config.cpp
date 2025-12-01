class CfgPatches
{
	class SFM_ExoPants
	{
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
			"DZ_Characters_Vests"
		};
		units[]=
		{
			"SFM_ExoPants",
			"SFM_ExoPantsMonolit"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class GorkaPants_Summer;
	class SFM_ExoPants_Base: GorkaPants_Summer
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_ExoPants_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_ExoPants_Base1";
		model="SFM\Set\SFM_Exoskelet\Pants\SFM_ExoPants_g.p3d";
		inventorySlot="Legs";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		attachments[]=
		{
			"FactionCover"
		};
		weight=10000;
		absorbency=0.0099999998;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		heatIsolation=1;
		quickBarBonus=2;
		itemSize[]={4,3};
		repairableWithKits[]={};
		repairCosts[]={};
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_ca.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Exoskelet\Pants\SFM_ExoPants.p3d";
			female="SFM\Set\SFM_Exoskelet\Pants\SFM_ExoPants.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_destruct.rvmat"
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
						damage=0.69999999;
					};
					class Blood
					{
						damage=0.69999999;
					};
					class Shock
					{
						damage=0.69999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.69999999;
					};
					class Blood
					{
						damage=0.69999999;
					};
					class Shock
					{
						damage=0.69999999;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.69999999;
					};
					class Blood
					{
						damage=0.69999999;
					};
					class Shock
					{
						damage=0.69999999;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.69999999;
					};
					class Blood
					{
						damage=0.69999999;
					};
					class Shock
					{
						damage=0.69999999;
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
	class SFM_ExoPants: SFM_ExoPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_ca.paa"
		};
	};
	class SFM_ExoPantsMonolit: SFM_ExoPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_monolith_ca.paa"
		};
	};
};
