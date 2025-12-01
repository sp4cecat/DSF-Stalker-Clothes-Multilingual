class CfgPatches
{
	class SFM_SevaGlass
	{
		units[]=
		{
			"SFM_SevaGlass"
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
	class GP5GasMask;
	class SFM_SevaGlass: GP5GasMask
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SevaGlass0";
		descriptionShort="$STR_CfgVehicles_SFM_SevaGlass1";
		model="SFM\Set\SFM_Seva\Glass\SFM_SevaGlass_g.p3d";
		repairableWithKits[]={100};
		repairCosts[]={50};
		attachments[]={};
		inventorySlot[]=
		{
			"Mask"
		};
		NoSlots[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=2;
		weight=700;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0.80000001;
		visibilityModifier=0.89999998;
		noHelmet=1;
		noEyewear=1;
		headSelectionsToHide[]=
		{
			"Clipping_GP5GasMask"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Seva\Glass\data\visor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Seva\Glass\data\visor_ca.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"SFM\Set\SFM_Seva\Glass\data\visor_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Seva\Glass\data\visor_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Seva\Glass\data\visor_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Seva\Glass\data\visor_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"SFM\Set\SFM_Seva\Glass\data\visor_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Seva\Glass\SFM_SevaGlass.p3d";
			female="SFM\Set\SFM_Seva\Glass\SFM_SevaGlass.p3d";
		};
		class Protection
		{
			biological=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="none";
		soundVoicePriority=5;
	};
};
