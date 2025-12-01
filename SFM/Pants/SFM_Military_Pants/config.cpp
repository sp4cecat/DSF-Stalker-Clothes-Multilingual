class CfgPatches
{
	class SFM_Military_Pants
	{
		units[]=
		{
			"SFM_MilitaryPants_Black",
			"SFM_MilitaryPants_Blue",
			"SFM_MilitaryPants_Flecktarn",
			"SFM_MilitaryPants_Green",
			"SFM_MilitaryPants_Multicam",
			"SFM_MilitaryPants_Tan",
			"SFM_MilitaryPants_UCP",
			"SFM_MilitaryPants_Urban",
			"SFM_MilitaryPants_Wood",
			"SFM_MilitaryPants_Clear",
			"SFM_MilitaryPants_Free",
			"SFM_MilitaryPants_Mill",
			"SFM_MilitaryPants_Dolg",
			"SFM_MilitaryPants_Merc",
			"SFM_MilitaryPants_Monolith"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Pants"
		};
	};
};
class CfgVehicles
{
	class GorkaPants_Summer;
	class SFM_MilitaryPants_base: GorkaPants_Summer
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_MilitaryPants_base0";
		descriptionShort="$STR_CfgVehicles_SFM_MilitaryPants_base1";
		model="SFM\Pants\SFM_Military_Pants\SFM_Pants_Military_g.p3d";
		itemSize[]={2,2};
		itemsCargoSize[]={6,4};
		heatIsolation=0.69999999;
		absorbency=0;
		quickBarBonus=3;
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_BaseColor_Blue.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_Military.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Pants\SFM_Military_Pants\SFM_Pants_Military_m.p3d";
			female="SFM\Pants\SFM_Military_Pants\SFM_Pants_Military_f.p3d";
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
								"SFM\Pants\SFM_Military_Pants\data\Pants_Military.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Pants\SFM_Military_Pants\data\Pants_Military.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Pants\SFM_Military_Pants\data\Pants_Military_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Pants\SFM_Military_Pants\data\Pants_Military_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Pants\SFM_Military_Pants\data\Pants_Military_destruct.rvmat"
							}
						}
					};
				};
			};
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
	class SFM_MilitaryPants_Black: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_BaseColor_Black.paa"
		};
	};
	class SFM_MilitaryPants_Blue: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_BaseColor_Blue.paa"
		};
	};
	class SFM_MilitaryPants_Flecktarn: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_BaseColor_Flecktarn.paa"
		};
	};
	class SFM_MilitaryPants_Green: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_BaseColor_Green.paa"
		};
	};
	class SFM_MilitaryPants_Multicam: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_BaseColor_Multicam.paa"
		};
	};
	class SFM_MilitaryPants_Tan: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_BaseColor_Tan.paa"
		};
	};
	class SFM_MilitaryPants_UCP: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_BaseColor_UCP.paa"
		};
	};
	class SFM_MilitaryPants_Urban: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_BaseColor_Urban.paa"
		};
	};
	class SFM_MilitaryPants_Wood: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_BaseColor_WD.paa"
		};
	};
	class SFM_MilitaryPants_Clear: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_Clear.paa"
		};
	};
	class SFM_MilitaryPants_Free: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_Free.paa"
		};
	};
	class SFM_MilitaryPants_Mill: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_Voen.paa"
		};
	};
	class SFM_MilitaryPants_Dolg: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_Dolg.paa"
		};
	};
	class SFM_MilitaryPants_Merc: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_Merc.paa"
		};
	};
	class SFM_MilitaryPants_Monolith: SFM_MilitaryPants_base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Pants\SFM_Military_Pants\data\Pants_Monolith.paa"
		};
	};
};
