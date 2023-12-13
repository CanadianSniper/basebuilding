class CfgPatches
{
	class CS_Wood
	{
		units[]={""};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Wood_Wall: HouseNoDestruct
	{
		scope = 2;
		model = "ModularBuilding\Wood\Wood_Wall.p3d";
	};
	class CS_Wood_Floor: HouseNoDestruct
	{
		scope = 2;
		model = "ModularBuilding\Wood\Wood_Floor.p3d";
	};
	class CS_Wood_Door: HouseNoDestruct
	{
		scope = 2;
		model = "ModularBuilding\Wood\Wood_Door.p3d";
		class Doors
        {
            class Door1
            {
                displayName = "Door1";
                component = "Door1";
                soundPos = "Door1";
                animPeriod = 1.5;
                initPhase = 0.0;
                initOpened = 0.0;
				soundOpen = "doordoubleopen_01";
				soundClose = "doordoubleclose_06";
				soundLocked = "doorwoodrattle_0";
                soundOpenABit = "doorwoodlargeopenabit_1";
            };
		};
	};
	class CS_Wood_Window: HouseNoDestruct
	{
		scope = 2;
		model = "ModularBuilding\Wood\Wood_Window.p3d";
	};
	class CS_Wood_Gate: HouseNoDestruct
	{
		scope = 2;
		model = "ModularBuilding\Wood\Wood_Gate.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "Twin Doors 1";
				component = "doorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 2.0;
				initPhase = 0.0;
				initOpened = 0.0;
				soundOpen = "doordoubleopen_01";
				soundClose = "doordoubleclose_06";
				soundLocked = "doorwoodrattle_0";
			};
		};
		
	};
	class CS_Wood_Stairs: HouseNoDestruct
	{
		scope = 2;
		model = "ModularBuilding\Wood\Wood_Stairs.p3d";
	};
	class CS_Wood_Ladder: HouseNoDestruct
	{
		scope = 2;
		model = "ModularBuilding\Wood\Wood_Ladder.p3d";
	};
	class CS_Wood_FloorPortLarge: HouseNoDestruct
	{
		scope = 2;
		model = "ModularBuilding\Wood\Wood_FloorPortLarge.p3d";
	};
	class CS_Wood_FloorPortSmall: HouseNoDestruct
	{
		scope = 2;
		model = "ModularBuilding\Wood\Wood_FloorPortSmall.p3d";
	};
	class CS_Wood_Column: HouseNoDestruct
	{
		scope = 2;
		model = "ModularBuilding\Wood\Wood_Column.p3d";
	};
};