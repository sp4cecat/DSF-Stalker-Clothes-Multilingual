class CfgPatches
{
	class SFM_NVG
	{
		units[]=
		{
			"SFM_NVGoggles"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Gear_Optics"
		};
	};
};
class CfgVehicles
{
	class NVGoggles;
	class SFM_NVGoggles: NVGoggles
	{
		scope=2;
		displayName="$STR_CfgVehicles_NVGoggles0";
		descriptionShort="$STR_CfgVehicles_NVGoggles1";
		model="SFM\Attachment\NVG\NVG.p3d";
		simulation="itemoptics";
		animClass="Binoculars";
		inventorySlot[]=
		{
			"NVG"
		};
		itemSize[]={2,2};
		weight=300;
		rotationFlags=1;
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			distanceZoomMin=500;
			distanceZoomMax=500;
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
		};
		attachments[]=
		{
			"BatteryD"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Attachment\NVG\data\PGNVG_BaseColor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Attachment\NVG\data\NVG.rvmat"
		};
		NVOptic=1;
		simpleHiddenSelections[]=
		{
			"hide"
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
								"SFM\Attachment\NVG\data\NVG.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Attachment\NVG\data\NVG.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Attachment\NVG\data\NVG_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Attachment\NVG\data\NVG_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Attachment\NVG\data\NVG_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
		};
		class AnimationSources
		{
			class hide
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class rotate
			{
				source="user";
				animPeriod=0.30000001;
				initPhase=0;
			};
		};
	};
};
