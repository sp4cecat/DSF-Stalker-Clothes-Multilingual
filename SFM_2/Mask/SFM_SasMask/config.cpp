class CfgPatches
{
	class SFM_SasMask
	{
		units[]=
		{
			"SFM_BalaclavaSAS1_Black",
			"SFM_BalaclavaSAS1_Military",
			"SFM_BalaclavaSAS2_Black",
			"SFM_BalaclavaSAS2_Military",
			"SFM_BalaclavaSAS3_Black",
			"SFM_BalaclavaSAS3_Military"
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
			"DZ_Weapons_Lights",
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class BalaclavaMask_Black;
	class SFM_BalaclavaSAS1_Base: BalaclavaMask_Black
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_BalaclavaSAS1_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_BalaclavaSAS1_Base1";
		model="SFM_2\Mask\SFM_SasMask\SFM_SasMask_g.p3d";
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
		itemSize[]={2,1};
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
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.rvmat"
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
							1.1,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM_2\Mask\SFM_SasMask\SFM_SasMask1_m.p3d";
			female="SFM_2\Mask\SFM_SasMask\SFM_SasMask1_f.p3d";
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
	class SFM_BalaclavaSAS1_Black: SFM_BalaclavaSAS1_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.paa"
		};
		sfmSwitchInto="SFM_BalaclavaSAS2_Black";
	};
	class SFM_BalaclavaSAS1_Military: SFM_BalaclavaSAS1_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_military_co.paa"
		};
		sfmSwitchInto="SFM_BalaclavaSAS2_Military";
	};
	class SFM_BalaclavaSAS2_Base: BalaclavaMask_Black
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_BalaclavaSAS1_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_BalaclavaSAS2_Base1";
		model="SFM_2\Mask\SFM_SasMask\SFM_SasMask_g.p3d";
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
		itemSize[]={2,1};
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
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.rvmat"
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
							1.1,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM_2\Mask\SFM_SasMask\SFM_SasMask2_m.p3d";
			female="SFM_2\Mask\SFM_SasMask\SFM_SasMask2_f.p3d";
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
	class SFM_BalaclavaSAS2_Black: SFM_BalaclavaSAS2_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.paa"
		};
		sfmSwitchInto="SFM_BalaclavaSAS3_Black";
	};
	class SFM_BalaclavaSAS2_Military: SFM_BalaclavaSAS2_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_military_co.paa"
		};
		sfmSwitchInto="SFM_BalaclavaSAS3_Military";
	};
	class SFM_BalaclavaSAS3_Base: BalaclavaMask_Black
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_BalaclavaSAS1_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_BalaclavaSAS1_Base1";
		model="SFM_2\Mask\SFM_SasMask\SFM_SasMask_g.p3d";
		inventorySlot[]=
		{
			"Mask",
			"Eyewear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask",
			"Eyewear"
		};
		rotationFlags=1;
		weight=130;
		itemSize[]={2,1};
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
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.rvmat"
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
							1.1,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM_2\Mask\SFM_SasMask\SFM_SasMask3_m.p3d";
			female="SFM_2\Mask\SFM_SasMask\SFM_SasMask3_f.p3d";
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
	class SFM_BalaclavaSAS3_Black: SFM_BalaclavaSAS3_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_co.paa"
		};
		sfmSwitchInto="SFM_BalaclavaSAS1_Black";
	};
	class SFM_BalaclavaSAS3_Military: SFM_BalaclavaSAS3_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Mask\SFM_SasMask\data\SAS_balaclava_military_co.paa"
		};
		sfmSwitchInto="SFM_BalaclavaSAS1_Military";
	};
};
