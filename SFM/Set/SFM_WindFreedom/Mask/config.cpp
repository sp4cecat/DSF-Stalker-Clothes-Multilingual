class CfgPatches
{
	class SFM_WFGasMask
	{
		units[]=
		{
			"SFM_WFGasMask"
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
	class SFM_WFGasMask: GP5GasMask
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_WFGasMask0";
		descriptionShort="$STR_CfgVehicles_SFM_WFGasMask1";
		itemSize[]={2,1};
		model="SFM\Set\SFM_WindFreedom\Mask\SFM_WFMask3_g.p3d";
		repairableWithKits[]={100};
		repairCosts[]={25};
		attachments[]=
		{
			"GasMaskFilter"
		};
		inventorySlot[]=
		{
			"Mask"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_WindFreedom\Mask\SFM_WFMask3.p3d";
			female="SFM\Set\SFM_WindFreedom\Mask\SFM_WFMask3.p3d";
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_Co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_Co.rvmat"
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
								"SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_Co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_Co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_destruct.rvmat"
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
