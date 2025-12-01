class CfgPatches
{
	class SFM
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
	class SFM
	{
		dir="SFM";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SFM";
		credits="";
		author="SFM";
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
					"SFM/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"SFM/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"SFM/scripts/5_Mission"
				};
			};
		};
	};
};
