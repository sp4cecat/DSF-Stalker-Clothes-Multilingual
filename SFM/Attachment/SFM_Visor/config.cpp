class CfgPatches
{
	class SFM_Visor
	{
		units[]=
		{
			"SFM_Altyn_Visor_Green",
			"SFM_ZSH1_Visor_Green",
			"SFM_ZSH1_Visor_Black"
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
	class GorkaHelmetVisor;
	class SFM_Altyn_Visor_Base: GorkaHelmetVisor
	{
		scope=0;
		displayName="$STR_CfgVehicles_GorkaHelmetVisor0";
		descriptionShort="$STR_CfgVehicles_GorkaHelmetVisor1";
		model="SFM\Attachment\SFM_Visor\SFM_Visor_altyn.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		rotationFlags=34;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"Glass"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_GREEN.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Headgear\SFM_Altyn\data\SFM_Altyn.rvmat"
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
								"SFM\Headgear\SFM_Altyn\data\SFM_Altyn.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Headgear\SFM_Altyn\data\SFM_Altyn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Headgear\SFM_Altyn\data\SFM_Altyn_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SFM_Altyn_Visor_Green: SFM_Altyn_Visor_Base
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\SFM\Headgear\SFM_Altyn\data\SFM_Altyn_GREEN.paa"
		};
	};
	class SFM_ZSH1_Visor_Base: GorkaHelmetVisor
	{
		scope=0;
		displayName="$STR_CfgVehicles_GorkaHelmetVisor0";
		descriptionShort="$STR_CfgVehicles_GorkaHelmetVisor1";
		model="SFM\Attachment\SFM_Visor\SFM_Visor_zsh.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		rotationFlags=34;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"Glass"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_ZSH1\data\ZSH1_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Headgear\SFM_ZSH1\data\ZSH1.rvmat"
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
								"SFM\Headgear\SFM_ZSH1\data\ZSH1.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Headgear\SFM_ZSH1\data\ZSH1.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Headgear\SFM_ZSH1\data\ZSH1_Damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Headgear\SFM_ZSH1\data\ZSH1_Damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Headgear\SFM_ZSH1\data\ZSH1_Destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SFM_ZSH1_Visor_Green: SFM_ZSH1_Visor_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_ZSH1\data\ZSH1_CO.paa"
		};
	};
	class SFM_ZSH1_Visor_Black: SFM_ZSH1_Visor_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_ZSH1\data\ZSH1_CO2.paa"
		};
	};
};
