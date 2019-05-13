////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.66
//'now' is Wed Oct 18 12:16:09 2017 : 'file' last modified on Sun Jul 02 21:05:21 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class falcon_actions
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"Extended_Eventhandlers","ACE_Common"};
		version = "0.1";
	};
};
class CfgFunctions
{
	class falcon_actions
	{
		tag = "falcon_actions";
		file = "\falcon_actions\functions";
		class functions
		{
			class checkTeam{};
			class cutGrass{};
			class viewMap{};
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_colorCheck_class
			{
				displayName = "Check Team Color";
				condition = "assignedTeam player != 'MAIN'";
				statement = "call falcon_actions_fnc_checkTeam";
				showDisabled = 0;
			};
			class ACE_machete_class
			{
				displayName = "Cut Grass";
				condition = "stance player == 'CROUCH'";
				statement = "call falcon_actions_fnc_cutGrass";
				showDisabled = 0;
			};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ACE_shareMap_class
				{
					displayName = "View Map";
					condition = " !('ItemMap' in assignedItems player) && ('ItemMap' in assignedItems _target) && (_target distance player <= 3) && (side player == side _target) ";
					statement = "call falcon_actions_fnc_viewMap";
					showDisabled = 0;
				};
			};
		};
	};
};
