/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
	[] execVM "core\welcome.sqf"; //Server Credits
};
[] execVM "KRON_Strings.sqf";

StartProgress = true;
