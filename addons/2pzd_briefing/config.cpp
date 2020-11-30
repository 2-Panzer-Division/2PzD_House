
class CfgPatches {
    class 2pzd_briefing {
        author = "Wilhelm Haas";
        name = "2PzD Gear Briefing Tab";
        requiredAddons[] = {
            "A3_Ui_F",
            "Extended_EventHandlers",
            "CBA_MAIN",
            "ACE_Common"
        };
        requiredVersion = 0.1;
        units[] = {};
        url = "https://www.2PzD.net";
        version = "1.0";
        weapons[] = {};
    };
};

class Extended_PostInit_EventHandlers {
    class 2pzd_briefing {
        clientInit = "call ('\2pzd_briefing\XEH_postClientInit.sqf' call SLX_XEH_COMPILE)";
    };
};

class CfgDiary {
    class FixedPages {
        class Units {
            displayName = "";
            indexIcon = "";
            indexTitle = "";
            picture = "";
            recordTitle = "";
            shortcuts[] = {};
            showEmpty = 0;
            skill = "";
            text = "";
            type = "";
        };
    };
};

// Make the briefing tabs wider
class RscControlsGroup;
class RscHTML;
class RscText;

class RscDisplayDiary {
    class Controls {
        class CA_ContentBackgroundd : RscText {
            w = "43 * (((safezoneW / safezoneH) min 1.2) / 40)"; // default is "21.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class CA_DiaryGroup : RscControlsGroup {
            w = "43 * (((safezoneW / safezoneH) min 1.2) / 40)";
            class controls {
                class CA_Diary : RscHTML {
                    w = "41 * (((safezoneW / safezoneH) min 1.2) / 40)"; // default is "20.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
                };
            };
        };
    };
};

class RscDisplayMainMap {
    class controls {
        class CA_ContentBackgroundd : RscText {
            w = "43 * (((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class CA_DiaryGroup : RscControlsGroup {
            w = "43 * (((safezoneW / safezoneH) min 1.2) / 40)";
            class controls {
                class CA_Diary : RscHTML {
                    w = "41 * (((safezoneW / safezoneH) min 1.2) / 40)";
                };
            };
        };
    };
};

class RscDisplayGetReady : RscDisplayMainMap {
    class controls {
        class CA_ContentBackgroundd : RscText {
            w = "43 * (((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class CA_DiaryGroup : RscControlsGroup {
            w = "43 * (((safezoneW / safezoneH) min 1.2) / 40)";
            class controls {
                class CA_Diary : RscHTML {
                    w = "41 * (((safezoneW / safezoneH) min 1.2) / 40)";
                };
            };
        };
    };
};

class RscDisplayServerGetReady : RscDisplayGetReady {
    class controls {
        class CA_ContentBackgroundd : RscText {
            w = "43 * (((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class CA_DiaryGroup : RscControlsGroup {
            w = "43 * (((safezoneW / safezoneH) min 1.2) / 40)";
            class controls {
                class CA_Diary : RscHTML {
                    w = "41 * (((safezoneW / safezoneH) min 1.2) / 40)";
                };
            };
        };
    };
};

class RscDisplayClientGetReady : RscDisplayGetReady {
    class controls {
        class CA_ContentBackgroundd : RscText {
            w = "43 * (((safezoneW / safezoneH) min 1.2) / 40)";
        };
        class CA_DiaryGroup : RscControlsGroup {
            w = "43 * (((safezoneW / safezoneH) min 1.2) / 40)";
            class controls {
                class CA_Diary : RscHTML {
                    w = "41 * (((safezoneW / safezoneH) min 1.2) / 40)";
                };
            };
        };
    };
};
