class CfgPatches
{
	class SFM_SevaJacket
	{
		units[]=
		{
			"SFM_SevaJacketV1",
			"SFM_SevaJacketV1_Stalker1",
			"SFM_SevaJacketV1_Dolg1",
			"SFM_SevaJacketV1_Svoboda1",
			"SFM_SevaJacketV1_CS1",
			"SFM_SevaJacketV1_Naem1",
			"SFM_SevaJacketV2",
			"SFM_SevaJacketV2_Stalker1",
			"SFM_SevaJacketV2_Dolg1",
			"SFM_SevaJacketV2_Svoboda1",
			"SFM_SevaJacketV2_CS1",
			"SFM_SevaJacketV2_Naem1"
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
	class GorkaEJacket_Flat;
	class SFM_SevaJacketV1_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SevaJacketV1_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaJacketV1_Base1";
		model="SFM\Set\SFM_Seva\Jacket\SFM_SevaJacket_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={2,2};
		absorbency=0.0099999998;
		heatIsolation=1;
		quickBarBonus=2;
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
			"Mask"
		};
		NoSlots[]=
		{
			"Headgear"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava_3holes"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_ca.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_ca.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_ca.rvmat",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_ca.rvmat",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\Jacket\SFM_SevaJacketV1.p3d";
			female="SFM\Set\SFM_Seva\Jacket\SFM_SevaJacketV1.p3d";
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
							1.1,
							
							{
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_ca.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_ca.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_ca.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_ca.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_damage.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_damage.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_damage.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_damage.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_destruct.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_destruct.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_destruct.rvmat"
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
	class SFM_SevaJacketV1: SFM_SevaJacketV1_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		attachments[]=
		{
			"FactionCover"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_ca.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_ca.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
	};
	class SFM_SevaJacketV1_Stalker1: SFM_SevaJacketV1_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_ca.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_ca.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
	};
	class SFM_SevaJacketV1_Dolg1: SFM_SevaJacketV1_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_dolg.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_dolg.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
	};
	class SFM_SevaJacketV1_Svoboda1: SFM_SevaJacketV1_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_free.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_free.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
	};
	class SFM_SevaJacketV1_CS1: SFM_SevaJacketV1_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_clear.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_clear.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
	};
	class SFM_SevaJacketV1_Naem1: SFM_SevaJacketV1_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_merc.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_merc.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
	};
	class SFM_SevaJacketV2_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_SevaJacketV2_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaJacketV2_Base1";
		model="SFM\Set\SFM_Seva\Jacket\SFM_SevaJacket_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={2,2};
		absorbency=0.0099999998;
		heatIsolation=1;
		quickBarBonus=2;
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
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava_3holes"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_ca.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_ca.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_ca.rvmat",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_ca.rvmat",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\Jacket\SFM_SevaJacketV2.p3d";
			female="SFM\Set\SFM_Seva\Jacket\SFM_SevaJacketV2.p3d";
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
							1.1,
							
							{
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_ca.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_ca.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_ca.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_ca.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_damage.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_damage.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_damage.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_damage.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_destruct.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_destruct.rvmat",
								"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_destruct.rvmat"
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
	class SFM_SevaJacketV2: SFM_SevaJacketV2_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		attachments[]=
		{
			"FactionCover"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_ca.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_ca.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
	};
	class SFM_SevaJacketV2_Stalker1: SFM_SevaJacketV2_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_ca.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_ca.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
	};
	class SFM_SevaJacketV2_Dolg1: SFM_SevaJacketV2_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_dolg.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_dolg.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
	};
	class SFM_SevaJacketV2_Svoboda1: SFM_SevaJacketV2_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_free.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_free.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
	};
	class SFM_SevaJacketV2_CS1: SFM_SevaJacketV2_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_clear.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_clear.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
	};
	class SFM_SevaJacketV2_Naem1: SFM_SevaJacketV2_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_merc.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_hoods_merc.paa",
			"SFM\Set\SFM_Seva\Jacket\data\seva_jacket_belt_ca.paa"
		};
	};
};
