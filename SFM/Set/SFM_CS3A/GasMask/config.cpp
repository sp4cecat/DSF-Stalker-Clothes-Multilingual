class CfgPatches
{
	class SFM_CS3AGasMask
	{
		units[]=
		{
			"SFM_CS3AGasMask"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"dz_data",
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class GP5GasMask;
	class SFM_CS3AGasMask: GP5GasMask
	{
		scope=2;
		model="SFM\Set\SFM_CS3A\GasMask\SFM_CS3AGasMask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		attachments[]=
		{
			"GasMaskFilter"
		};
		displayName="$STR_CfgVehicles_SFM_CS3AGasMask0";
		descriptionShort="$STR_CfgVehicles_SFM_CS3AGasMask1";
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_CS3A\GasMask\SFM_CS3AGasMask.p3d";
			female="SFM\Set\SFM_CS3A\GasMask\SFM_CS3AGasMask.p3d";
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
								"SFM\Set\SFM_CS3A\GasMask\data\cs3a_respirator_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_CS3A\GasMask\data\cs3a_respirator_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_CS3A\GasMask\data\cs3a_respirator_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_CS3A\GasMask\data\cs3a_respirator_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_CS3A\GasMask\data\cs3a_respirator_destruct.rvmat"
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
