class CfgPatches
{
	class SFM_LonerJacket
	{
		units[]=
		{
			"SFM_LonerJacket1",
			"SFM_LonerJacket2",
			"SFM_LonerJacket3",
			"SFM_LonerJacket4",
			"SFM_LonerJacket5",
			"SFM_LonerJacket6",
			"SFM_LonerJacket7",
			"SFM_LonerJacket8"
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
	class SFM_LonerJacket_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_LonerJacket_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_LonerJacket_Base1";
		model="SFM\Top\SFM_LonerJacket\SFM_Loner_Jacket_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=1300;
		itemSize[]={2,2};
		itemsCargoSize[]={6,4};
		quickBarBonus=2;
		absorbency=0.050000001;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_1.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_co.rvmat"
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
								"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_co_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_co_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_co_destruct.rvmat"
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
			male="SFM\Top\SFM_LonerJacket\SFM_Loner_Jacket.p3d";
			female="SFM\Top\SFM_LonerJacket\SFM_Loner_Jacket.p3d";
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
	class SFM_LonerJacket1: SFM_LonerJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_1.paa"
		};
	};
	class SFM_LonerJacket2: SFM_LonerJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_2.paa"
		};
	};
	class SFM_LonerJacket3: SFM_LonerJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_3.paa"
		};
	};
	class SFM_LonerJacket4: SFM_LonerJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_4.paa"
		};
	};
	class SFM_LonerJacket5: SFM_LonerJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_5.paa"
		};
	};
	class SFM_LonerJacket6: SFM_LonerJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_6.paa"
		};
	};
	class SFM_LonerJacket7: SFM_LonerJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_7.paa"
		};
	};
	class SFM_LonerJacket8: SFM_LonerJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_LonerJacket\data\Loners_Jacket_8.paa"
		};
	};
};
