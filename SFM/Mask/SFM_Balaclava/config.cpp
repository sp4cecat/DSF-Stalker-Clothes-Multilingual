class CfgPatches
{
	class SFM_Balaclava
	{
		units[]=
		{
			"SFM_Balaclava_Wood",
			"SFM_Balaclava_Tan",
			"SFM_Balaclava_Skull_02",
			"SFM_Balaclava_Skull_01",
			"SFM_Balaclava_MC",
			"SFM_Balaclava_Green",
			"SFM_Balaclava_Flecktarn",
			"SFM_Balaclava_Black",
			"SFM_Balaclava_Clear",
			"SFM_Balaclava_Free",
			"SFM_Balaclava_Voen",
			"SFM_Balaclava_Merc",
			"SFM_Balaclava_Monolith"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class BalaclavaMask_Black;
	class SFM_Balaclava_ColorBase: BalaclavaMask_Black
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_Balaclava_ColorBase0";
		descriptionShort="$STR_CfgVehicles_SFM_Balaclava_ColorBase1";
		model="SFM\Mask\SFM_Balaclava\SFM_Balaclava_g.p3d";
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
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_BaseColor_Flecktarn.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava.rvmat"
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
								"SFM\Mask\SFM_Balaclava\data\Balaclava.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Mask\SFM_Balaclava\data\Balaclava.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Mask\SFM_Balaclava\data\Balaclava_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Mask\SFM_Balaclava\data\Balaclava_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Mask\SFM_Balaclava\data\Balaclava_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM\Mask\SFM_Balaclava\SFM_Balaclava.p3d";
			female="SFM\Mask\SFM_Balaclava\SFM_Balaclava.p3d";
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
	class SFM_Balaclava_Wood: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_BaseColor_WD.paa"
		};
	};
	class SFM_Balaclava_Tan: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_BaseColor_Tan.paa"
		};
	};
	class SFM_Balaclava_Skull_02: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_BaseColor_Skull_02.paa"
		};
	};
	class SFM_Balaclava_Skull_01: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_BaseColor_Skull_01.paa"
		};
	};
	class SFM_Balaclava_MC: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_BaseColor_MC.paa"
		};
	};
	class SFM_Balaclava_Green: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_BaseColor_Green.paa"
		};
	};
	class SFM_Balaclava_Flecktarn: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_BaseColor_Flecktarn.paa"
		};
	};
	class SFM_Balaclava_Black: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_BaseColor_Black.paa"
		};
	};
	class SFM_Balaclava_Clear: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_Clear.paa"
		};
	};
	class SFM_Balaclava_Free: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_Free.paa"
		};
	};
	class SFM_Balaclava_Voen: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_Voen.paa"
		};
	};
	class SFM_Balaclava_Merc: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_Merc.paa"
		};
	};
	class SFM_Balaclava_Monolith: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Mask\SFM_Balaclava\data\Balaclava_01_Monolith.paa"
		};
	};
};
