class CfgPatches
{
	class SFM_PS5M_Jacket
	{
		units[]=
		{
			"SFM_PS5M_Jacket_Duty",
			"SFM_PS5M_Jacket_Freedom",
			"SFM_PS5M_Jacket_bandit",
			"SFM_PS5M_Jacket_Merc",
			"SFM_PS5M_Jacket_Monolit",
			"SFM_PS5M_Jacket_Neutral",
			"SFM_PS5M_Jacket_Clear"
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
	class Clothing;
	class SFM_PS5M_Jacket_Base: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_PS5M_Jacket_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_PS5M_Jacket_Base1";
		model="SFM\Set\SFM_PS5M\Jacket\SFM_PS5M_Jacket_g.p3d";
		inventorySlot="Body";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=1700;
		itemSize[]={3,3};
		itemsCargoSize[]={5,5};
		quickBarBonus=3;
		ragQuantity=4;
		absorbency=0.2;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"zbytek"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_PS5M\Jacket\SFM_PS5M_Jacket_m.p3d";
			female="SFM\Set\SFM_PS5M\Jacket\SFM_PS5M_Jacket_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5M\Jacket\data\PS5M_Jacket_bandit.paa"
		};
		simpleHiddenSelections[]=
		{
			"unhidehood",
			"hidehood"
		};
		conflictedSlots[]=
		{
			"Headgear"
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
								"SFM\Set\SFM_PS5M\Jacket\data\PS5M_Jacket.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_PS5M\Jacket\data\PS5M_Jacket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_PS5M\Jacket\data\PS5M_Jacket_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_PS5M\Jacket\data\PS5M_Jacket_badlydamaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Set\SFM_PS5M\Jacket\data\PS5M_Jacket_ruined.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health=0.89999998;
					Blood=0.89999998;
					Shock=0.89999998;
				};
				class Melee
				{
					Health=0.89999998;
					Blood=0.89999998;
					Shock=0.89999998;
				};
				class Infected
				{
					Health=0.89999998;
					Blood=0.89999998;
					Shock=0.89999998;
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
	class SFM_PS5M_Jacket_Duty: SFM_PS5M_Jacket_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5M\Jacket\data\PS5M_Jacket_Freedom.paa"
		};
	};
	class SFM_PS5M_Jacket_Freedom: SFM_PS5M_Jacket_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5M\Jacket\data\PS5M_Jacket_Freedom.paa"
		};
	};
	class SFM_PS5M_Jacket_bandit: SFM_PS5M_Jacket_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5M\Jacket\data\PS5M_Jacket_bandit.paa"
		};
	};
	class SFM_PS5M_Jacket_Merc: SFM_PS5M_Jacket_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5M\Jacket\data\PS5M_Jacket_Merc.paa"
		};
	};
	class SFM_PS5M_Jacket_Monolit: SFM_PS5M_Jacket_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5M\Jacket\data\PS5M_Jacket_Monolit.paa"
		};
	};
	class SFM_PS5M_Jacket_Neutral: SFM_PS5M_Jacket_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5M\Jacket\data\PS5M_Jacket_Neutral.paa"
		};
	};
	class SFM_PS5M_Jacket_Clear: SFM_PS5M_Jacket_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_PS5M\Jacket\data\PS5M_Jacket_Clear.paa"
		};
	};
};
