class CfgPatches
{
	class SFM_ExoBackPack
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
			"SFM_ExoBack"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Clothing;
	class SFM_ExoBack: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_ExoBack0";
		descriptionShort="$STR_CfgVehicles_SFM_ExoBack1";
		model="SFM\Set\SFM_Exoskelet\BackPack\SFM_ExoBackPack_g.p3d";
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
			"Chemlight",
			"WalkieTalkie",
			"ExoBackpack"
		};
		rotationFlags=64;
		repairableWithKits[]={};
		repairCosts[]={};
		weight=-78000;
		itemSize[]={6,8};
		itemsCargoSize[]={};
		allowOwnedCargoManipulation=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\System\data\exo_spine_ca.paa",
			"SFM\Set\SFM_Exoskelet\System\data\exo_legs_ca.paa",
			"SFM\Set\SFM_Exoskelet\System\data\exo_arms_ca.paa",
			"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Exoskelet\System\data\exo_spine_ca.rvmat",
			"SFM\Set\SFM_Exoskelet\System\data\exo_legs_ca.rvmat",
			"SFM\Set\SFM_Exoskelet\System\data\exo_arms_ca.rvmat",
			"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Exoskelet\BackPack\SFM_ExoBackPack.p3d";
			female="SFM\Set\SFM_Exoskelet\BackPack\SFM_ExoBackPack.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=8000;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"SFM\Set\SFM_Exoskelet\System\data\exo_spine_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\System\data\exo_legs_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\System\data\exo_arms_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Exoskelet\System\data\exo_spine_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\System\data\exo_legs_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\System\data\exo_arms_ca.rvmat",
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Exoskelet\System\data\exo_spine_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\System\data\exo_legs_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\System\data\exo_arms_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Exoskelet\System\data\exo_spine_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\System\data\exo_legs_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\System\data\exo_arms_damage.rvmat",
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Exoskelet\System\data\exo_spine_destruct.rvmat",
								"SFM\Set\SFM_Exoskelet\System\data\exo_legs_destruct.rvmat",
								"SFM\Set\SFM_Exoskelet\System\data\exo_arms_destruct.rvmat",
								"SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_destruct.rvmat"
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
class cfgSlots
{
	class Slot_ExoBackpack
	{
		name="ExoBackpack";
		displayName="$STR_CfgSlots_SFM_Slot_ExoBackPack";
		ghostIcon="back";
	};
	class Slot_ExoAcc
	{
		name="ExoAcc";
		displayName="$STR_CfgSlots_SFM_Slot_ExoAcc";
		ghostIcon="back";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyexoattbag: ProxyAttachment
	{
		scope=2;
		inventorySlot="ExoBackpack";
		model="SFM\Set\SFM_Exoskelet\Attach\exoattbag.p3d";
	};
	class Proxyexo_acc_01: ProxyAttachment
	{
		scope=2;
		inventorySlot="ExoAcc";
		model="SFM\Set\SFM_Exoskelet\Attach\exo_acc_01.p3d";
	};
};
