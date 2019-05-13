/*
 * Author: Falcon/TinfoilHate
 * Description: Allows you to use someone else map when close
 *
 * Arguments:
 * None
 *
 * Return value:
 * None
 *
 * Public: No
 */

params ["_target", "_player"];

player linkItem "ItemMap"; openMap true;

[{!visibleMap || (_this select 0) distance (_this select 1) > 3}, {openMap false; player unlinkItem "ItemMap";}, [_target,_player]] call CBA_fnc_waitUntilAndExecute;
