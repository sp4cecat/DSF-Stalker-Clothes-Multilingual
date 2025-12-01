class CfgPatches
{
	class SFM_MercJacket
	{
		units[]=
		{
			"SFM_MercJacket",
			"SFM_MercJacket_bandit",
			"SFM_MercJacket_clear",
			"SFM_MercJacket_dolg",
			"SFM_MercJacket_free",
			"SFM_MercJacket_neutral",
			"SFM_MercJacket_green",
			"SFM_MercJacket_green2",
			"SFM_MercJacket_red",
			"SFM_MercJacket_tan",
			"SFM_MercJacket_black",
			"SFM_MercJacket_Brown",
			"SFM_MercJacket_NoSlots"
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
	class GorkaEJacket_Flat;
	class SFM_MercJacket_ColorBase: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_MercJacket_ColorBase0";
		descriptionShort="$STR_CfgVehicles_SFM_MercJacket_ColorBase1";
		model="SFM\Top\SFM_MercJacket\SFM_MercJacket_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=1300;
		itemSize[]={2,2};
		quickBarBonus=2;
		absorbency=0.050000001;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_co.rvmat"
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
								"SFM\Top\SFM_MercJacket\data\MercJacket_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Top\SFM_MercJacket\data\MercJacket_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Top\SFM_MercJacket\data\MercJacket_co_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Top\SFM_MercJacket\data\MercJacket_co_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Top\SFM_MercJacket\data\MercJacket_co_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM\Top\SFM_MercJacket\SFM_MercJacket.p3d";
			female="SFM\Top\SFM_MercJacket\SFM_MercJacket.p3d";
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
	class SFM_MercJacket: SFM_MercJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_co.paa"
		};
	};
	class SFM_MercJacket_bandit: SFM_MercJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_bandit.paa"
		};
	};
	class SFM_MercJacket_clear: SFM_MercJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_clear.paa"
		};
	};
	class SFM_MercJacket_dolg: SFM_MercJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_dolg.paa"
		};
	};
	class SFM_MercJacket_free: SFM_MercJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_free.paa"
		};
	};
	class SFM_MercJacket_neutral: SFM_MercJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_neutral.paa"
		};
	};
	class SFM_MercJacket_green: SFM_MercJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_green.paa"
		};
	};
	class SFM_MercJacket_green2: SFM_MercJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_green2.paa"
		};
	};
	class SFM_MercJacket_red: SFM_MercJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_red.paa"
		};
	};
	class SFM_MercJacket_tan: SFM_MercJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_tan.paa"
		};
	};
	class SFM_MercJacket_black: SFM_MercJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_black.paa"
		};
	};
	class SFM_MercJacket_Brown: SFM_MercJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_brown.paa"
		};
	};
	class SFM_MercJacket_NoSlots: SFM_MercJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		itemsCargoSize[]={2,2};
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_MercJacket\data\MercJacket_co.paa"
		};
	};
};
