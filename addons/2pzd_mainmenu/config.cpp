class CfgPatches {
    class 2pzd_mainMenu_Core {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"2pzd_spotlight"};
        version = 1.0;
        versionStr = 1.0;
        versionAr[] = {1, 0};
        author = "Wilhelm Haas";
    };
};

class RscStandardDisplay;

class RscDisplayMain: RscStandardDisplay {
    class ControlsBackground {
        delete Picture2;
        delete Picture3;
        delete Picture4;
        /*
        class Picture1 : Picture {
            text = "\fow\fow_ui\data\screen_1.jpg";
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            h = "safezoneH";
        };
        class Picture2 : Picture1 {
            text = "\fow\fow_ui\data\screen_2.jpg";
            onLoad = "(_this select 0) ctrlshow (selectRandom [true,false,true,false])";
        };
        class Picture3 : Picture1 {
            text = "\fow\fow_ui\data\screen_3.jpg";
            onLoad = "(_this select 0) ctrlshow (selectRandom [true,false,true,false])";
        };
        class Picture4 : Picture1 {
            text = "\fow\fow_ui\data\screen_4.jpg";
            onLoad = "(_this select 0) ctrlshow (selectRandom [true,false,true,false])";
        };
        */
    };
};
