class CfgPatches
{
	class SFM_Vesna
	{
		units[]=
		{
			"SFM_vesna_Hoodie_Stalker",
			"SFM_vesna_Hoodie_Legend"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"dz_data"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class GorkaEJacket_Flat;
	class SFM_vesna_Hoodie_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="$STR_CfgVehicles_SFM_vesna_Hoodie_Base0";
		descriptionShort="$STR_CfgVehicles_SFM_vesna_Hoodie_Base1";
		model="SFM\Top\Vesna\SFM_Vesna_g.p3d";
		inventorySlot="Body";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=10000;
		itemSize[]={2,2};
		itemsCargoSize[]={6,4};
		quickBarBonus=1;
		ragQuantity=4;
		absorbency=0;
		heatIsolation=1;
		repairCosts[]={30,25};
		soundAttType="HeavyJacket";
		simpleHiddenSelections[]=
		{
			"unhidehood",
			"hidehood"
		};
		conflictedSlots[]=
		{
			"Headgear"
		};
		noVest=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="SFM\Top\Vesna\SFM_Vesna.p3d";
			female="SFM\Top\Vesna\SFM_Vesna.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\Vesna\data\vesna_h_vest_co.paa",
			"SFM\Top\Vesna\data\vesna_j_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Top\Vesna\data\vesna_h_vest_co.rvmat",
			"SFM\Top\Vesna\data\vesna_j_co.rvmat"
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
								"SFM\Top\Vesna\data\vesna_h_vest_co.rvmat",
								"SFM\Top\Vesna\data\vesna_j_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Top\Vesna\data\vesna_h_vest_co.rvmat",
								"SFM\Top\Vesna\data\vesna_j_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Top\Vesna\data\vesna_h_vest_damage.rvmat",
								"SFM\Top\Vesna\data\vesna_j_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Top\Vesna\data\vesna_h_vest_damage.rvmat",
								"SFM\Top\Vesna\data\vesna_j_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Top\Vesna\data\vesna_h_vest_destruct.rvmat",
								"SFM\Top\Vesna\data\vesna_j_destruct.rvmat"
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
	class SFM_vesna_Hoodie_Stalker: SFM_vesna_Hoodie_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\Vesna\data\vesna_h_vest_co.paa",
			"SFM\Top\Vesna\data\vesna_j_co.paa"
		};
	};
	class SFM_vesna_Hoodie_Legend: SFM_vesna_Hoodie_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\Vesna\data\vesna_h_vest_original.paa",
			"SFM\Top\Vesna\data\vesna_j_original.paa"
		};
	};
};
