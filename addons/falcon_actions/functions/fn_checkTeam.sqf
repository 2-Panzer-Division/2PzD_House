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

private ["_str"];

_str = "";
switch (assignedTeam player) do {
		case "BLUE": {_str = "<t size='1.5'>You are in <br/><t color='#0000FF'>BLUE</t> team.</t> "};
		case "RED": {_str = "<t size='1.5'>You are in <br/><t color='#FF0000'>RED</t> team.</t> "};
		case "GREEN": {_str = "<t size='1.5'>You are in <br/><t color='#00FF00'>GREEN</t> team.</t> "};
		case "YELLOW": {_str = "<t size='1.5'>You are in <br/><t color='#FFFF00'>YELLOW</t> team.</t> "};
		default { };
};
hint parseText _str;