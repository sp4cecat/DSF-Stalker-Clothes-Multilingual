class CfgPatches
{
	class SFM_TacticalSet
	{
		units[]=
		{
			"SFM_TacticalPants_Brown",
			"SFM_TacticalPants_Bandit",
			"SFM_TacticalSweater_1",
			"SFM_TacticalSweater_2"
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
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class GorkaPants_Summer;
	class GorkaEJacket_Flat;
	class SFM_TacticalPants_Base: GorkaPants_Summer
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_TacticalPants_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_TacticalPants_Base1";
		model="SFM\Set\SFM_Tactical\SFM_TacticalPants_g.p3d";
		inventorySlot="Legs";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={4,3};
		hiddenSelections[]=
		{
			"camo",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Tactical\data\Tactical_Suit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Tactical\data\Tactical_Suit_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Tactical\SFM_TacticalPants_m.p3d";
			female="SFM\Set\SFM_Tactical\SFM_TacticalPants_f.p3d";
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
								"SFM\Set\SFM_Tactical\data\Tactical_Suit_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Tactical\data\Tactical_Suit_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Tactical\data\Tactical_Suit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Tactical\data\Tactical_Suit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Tactical\data\Tactical_Suit_destruct.rvmat"
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
	class SFM_TacticalPants_Brown: SFM_TacticalPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Tactical\data\Tactical_Suit_co.paa"
		};
	};
	class SFM_TacticalPants_Bandit: SFM_TacticalPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Tactical\data\Tactical_Suit_Bandit.paa"
		};
	};
	class SFM_TacticalSweater_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_TacticalSweater_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_TacticalSweater_Base1";
		model="SFM\Set\SFM_Tactical\SFM_TacticalSweater_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={4,3};
		quickBarBonus=2;
		absorbency=0.5;
		heatIsolation=0.89999998;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		simpleHiddenSelections[]=
		{
			"unhidehood",
			"hidehood"
		};
		conflictedSlots[]=
		{
			"Headgear"
		};
		hiddenSelections[]=
		{
			"camo",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Tactical\data\Tactical_Suit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Tactical\data\Tactical_Suit_co.rvmat"
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
								"SFM\Set\SFM_Tactical\data\Tactical_Suit_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Tactical\data\Tactical_Suit_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Tactical\data\Tactical_Suit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Tactical\data\Tactical_Suit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_Tactical\data\Tactical_Suit_destruct.rvmat"
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
		class ClothingTypes
		{
			male="SFM\Set\SFM_Tactical\SFM_TacticalSweater_m.p3d";
			female="SFM\Set\SFM_Tactical\SFM_TacticalSweater_f.p3d";
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
	class SFM_TacticalSweater_1: SFM_TacticalSweater_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Tactical\data\Tactical_Suit_co.paa"
		};
	};
	class SFM_TacticalSweater_2: SFM_TacticalSweater_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Tactical\data\Tactical_Suit_co2.paa"
		};
	};
};
