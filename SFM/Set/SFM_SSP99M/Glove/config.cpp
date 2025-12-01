class CfgPatches
{
	class SFM_SSP99M_Glove
	{
		units[]=
		{
			"SFM_SSP99M_Gloves"
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
	class TacticalGloves_Black;
	class SFM_SSP99M_Gloves: TacticalGloves_Black
	{
		scope=2;
		displayName="$STR_CfgVehicles_SFM_SSP99M_Gloves0";
		descriptionShort="$STR_CfgVehicles_SFM_SSP99M_Gloves1";
		model="SFM\Set\SFM_SSP99M\Glove\SSP99M_Glove_g.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Gloves"
		};
		rotationFlags=0;
		weight=130;
		itemSize[]={2,2};
		absorbency=0.40000001;
		heatIsolation=0.30000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SSP99M\Glove\data\SSP_glove_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_SSP99M\Glove\data\SSP_glove_co.rvmat"
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
							1.01,
							
							{
								"SFM\Set\SFM_SSP99M\Glove\data\SSP_glove_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_SSP99M\Glove\data\SSP_glove_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_SSP99M\Glove\data\SSP_glove_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_SSP99M\Glove\data\SSP_glove_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"SFM\Set\SFM_SSP99M\Glove\data\SSP_glove_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_SSP99M\Glove\SSP99M_Glove.p3d";
			female="SFM\Set\SFM_SSP99M\Glove\SSP99M_Glove.p3d";
		};
		class Protection
		{
			biological=1;
			chemical=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};
