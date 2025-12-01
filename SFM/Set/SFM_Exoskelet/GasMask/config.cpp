class CfgPatches
{
	class SFM_ExoGasMask
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
			"SFM_ExoGasMask"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class GP5GasMask;
	class SFM_ExoGasMask: GP5GasMask
	{
		scope=2;
		model="SFM\Set\SFM_Exoskelet\GasMask\SFM_ExoGasMask_g.p3d";
		attachments[]={};
		inventorySlot[]=
		{
			"Mask"
		};
		displayName="$STR_CfgVehicles_SFM_ExoGasMask0";
		descriptionShort="$STR_CfgVehicles_SFM_ExoGasMask1";
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		repairableWithKits[]={};
		repairCosts[]={};
		class ClothingTypes
		{
			male="SFM\Set\SFM_Exoskelet\GasMask\SFM_ExoGasMask.p3d";
			female="SFM\Set\SFM_Exoskelet\GasMask\SFM_ExoGasMask.p3d";
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_ca.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_destruct.rvmat"
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
