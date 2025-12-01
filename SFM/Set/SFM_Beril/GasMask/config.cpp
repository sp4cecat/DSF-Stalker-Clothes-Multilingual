class CfgPatches
{
	class SFM_BerilGasMask
	{
		units[]=
		{
			"SFM_GasMask_XM40"
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
	class GP5GasMask;
	class SFM_GasMask_XM40: GP5GasMask
	{
		scope=2;
		repairableWithKits[]={100};
		repairCosts[]={50};
		model="SFM\Set\SFM_Beril\GasMask\SFM_BerilGasMask_g.p3d";
		attachments[]=
		{
			"GasMaskFilter"
		};
		inventorySlot[]=
		{
			"Mask"
		};
		displayName="$STR_CfgVehicles_SFM_GasMask_XM400";
		descriptionShort="$STR_CfgVehicles_SFM_GasMask_XM401";
		class ClothingTypes
		{
			male="SFM\Set\SFM_Beril\GasMask\SFM_BerilGasMask.p3d";
			female="SFM\Set\SFM_Beril\GasMask\SFM_BerilGasMask.p3d";
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Beril\GasMask\data\gasmask_x40_ca.paa",
			"SFM\Set\SFM_Beril\GasMask\data\gasmask_x40_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Beril\GasMask\data\gasmask_x40_co.rvmat",
			"SFM\Set\SFM_Beril\GasMask\data\gasmask_x40_glass.rvmat"
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
							1.1,
							
							{
								"SFM\Set\SFM_Beril\GasMask\data\gasmask_x40_co.rvmat",
								"SFM\Set\SFM_Beril\GasMask\data\gasmask_x40_glass.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Beril\GasMask\data\gasmask_x40_co.rvmat",
								"SFM\Set\SFM_Beril\GasMask\data\gasmask_x40_glass.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Beril\GasMask\data\GASMASK_X40_damage.rvmat",
								"SFM\Set\SFM_Beril\GasMask\data\GASMASK_X40_Glass_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Beril\GasMask\data\GASMASK_X40_damage.rvmat",
								"SFM\Set\SFM_Beril\GasMask\data\GASMASK_X40_Glass_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Beril\GasMask\data\GASMASK_X40_destruct.rvmat",
								"SFM\Set\SFM_Beril\GasMask\data\GASMASK_X40_Glass_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundVoiceType="none";
		soundVoicePriority=5;
	};
};
