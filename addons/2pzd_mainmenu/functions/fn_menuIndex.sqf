/*
 * Author: Wilhelm Haas (Drofseh)
 * Description: Randomly generates a number to select a background image
 *
 * Arguments:
 * None
 *
 * Return value:
 * None
 *
 * Public: No
*/

//Fixed Order
private _currentIndex = profileNamespace getVariable ['2PzD_Menu_Index',0];

if (_currentIndex > 9) then {
    _currentIndex = 1;
} else {
    _currentIndex = _currentIndex + 1;
};

profileNamespace setVariable ['2PzD_Menu_Index', _currentIndex];

// Random Order
//profileNamespace setVariable ['2PzD_Menu_Index', (ceil random 10)];

saveProfileNamespace
