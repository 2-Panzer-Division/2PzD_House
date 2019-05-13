/*
 * Author: Falcon/TinfoilHate
 * Description: Shows which team you're in
 *
 * Arguments:
 * None
 *
 * Return value:
 * None
 *
 * Public: No
 */

private ["_macheteEH"];

mis_macheteDone = false;
_macheteEH = player addEventHandler ["AnimDone", {
		if (_this select 1 == "AinvPknlMstpSlayWrflDnon_medic") then {
			mis_macheteDone = true;
		};
	}];

	[player,"AinvPknlMstpSlayWrflDnon_medic"] remoteExec ['playMove'];

	[{mis_macheteDone}, {
		private ["_cutter"];

		_cutter = "ClutterCutter_small_EP1" createVehicle getPosATL player;
		_cutter setPosATL (player modelToWorld [0,0,0]);
		player removeEventHandler ["AnimDone",_this];

		mis_macheteDone = false;
	},_macheteEH] call CBA_fnc_waitUntilAndExecute;