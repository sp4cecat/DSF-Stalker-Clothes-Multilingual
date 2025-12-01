class CfgPatches
{
	class SFM_SevaBag
	{
		units[]=
		{
			"SFM_SevaBag",
			"SFM_SevaBag_Stalker",
			"dzrp_Seva5M_Set_Dolg_GasBag",
			"SFM_SevaBag_Svoboda",
			"SFM_SevaBag_CS",
			"SFM_SevaBag_Naem",
			"SFM_SevaBag_Monolit"
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
	class TaloonBag_ColorBase;
	class SFM_SevaBag: TaloonBag_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SevaBag0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaBag1";
		model="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		simulation="clothing";
		attachments[]=
		{
			"FactionCover"
		};
		rotationFlags=64;
		weight=5000;
		itemSize[]={3,3};
		itemsCargoSize[]={6,3};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		simpleHiddenSelections[]=
		{
			"unhidetube",
			"hidetube"
		};
		conflictedSlots[]=
		{
			"Mask"
		};
		conflictedTypes[]=
		{
			"SFM_SevaGlass"
		};
		varQuantityInit=2500;
		varQuantityMax=2500;
		varQuantityMin=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		stackedUnit="percentage";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
			female="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
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
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class SFM_SevaBag_Stalker: TaloonBag_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SevaBag_Stalker0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaBag_Stalker1";
		model="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		simulation="clothing";
		attachments[]={};
		rotationFlags=64;
		weight=5500;
		itemSize[]={3,3};
		itemsCargoSize[]={6,3};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		simpleHiddenSelections[]=
		{
			"unhidetube",
			"hidetube"
		};
		conflictedSlots[]=
		{
			"Mask"
		};
		conflictedTypes[]=
		{
			"SFM_SevaGlass"
		};
		varQuantityInit=648;
		varQuantityMax=648;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.paa",
			"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
			"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
			female="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
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
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class dzrp_Seva5M_Set_Dolg_GasBag: TaloonBag_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_dzrp_Seva5M_Set_Dolg_GasBag0";
		descriptionShort="$STR_CfgVehicles_dzrp_Seva5M_Set_Dolg_GasBag1";
		model="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		simulation="clothing";
		attachments[]={};
		rotationFlags=64;
		weight=5500;
		itemSize[]={3,3};
		itemsCargoSize[]={6,3};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		simpleHiddenSelections[]=
		{
			"unhidetube",
			"hidetube"
		};
		conflictedSlots[]=
		{
			"Mask"
		};
		conflictedTypes[]=
		{
			"SFM_SevaGlass"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_dolg.paa",
			"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
			"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
			female="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
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
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class SFM_SevaBag_Svoboda: TaloonBag_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SevaBag_Svoboda0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaBag_Svoboda1";
		model="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		simulation="clothing";
		attachments[]={};
		rotationFlags=64;
		weight=5500;
		itemSize[]={3,3};
		itemsCargoSize[]={6,3};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		simpleHiddenSelections[]=
		{
			"unhidetube",
			"hidetube"
		};
		conflictedSlots[]=
		{
			"Mask"
		};
		conflictedTypes[]=
		{
			"SFM_SevaGlass"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_free.paa",
			"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
			"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
			female="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
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
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class SFM_SevaBag_CS: TaloonBag_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SevaBag_CS0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaBag_CS1";
		model="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		simulation="clothing";
		attachments[]={};
		rotationFlags=64;
		weight=5500;
		itemSize[]={3,3};
		itemsCargoSize[]={6,3};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		simpleHiddenSelections[]=
		{
			"unhidetube",
			"hidetube"
		};
		conflictedSlots[]=
		{
			"Mask"
		};
		conflictedTypes[]=
		{
			"SFM_SevaGlass"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_clear.paa",
			"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
			"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
			female="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
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
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class SFM_SevaBag_Naem: TaloonBag_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SevaBag_Naem0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaBag_Naem1";
		model="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		simulation="clothing";
		attachments[]={};
		rotationFlags=64;
		weight=5500;
		itemSize[]={3,3};
		itemsCargoSize[]={6,3};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		simpleHiddenSelections[]=
		{
			"unhidetube",
			"hidetube"
		};
		conflictedSlots[]=
		{
			"Mask"
		};
		conflictedTypes[]=
		{
			"SFM_SevaGlass"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_merc.paa",
			"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
			"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
			female="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
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
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class SFM_SevaBag_Monolit: TaloonBag_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SevaBag_Monolit0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaBag_Monolit1";
		model="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		simulation="clothing";
		attachments[]={};
		rotationFlags=64;
		weight=5500;
		itemSize[]={3,3};
		itemsCargoSize[]={6,3};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		simpleHiddenSelections[]=
		{
			"unhidetube",
			"hidetube"
		};
		conflictedSlots[]=
		{
			"Mask"
		};
		conflictedTypes[]=
		{
			"SFM_SevaGlass"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_monolit.paa",
			"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
			"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
			female="SFM\Set\SFM_Seva\GasBag\SFM_SevaBag.p3d";
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
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_ca.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_damage.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Seva\GasBag\data\seva_back_destruct.rvmat",
								"SFM\Set\SFM_Sunrise\GasBag\sunrisem1_gasbag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
};
