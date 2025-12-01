class CfgPatches
{
	class SFM_2
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
		weapons[]={};
	};
};
class CfgMods
{
	class SFM_2
	{
		dir="SFM_2";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SFM";
		credits="";
		author="mask17";
		authorID="0";
		version=1;
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World",
			"Game",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"SFM_2/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"SFM_2/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"SFM_2/scripts/5_Mission"
				};
			};
		};
	};
};
