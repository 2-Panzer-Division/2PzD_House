
class CfgPatches {
    class 2pzd_map_adjustments {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        units[] = {};
        magazineWell[] = {};
        magazines[] = {};
        weapons[] = {};
        requiredAddons[] = {"Haas_WWII_Rebalance","Font_UraniaCzech"};
    };
}; // End CfgPatches

class ctrlDefault;

#include "ctrlMap.h"

class RscControlsGroupNoScrollbars;

#include "RscMapControl.h"

class RscMapControlEmpty : RscMapControl {};

class RscCustomInfoMiniMap {
    class controls {
        class MiniMap : RscControlsGroupNoScrollbars {
            class Controls {
                class CA_MiniMap : RscMapControl {};
            };
        };
    };
}; // End RscCustomInfoMiniMap

class RscCustomInfoSlingLoad {
    class controlsBackground {
        class SLABackgroundGroup : RscControlsGroupNoScrollbars {
            class Controls {
                class Map : RscMapControlEmpty {};
            };
        };
    };
}; // End RscCustomInfoSlingLoad

class RscMiniMap {
    class controlsBackground {
        class MiniMap : RscControlsGroupNoScrollbars {
            class Controls {
                class CA_MiniMap : RscMapControl {};
            };
        };
        class GroupIndicator : RscMapControl {};
    };
}; // End RscMiniMap

class RscSlingLoadAssistant {
    class controlsBackground {
        class SLABackgroundGroup : RscControlsGroupNoScrollbars {
            class Controls {
                class Map : RscMapControlEmpty {};
            };
        };
    };
}; // End RscSlingLoadAssistant

#include "RscTestControlTypes.h"

class RscDisplayStrategicMap {
    class controlsBackground {
        class Map : RscMapControl {};
    };
}; // End RscDisplayStrategicMap

class RscDisplayEGSpectator {
    class Controls {
        class MapGroup : RscControlsGroupNoScrollbars {
            class controls {
                class Map: RscMapControl {};
            };
        };
    };
}; // End RscDisplayEGSpectator

class RscTitles {
    class RscGroupIndicator {
        class Controls {
            class MiniMap: RscMapControl {};
        };
    };
}; // End RscDisplayEGSpectator

class RscStandardDisplay;

class RscDisplayArtillery : RscStandardDisplay {
    class controlsBackground {
        class CA_TSMap : RscMapControl {
            x="SafeZoneX";
            y="SafeZoneY";
            w="safeZoneW -  0.2*1.5";
            h="safeZoneH";

            maxSatelliteAlpha = 0;

            class Tree {
                color[] = {"84/255", "254/255", "0/255", 0};
                size = 12;
                importance = "0.9 * 16 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
                icon = "WW2\Core_t\IF_MapControl_t\map_tree_ca.paa";
            };
            class SmallTree {
                color[] = {"84/255", "254/255", "0/255", 0};
                size = 12;
                importance = "0.6 * 12 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
                icon = "WW2\Core_t\IF_MapControl_t\map_smalltree_ca.paa";
            };
            class Bush {
                color[] = {"84/255", "254/255", "0/255", 0};
                coefMin = 0.25;
                coefMax = 4;
                icon = "WW2\Core_t\IF_MapControl_t\map_bush_ca.paa";
                size = 14;
                importance = "0.2 * 14 * 0.05";
            };
        };
    };
}; // End RscDisplayArtillery
