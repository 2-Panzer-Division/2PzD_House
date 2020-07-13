class CfgPatches {
    class 2pzd_mainMenu_DeleteFOW {
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

class RscStandardDisplay;

class RscDisplayMain: RscStandardDisplay {
    class Controls {
        delete FOW_version;
        delete LogoFOW;
    };
    class ControlsBackground {
        delete Picture1;
    };
};
