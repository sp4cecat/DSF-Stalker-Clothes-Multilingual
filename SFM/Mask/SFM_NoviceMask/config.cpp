class CfgPatches
{
	class SFM_NoviceMask
	{
		units[]={};
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
	class BalaclavaMask_Black;
	class SFM_NoviceMask: BalaclavaMask_Black
	{
		displayName="$STR_CfgVehicles_SFM_NoviceMask0";
		descriptionShort="$STR_CfgVehicles_SFM_NoviceMask1";
		model="SFM\Mask\SFM_NoviceMask\SFM_NoviceMask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=1;
		weight=130;
		itemSize[]={3,2};
		ragQuantity=1;
		varWetMax=1;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_NoviceMask\data\bomber_2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Mask\SFM_NoviceMask\data\bomber_2_co.rvmat"
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
								"SFM\Mask\SFM_NoviceMask\data\bomber_2_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Mask\SFM_NoviceMask\data\bomber_2_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Mask\SFM_NoviceMask\data\Bomber_2_co_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Mask\SFM_NoviceMask\data\Bomber_2_co_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Mask\SFM_NoviceMask\data\Bomber_2_co_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM\Mask\SFM_NoviceMask\SFM_NoviceMask.p3d";
			female="SFM\Mask\SFM_NoviceMask\SFM_NoviceMask_f.p3d";
		};
		class Protection
		{
			biological=0.25;
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
};
