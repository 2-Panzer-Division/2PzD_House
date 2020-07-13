class CfgPatches {
    class 2pzd_mainMenu_Add2PzD {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"2pzd_mainMenu_Core"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Wilhelm Haas";
    };
};

class CfgFunctions {
    class 2pzd_mainmenu {
        tag = "2pzd_mainmenu";
        file = "\2pzd_mainmenu\functions";
        class functions {
            class menuIndex {
                preInit = 1;
            };
        };
    };
};

class RscStandardDisplay;
class RscPicture;

class RscDisplayMain: RscStandardDisplay {
    class ControlsBackground {
        class Picture : RscPicture {
            text = "#(argb,8,8,3)color(0,0,0,0)";
            style = 2096;
            x = safezoneX;
            y = safezoneY;
            w = safezoneW;
            h = safezoneH;
        };
        class 2PzD_Picture0 : Picture {
            idc = 30401;
            text = "\2pzd_mainmenu\images\2PzD_Flag_4K.jpg";
            onLoad = " \
                private _currentIndex = profileNamespace getVariable ['2PzD_Menu_Index',0]; \
                if (_currentIndex < 1 || {_currentIndex > 10}) then { \
                    _this select 0 ctrlShow true; \
                } else { \
                    _this select 0 ctrlShow false; \
                }; \
            ";
        };
        class 2PzD_Picture1 : 2PzD_Picture0 {
            idc = 30401;
            text = "\2pzd_mainmenu\images\Image1.jpg";
            onLoad = " \
                if (profileNamespace getVariable ['2PzD_Menu_Index',0] == 1) then { \
                    _this select 0 ctrlShow true; \
                } else { \
                    _this select 0 ctrlShow false; \
                }; \
            ";
        };
        class 2PzD_Picture2 : 2PzD_Picture0 {
            idc = 30402;
            text = "\2pzd_mainmenu\images\Image2.jpg";
            onLoad = " \
                if (profileNamespace getVariable ['2PzD_Menu_Index',0] == 2) then { \
                    _this select 0 ctrlShow true; \
                } else { \
                    _this select 0 ctrlShow false; \
                }; \
            ";
        };
        class 2PzD_Picture3 : 2PzD_Picture0 {
            idc = 30403;
            text = "\2pzd_mainmenu\images\Image3.jpg";
            onLoad = " \
                if (profileNamespace getVariable ['2PzD_Menu_Index',0] == 3) then { \
                    _this select 0 ctrlShow true; \
                } else { \
                    _this select 0 ctrlShow false; \
                }; \
            ";
        };
        class 2PzD_Picture4 : 2PzD_Picture0 {
            idc = 30404;
            text = "\2pzd_mainmenu\images\Image4.jpg";
            onLoad = " \
                if (profileNamespace getVariable ['2PzD_Menu_Index',0] == 4) then { \
                    _this select 0 ctrlShow true; \
                } else { \
                    _this select 0 ctrlShow false; \
                }; \
            ";
        };
        class 2PzD_Picture5 : 2PzD_Picture0 {
            idc = 30405;
            text = "\2pzd_mainmenu\images\Image5.jpg";
            onLoad = " \
                if (profileNamespace getVariable ['2PzD_Menu_Index',0] == 5) then { \
                    _this select 0 ctrlShow true; \
                } else { \
                    _this select 0 ctrlShow false; \
                }; \
            ";
        };
        class 2PzD_Picture6 : 2PzD_Picture0 {
            idc = 30406;
            text = "\2pzd_mainmenu\images\Image6.jpg";
            onLoad = " \
                if (profileNamespace getVariable ['2PzD_Menu_Index',0] == 6) then { \
                    _this select 0 ctrlShow true; \
                } else { \
                    _this select 0 ctrlShow false; \
                }; \
            ";
        };
        class 2PzD_Picture7 : 2PzD_Picture0 {
            idc = 30407;
            text = "\2pzd_mainmenu\images\Image7.jpg";
            onLoad = " \
                if (profileNamespace getVariable ['2PzD_Menu_Index',0] == 7) then { \
                    _this select 0 ctrlShow true; \
                } else { \
                    _this select 0 ctrlShow false; \
                }; \
            ";
        };
        class 2PzD_Picture8 : 2PzD_Picture0 {
            idc = 30408;
            text = "\2pzd_mainmenu\images\Image8.jpg";
            onLoad = " \
                if (profileNamespace getVariable ['2PzD_Menu_Index',0] == 8) then { \
                    _this select 0 ctrlShow true; \
                } else { \
                    _this select 0 ctrlShow false; \
                }; \
            ";
        };
        class 2PzD_Picture9 : 2PzD_Picture0 {
            idc = 30409;
            text = "\2pzd_mainmenu\images\Image9.jpg";
            onLoad = " \
                if (profileNamespace getVariable ['2PzD_Menu_Index',0] == 9) then { \
                    _this select 0 ctrlShow true; \
                } else { \
                    _this select 0 ctrlShow false; \
                }; \
            ";
        };
        class 2PzD_Picture10 : 2PzD_Picture0 {
            idc = 30410;
            text = "\2pzd_mainmenu\images\Image10.jpg";
            onLoad = " \
                if (profileNamespace getVariable ['2PzD_Menu_Index',0] == 10) then { \
                    _this select 0 ctrlShow true; \
                } else { \
                    _this select 0 ctrlShow false; \
                }; \
            ";
        };
    };
};
