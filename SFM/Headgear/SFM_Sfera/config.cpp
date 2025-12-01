class CfgPatches
{
	class SFM_Sfera
	{
		units[]=
		{
			"SFM_Sfera_Dolg",
			"SFM_Sfera",
			"SFM_Sfera_Voen"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Headgear"
		};
	};
};
class CfgVehicles
{
	class Mich2001Helmet;
	class SFM_Sfera_Dolg: Mich2001Helmet
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_Sfera_Dolg0";
		descriptionShort="$STR_CfgVehicles_SFM_Sfera_Dolg1";
		model="SFM\Headgear\SFM_Sfera\SFM_Sfera_g.p3d";
		repairableWithKits[]={};
		repairCosts[]={30,25};
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		attachments[]=
		{
			"helmetFlashlight"
		};
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=2;
		weight=1200;
		itemSize[]={4,3};
		noMask=0;
		absorbency=0.34999999;
		heatIsolation=0.80000001;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Sfera\data\spherehelm_duty_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Headgear\SFM_Sfera\data\spherehelm_dolg.rvmat"
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
							1,
							
							{
								"SFM\Headgear\SFM_Sfera\data\spherehelm_dolg.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Headgear\SFM_Sfera\data\spherehelm_dolg.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Headgear\SFM_Sfera\data\spherehelm_co_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Headgear\SFM_Sfera\data\spherehelm_co_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Headgear\SFM_Sfera\data\spherehelm_co_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM\Headgear\SFM_Sfera\SFM_Sfera.p3d";
			female="SFM\Headgear\SFM_Sfera\SFM_Sfera.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SFM_Sfera: Mich2001Helmet
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_Sfera0";
		descriptionShort="$STR_CfgVehicles_SFM_Sfera1";
		model="SFM\Headgear\SFM_Sfera\SFM_Sfera_g.p3d";
		repairableWithKits[]={};
		repairCosts[]={30,25};
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=2;
		weight=1200;
		attachments[]={};
		itemSize[]={4,3};
		noMask=0;
		absorbency=0.34999999;
		heatIsolation=0.80000001;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Sfera\data\spherehelm_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Headgear\SFM_Sfera\data\spherehelm_co.rvmat"
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
								"SFM\Headgear\SFM_Sfera\data\spherehelm_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Headgear\SFM_Sfera\data\spherehelm_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Headgear\SFM_Sfera\data\spherehelm_co.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Headgear\SFM_Sfera\data\spherehelm_co_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Headgear\SFM_Sfera\data\spherehelm_co_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM\Headgear\SFM_Sfera\SFM_Sfera.p3d";
			female="SFM\Headgear\SFM_Sfera\SFM_Sfera.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SFM_Sfera_Voen: Mich2001Helmet
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_Sfera_Voen0";
		descriptionShort="$STR_CfgVehicles_SFM_Sfera_Voen1";
		model="SFM\Headgear\SFM_Sfera\SFM_Sfera_g.p3d";
		repairableWithKits[]={};
		repairCosts[]={30,25};
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		attachments[]={};
		rotationFlags=2;
		weight=1200;
		itemSize[]={4,3};
		noMask=0;
		absorbency=0.34999999;
		heatIsolation=0.80000001;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Sfera\data\spherehelm_sop.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Headgear\SFM_Sfera\data\spherehelm_co.rvmat"
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
								"SFM\Headgear\SFM_Sfera\data\spherehelm_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Headgear\SFM_Sfera\data\spherehelm_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Headgear\SFM_Sfera\data\spherehelm_co.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Headgear\SFM_Sfera\data\spherehelm_co_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Headgear\SFM_Sfera\data\spherehelm_co_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM\Headgear\SFM_Sfera\SFM_Sfera.p3d";
			female="SFM\Headgear\SFM_Sfera\SFM_Sfera.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};
