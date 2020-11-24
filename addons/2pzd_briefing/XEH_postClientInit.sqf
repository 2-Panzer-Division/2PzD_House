private ["_newIndex","_playerSide","_grpArray","_groupId"];

_newIndex = player createDiarySubject ["GearIndex","Loadouts"];
_playerSide = side group player;
_grpArray = [];
_groupId = "";

{
    private _groupSide = side _x;
    if (_groupSide == _playerSide) then {
        private _groupleader = leader _x;
        private _groupID = groupID _x;
        private _show = false;
        private _units = units _x;
        private _grpText = "";
        private _color = "#FFFFFF";

        switch (_groupSide) do {
             case west : {_color = "#0080FF"};
             case east : {_color = "#B40404"};
             case independent : {_color = "#298A08"};
             case civilian : {_color = "#8904B1"};
        };

        // diag_log _x;
        // diag_log _groupID;

        {
            if ((alive _x) && ((isMultiplayer) && {_x in playableUnits} || ((!isMultiplayer) && {_x in switchableUnits}))) then {
                _show = true;

                // Get unit description
                private _name = "";
                private _isLeader = (_x == _groupleader);
                private _unitRole = roleDescription _x;

                // diag_log _x;
                // diag_log _isLeader;
                // diag_log _unitRole;

                if (_isLeader) then {
                    if (["@",_unitRole] call BIS_fnc_inString) then {
                        // If the description has an @ (presumably from the CBA Group Name setup)
                        // then it will split the string at the @, swap each half, and
                        // join them again with an | in the middle.
                        // "Team Leader@Team 1" will become "Team 1 | Team Leader" in the ORBAT
                        _unitRole = _unitRole splitString "@";
                        _groupID = _unitRole select 1;
                        _unitRole = _unitRole select 0;
                    } else {
                        // If no @ is found, then it will just use the description string as written
                        // If the any of the above variables are nil then things break (either because the leader is AI or because it wasn't slotted)
                        // This will force _leaderRole to a value that can be output as part of _orbatText
                        if (isNil _unitRole) then {_unitRole = "Leader"};
                        if (_unitRole == "") then {_unitRole = "Leader"};
                    };
                    _name = format ["<font color='%3' size='16'>%1 - %2</font><br/>", _unitRole, name _x, _color];
                    _grpText = format ["<font color='%3' size='18'>%1%2%</font><br/><br/>", _grpText, _groupID, _color];
                    // diag_log _groupID;
                    // diag_log _name;
                    // diag_log _unitRole;
                } else {
                    if (["@",_unitRole] call BIS_fnc_inString) then {
                        _unitRole = _unitRole splitString "@";
                        _unitRole = _unitRole select 0;
                    } else {
                        if (isNil _unitRole) then {_unitRole = "Group Member"};
                        if (_unitRole == "") then {_unitRole = "Group Member"};
                    };
                    _name = format ["<font size='16'>%1 | %2</font><br/>", _unitRole, name _x];
                    // diag_log _name;
                    // diag_log _unitRole;
                };

                // Creating briefing text
                _grpText = _grpText + format ["%1%2 kg / %3 lbs<br/><br/>", _name, [_x] call ace_common_fnc_getWeight, [_x, true] call ace_common_fnc_getWeight];

                // Loadouts

                //Containers
                private _uniform = uniform _x;
                private _vest = vest _x;
                private _headgear = headgear _x;
                private _backpack = backpack _x;

                // diag_log _uniform;
                // diag_log _vest;
                // diag_log _headgear;
                // diag_log _backpack;

                if (_uniform != "") then {
                    private _name = getText(configFile >> "CfgWeapons" >> _uniform >> "displayName");
                    // diag_log _name;
                    private _image = getText(configFile >> "CfgWeapons" >> _uniform >> "picture");
                    // diag_log _image;
                    if ((_image find ".paa") == -1) then {_image = _image + ".paa"};
                    // diag_log _image;
                    if (_image == ".paa") then {_image = "P:\a3\data_f\Unknown_object.paa"};
                    // diag_log _image;
                    _grpText = _grpText + format ["<img image='%1' width='50' height='50'/><execute expression='systemChat ""Item: %2""'>*</execute>  ", _image, _name];
                };

                if (_vest != "") then {
                    private _name = getText(configFile >> "CfgWeapons" >> _vest >> "displayName");
                    // diag_log _name;
                    private _image = getText(configFile >> "CfgWeapons" >> _vest >> "picture");
                    // diag_log _image;
                    // diag_log _image;
                    if ((_image find ".paa") == -1) then {_image = _image + ".paa"};
                    // diag_log _image;
                    if (_image == ".paa") then {_image = "P:\a3\data_f\Unknown_object.paa"};
                    _grpText = _grpText + format ["<img image='%1' width='50' height='50'/><execute expression='systemChat ""Item: %2""'>*</execute>  ", _image, _name];
                    // diag_log _image;
                };

                if (_backpack != "") then {
                    private _name = getText(configFile >> "CfgVehicles" >> _backpack >> "displayName");
                    // diag_log _name;
                    private _image = getText(configFile >> "CfgVehicles" >> _backpack >> "picture");
                    // diag_log _image;
                    if ((_image find ".paa") == -1) then {_image = _image + ".paa"};
                    // diag_log _image;
                    if (_image == ".paa") then {_image = "P:\a3\data_f\Unknown_object.paa"};
                    // diag_log _image;
                    _grpText = _grpText + format ["<img image='%1' width='50' height='50'/><execute expression='systemChat ""Item: %2""'>*</execute>  ", _image, _name];
                    // diag_log _image;
                };

                if (_headgear != "") then {
                    private _name = getText(configFile >> "CfgWeapons" >> _headgear >> "displayName");
                    // diag_log _name;
                    private _image = getText(configFile >> "CfgWeapons" >> _headgear >> "picture");
                    // diag_log _image;
                    if ((_image find ".paa") == -1) then {_image = _image + ".paa"};
                    // diag_log _image;
                    if (_image == ".paa") then {_image = "P:\a3\data_f\Unknown_object.paa"};
                    // diag_log _image;
                    _grpText = _grpText + format ["<img image='%1' width='50' height='50'/><execute expression='systemChat ""Item: %2""'>*</execute>  ", _image, _name];
                    // diag_log _image;
                };

                // Assigned Items
                private _items = assignedItems _x - [""];
                // diag_log _items;
                if (count _items > 0) then {
                    while {!(_items isEqualTo [])} do {
                        private _item = _items select 0;
                        private _itemCount = {_x == _item} count _items;
                        private _conf = configFile >> "CfgWeapons" >> _item;
                        private _name = getText(_conf >> "displayName");
                        // diag_log _name;
                        private _image = getText(_conf >> "picture");
                        // diag_log _image;
                        if ((_image find ".paa") == -1) then {_image = _image + ".paa"};
                        // diag_log _image;
                        if (_image == ".paa") then {_image = "P:\a3\data_f\Unknown_object.paa"};
                        // diag_log _image;
                        _grpText = _grpText + format ["<img image='%1' width='50' height='50'/><execute expression='systemChat ""Item: %2""'>*</execute>  ", _image, _name];
                        _items = _items - [_item];
                    };
                };
                _grpText = _grpText + "<br/>";

                //Weapons
                private _weaponPrimary = primaryWeapon _x;
                private _weaponPrimaryItems = primaryWeaponItems _x;
                private _weaponHandgun = handgunWeapon _x;
                private _weaponHandgunItems = handgunItems _x;
                private _weaponLauncherItems = secondaryWeaponItems _x;
                private _weaponLauncher = secondaryWeapon _x;

                // diag_log _weaponPrimary;
                // diag_log _weaponHandgun;
                // diag_log _weaponLauncher;
                // diag_log _weaponPrimaryItems;
                // diag_log _weaponHandgunItems;
                // diag_log _weaponLauncherItems;

                // Primary weapon
                if (_weaponPrimary != "") then {
                    private _i = 0;
                    private _conf = configFile >> "CfgWeapons" >> _weaponPrimary;
                    private _name = getText(_conf >> "displayName");
                    private _image = getText(_conf >> "picture");
                    // diag_log _name;
                    // diag_log _image;

                    if ((_image find ".paa") == -1) then {_image = _image + ".paa"};
                    if (_image == ".paa") then {_image = "P:\a3\data_f\Unknown_object.paa"};

                    _grpText = _grpText + format ["Primary: %1<br/><img image='%2' width='100' height='50'/>", _name, _image];

                    {
                        _weaponItem = _weaponPrimaryItems select _i;
                        // diag_log _weaponItem;
                        if (_weaponItem != "") then {
                            private _conf = configFile >> "CfgWeapons" >> _weaponItem;
                            private _image = getText(_conf >> "picture");
                            if ((_image find ".paa") == -1) then {_image = _image + ".paa"};
                            if (_image == ".paa") then {_image = "P:\a3\data_f\Unknown_object.paa"};
                            _grpText = _grpText + format ["<img image='%1' width='50' height='50'/>", _image];
                        };
                        _i = _i + 1;
                    } forEach _weaponPrimaryItems;
                    _grpText = _grpText + "<br/>";
                };

                // Handgun
                if (_weaponHandgun != "") then {
                    private _i = 0;
                    private _conf = configFile >> "CfgWeapons" >> _weaponHandgun;
                    private _name = getText(_conf >> "displayName");
                    private _image = getText(_conf >> "picture");
                    // diag_log _name;
                    // diag_log _image;

                    if ((_image find ".paa") == -1) then {_image = _image + ".paa"};
                    if (_image == ".paa") then {_image = "P:\a3\data_f\Unknown_object.paa"};

                    _grpText = _grpText + format ["Handgun: %1<br/><img image='%2' width='50' height='50'/>", _name, _image];

                    {
                        _weaponItem = _weaponHandgunItems select _i;
                        // diag_log _weaponItem;
                        if (_weaponItem != "") then {
                            private _conf = configFile >> "CfgWeapons" >> _weaponItem;
                            private _image = getText(_conf >> "picture");
                            if ((_image find ".paa") == -1) then {_image = _image + ".paa"};
                            if (_image == ".paa") then {_image = "P:\a3\data_f\Unknown_object.paa"};
                            _grpText = _grpText + format ["<img image='%1' width='50' height='50'/>", _image];
                        };
                        _i = _i + 1;
                    } forEach _weaponHandgunItems;
                    _grpText = _grpText + "<br/>";
                };

                // Secondary
                if (_weaponLauncher != "") then {
                    private _i = 0;
                    private _conf = configFile >> "CfgWeapons" >> _weaponLauncher;
                    private _name = getText(_conf >> "displayName");
                    private _image = getText(_conf >> "picture");
                    // diag_log _name;
                    // diag_log _image;

                    if ((_image find ".paa") == -1) then {_image = _image + ".paa"};
                    if (_image == ".paa") then {_image = "P:\a3\data_f\Unknown_object.paa"};

                    _grpText = _grpText + format ["Launcher: %1<br/><img image='%2' width='100' height='50'/>", _name, _image];

                    {
                        _weaponItem = _weaponLauncherItems select _i;
                        // diag_log _weaponItem;
                        if (_weaponItem != "") then {
                            private _conf = configFile >> "CfgWeapons" >> _weaponItem;
                            private _image = getText(_conf >> "picture");
                            if ((_image find ".paa") == -1) then {_image = _image + ".paa"};
                            if (_image == ".paa") then {_image = "P:\a3\data_f\Unknown_object.paa"};
                            _grpText = _grpText + format ["<img image='%1' width='50' height='50'/>", _image];
                        };
                        _i = _i + 1;
                    } forEach _weaponLauncherItems;
                    _grpText = _grpText + "<br/>";
                };

                _grpText = _grpText + "Magazines and Items:<br/>";

                // Magazines
                private _magazines = (magazines _x - [""]) + (primaryWeaponMagazine _x - [""]) + (handgunMagazine _x - [""]) + (secondaryWeaponMagazine _x - [""]);
                // diag_log _magazines;
                private _items = (uniformItems _x - [""]) + (vestItems _x - [""]) + (backpackItems _x - [""]);
                // diag_log _items;
                private _items = _items - _magazines;
                // diag_log _items;

                private _i = 0;
                if (count _magazines > 0) then {
                    while {!(_magazines isEqualTo [])} do {
                        private _magazine = _magazines select 0;
                        private _itemCount = {_x == _magazine} count _magazines;
                        private _conf = configFile >> "CfgMagazines" >> _magazine;
                        private _name = getText(_conf >> "displayName");
                        private _image = getText(_conf >> "picture");
                        // diag_log _name;
                        // diag_log _image;
                        if ((_image find ".paa") == -1) then {_image = _image + ".paa"};
                        // diag_log _image;
                        if (_image == ".paa") then {_image = "P:\a3\data_f\Unknown_object.paa"};
                        // diag_log _image;
                        _grpText = _grpText + format ["<img image='%1' width='32' height='32'/><execute expression='systemChat ""Item: %2""'>x%3</execute>  ", _image, _name, _itemCount];
                        _magazines = _magazines - [_magazine];
                        // diag_log _magazines;
                        _i = _i + 1;
                        if ((_i mod 16) == 0) then {_grpText = _grpText + "<br/>";};
                    };
                };

                // Items
                // diag_log _items;
                if (count _items > 0) then {
                    while {!(_items isEqualTo [])} do {
                        private _item = _items select 0;
                        private _itemCount = {_x == _item} count _items;
                        private _conf = configFile >> "CfgWeapons" >> _item;
                        private _name = getText(_conf >> "displayName");
                        // diag_log _name;
                        private _image = getText(_conf >> "picture");
                        // diag_log _image;
                        if ((_image find ".paa") == -1) then {_image = _image + ".paa"};
                        // diag_log _image;
                        if (_image == ".paa") then {_image = "P:\a3\data_f\Unknown_object.paa"};
                        // diag_log _image;
                        _grpText = _grpText + format ["<img image='%1' width='32' height='32'/><execute expression='systemChat ""Item: %2""'>x%3</execute>  ", _image, _name, _itemCount];
                        _items = _items - [_item];
                        _i = _i + 1;
                        if ((_i mod 16) == 0) then {_grpText = _grpText + "<br/>";};
                    };
                };

                _grpText = _grpText + "<br/>__________________________________________________<br/><br/>";
            };
        } foreach _units;

        if (group _groupleader == group player) then {
            _groupID = format ["%1 (Your Squad)", _groupID];
        };

        if (_show) then {_grpArray set [count _grpArray,["GearIndex", [_groupID, _grpText]]]};
        // diag_log _grpArray;
    };
} foreach allGroups;

while {count _grpArray > 0} do {
    _wrekt = _grpArray call BIS_fnc_arrayPop;
    player createDiaryRecord _wrekt;
};
