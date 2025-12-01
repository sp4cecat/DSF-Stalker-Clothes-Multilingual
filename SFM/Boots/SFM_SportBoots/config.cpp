class CfgPatches
{
	class SFM_SportBoots
	{
		units[]=
		{
			"SFM_SportBoots1",
			"SFM_SportBoots2",
			"SFM_SportBoots3",
			"SFM_SportBoots4"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"dz_data"
		};
	};
};
class CfgVehicles
{
	class Sneakers_ColorBase;
	class SFM_SportBoots_Base: Sneakers_ColorBase
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SportBoots_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SportBoots_Base1";
		model="SFM\Boots\SFM_SportBoots\SFM_SportBoots_g.p3d";
		inventorySlot[]=
		{
			"Feet"
		};
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		itemSize[]={2,2};
		weight=270;
		durability=0.5;
		varWetMax=0.49000001;
		heatIsolation=0.5;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Boots\SFM_SportBoots\SFM_SportBoots_m.p3d";
			female="SFM\Boots\SFM_SportBoots\SFM_SportBoots_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_destruct.rvmat"
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
					soundSet="AthleticShoes_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="AthleticShoes_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SFM_SportBoots1: SFM_SportBoots_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co.paa"
		};
	};
	class SFM_SportBoots2: SFM_SportBoots_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co2.paa"
		};
	};
	class SFM_SportBoots3: SFM_SportBoots_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co3.paa"
		};
	};
	class SFM_SportBoots4: SFM_SportBoots_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co4.paa"
		};
	};
};
