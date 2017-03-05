#include "..\script_macros.hpp"
/*
    File: fn_initCop.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Cop Initialization file.
*/
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};

if (life_blacklisted) exitWith {
    ["Blacklisted",false,true] call BIS_fnc_endMission;
    sleep 30;
};

if ((FETCH_CONST(life_coplevel) isEqualTo 0) && (FETCH_CONST(life_adminlevel) isEqualTo 0)) then {
    ["NotWhitelisted",false,true] call BIS_fnc_endMission;
    sleep 35;
};


player setVariable ["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.


//Introcam
[] spawn life_fnc_IntroCam;
[] spawn
{
	while{true} do
	{
		
		switch (FETCH_CONST(life_coplevel)) do
        {
            case 1:
            {
                waitUntil {uniform player == "U_Rangemaster"};
                player setObjectTextureGlobal [0,"textures\cadet.paa"];
            };
            default
            {
				waitUntil {uniform player == "U_Rangemaster"};
                player setObjectTextureGlobal [0,"textures\PoliceOfficer.paa"];
            };
        };
		sleep 40;
	};
};

[] spawn
{
	while {true} do
    {
		if(playerSide == west) then
		{
        waitUntil {uniform player == "U_B_CombatUniform_mcam"};
        player setObjectTextureGlobal [0,"textures\swat_shirt.paa"];
		};
	sleep 40;
    };
};

[] spawn
{
	while {true} do
    {
		if(playerSide == west) then
		{
        waitUntil {uniform player == "U_Competitor"};
        player setObjectTextureGlobal [0,"textures\lt_2.paa"];
		};
	sleep 40;
    };
};

[] spawn
{
	while {true} do
    {
		if(playerSide == west) then
		{
       	waitUntil {uniform player == "U_Marshal"};
        player setObjectTextureGlobal [0,"textures\lt_1.paa"];
		};
	sleep 40;
    };
};