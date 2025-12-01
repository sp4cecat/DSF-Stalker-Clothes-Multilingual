class CfgPatches
{
	class SFM_ArmorPants
	{
		units[]=
		{
			"SFM_ArmorPants"
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
	class GorkaPants_Summer;
	class SFM_ArmorPants_ColorBase: GorkaPants_Summer
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_ArmorPants_ColorBase0";
		descriptionShort="$STR_CfgVehicles_SFM_ArmorPants_ColorBase1";
		model="SFM\Pants\SFM_ArmorPants\SFM_ArmorPants_g.p3d";
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		inventorySlot="Legs";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={2,2};
		itemsCargoSize[]={6,4};
		weight=530;
		ragQuantity=3;
		absorbency=0.60000002;
		heatIsolation=0.60000002;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_ArmorPants\data\ArmorPants_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Pants\SFM_ArmorPants\data\ArmorPants_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Pants\SFM_ArmorPants\SFM_ArmorPants.p3d";
			female="SFM\Pants\SFM_ArmorPants\SFM_ArmorPants.p3d";
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
								"SFM\Pants\SFM_ArmorPants\data\ArmorPants_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Pants\SFM_ArmorPants\data\ArmorPants_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Pants\SFM_ArmorPants\data\ArmorPants_co_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Pants\SFM_ArmorPants\data\ArmorPants_co_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Pants\SFM_ArmorPants\data\ArmorPants_co_destruct.rvmat"
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
	class SFM_ArmorPants: SFM_ArmorPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_ArmorPants\data\ArmorPants_co.paa"
		};
	};
};
