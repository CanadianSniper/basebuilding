class CfgPatches
{
    class CS_ModularBuilding
    {
		units[]={};
		weapons[]={};
        requiredAddons[] = {"DZ_Data"};
    };
};
class CfgMods
{
	class CS_ModularBuilding
	{	
		dir = "ModularBuilding";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "CS_ModularBuilding";
		author = "CanadianSniper";
		authorID = "2039448058";
		version = "1.0";
		extra = 0;
		
		type = "mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		
		class defs
		{
			class gameScriptModule
            {
                value = "";
                files[] = {"ModularBuilding/Scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"ModularBuilding/Scripts/4_World"};
			};
		};
	};
};
