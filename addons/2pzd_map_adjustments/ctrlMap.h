
class ctrlMap : ctrlDefault {
    colorForestBorder[] = {0, 0, 0, 1};
    colorForest[] = {"146/255", "191/255", "124/255", 0.75};
    colorOutside[]              = {1,1,1,1};
    colorSea[] = {"178/255", "216/255", "254/255", 0.75};

    maxSatelliteAlpha           = 0.85;

    showCountourInterval        = 1;

    //textureComboBoxColor = "#(argb,8,8,3)color(0,0,1,1)";

    //background image
    text                        = "#(argb,8,8,3)color(0.9255,0.9176,0.7333,1)";
    //text                        = "WW2\Core_t\IF_GUI_t\ui_old_paper.paa";

    //roads/paths
    colorGrid[]                 = {"0/255", "0/255", "0/255", 0.6};
    colorGridMap[]              = {"0/255", "0/255", "0/255", 0.6};
    colorMainRoadsFill[]        = {"225/255", "25/255", "25/255", 1};
    colorMainRoads[]            = {"225/255", "25/255", "25/255", };
    colorRoadsFill[]            = {"175/255", "0/255", "0/255", 1};
    colorRoads[]                = {"0/255", "0/255", "0/255", 1};
    colorTracksFill[]           = {"139/255", "69/255", "19/255", 0.45};
    colorTracks[]               = {"139/255", "69/255", "19/255", 0.45};
    colorTrailsFill[]           = {"139/255", "69/255", "19/255", 0.45};
    colorTrails[]               = {"139/255", "69/255", "19/255", 0.25};

    //Contours
    colorMainCountlines[]       = {0.45, 0.25, 0.1, 0.7};
    colorCountlines[]           = {0.572, 0.354, 0.188, 0.3};

    colorMainCountlinesWater[]  = {0.491, 0.577, 0.702, 0.6};
    colorCountlinesWater[]      = {0.491, 0.577, 0.702, 0.3};

    //------------

    class ActiveMarker {
        color[] = {0.3, 0.1, 0.9, 1};
    };
    class Waypoint {
        color[] = {1, 1, 1, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_waypoint_ca.paa";
    };
    class WaypointCompleted : Waypoint {
        icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
    };
    class CustomMark : Waypoint {
        color[] = {"84/255", "254/255", "0/255", 0.4};
        icon = "WW2\Core_t\IF_MapControl_t\map_waypoint_ca.paa";
    };
    class Command : Waypoint {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_waypoint_ca.paa";
    };
    class Bush : Waypoint {
        color[] = {"84/255", "254/255", "0/255", 0.4};
        icon = "WW2\Core_t\IF_MapControl_t\map_bush_ca.paa";
    };
    class SmallTree : Bush {
        color[] = {"84/255", "254/255", "0/255", 0.4};
        icon = "WW2\Core_t\IF_MapControl_t\map_smalltree_ca.paa";
    };
    class Tree : SmallTree {
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        importance = 0.72;
    };
    class Rock : SmallTree {
        color[] = {0.1, 0.1, 0.1, 0.8};
        icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
        importance = 0.3;
    };
    class BusStop : Bush {
        color[] = {0.45, 0.64, 0.33, 0.4};
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
    };
    class FuelStation : Waypoint {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_fuelstation_ca.paa";
    };
    class Hospital : FuelStation {
        color[] = {0.78, 0, 0.05, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_hospital_ca.paa";
    };
    class Church : FuelStation {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_church_ca.paa";
    };
    class Lighthouse : FuelStation {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_lighthouse_ca.paa";
    };
    class Transmitter : FuelStation {
        icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
        color[] = {1, 0, 1, 1};
        coefMax = 1;
        coefMin = 0.85;
        importance = 5;
        size = 24;
    };
    class Power : FuelStation {
        icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
        color[] = {1, 0, 1, 1};
        coefMax = 1;
        coefMin = 0.85;
        importance = 5;
        size = 24;
    };
    class PowerSolar : FuelStation {
        icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
        color[] = {1, 0, 1, 1};
        coefMax = 1;
        coefMin = 0.85;
        importance = 5;
        size = 24;
    };
    class PowerWave : FuelStation {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
        color[] = {1, 0, 1, 1};
        coefMax = 1;
        coefMin = 0.85;
        importance = 5;
        size = 24;
    };
    class PowerWind : FuelStation {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
        color[] = {1, 0, 1, 1};
        coefMax = 1;
        coefMin = 0.85;
        importance = 5;
        size = 24;
    };
    class Quay : FuelStation {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_quay_ca.paa";
    };
    class Watertower : FuelStation {
        color[] = {1, 1, 1, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_waypoint_ca.paa";
    };
    class Cross : Waypoint {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_cross_ca.paa";
    };
    class Chapel : Cross {
        color[] = {0, 0, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_chapel_ca.paa";
    };
    class Shipwreck : Cross {
        icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
        color[] = {0, 0, 0, 1};
    };
    class Bunker : Waypoint {
        color[] = {0, 0, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_bunker_ca.paa";
    };
    class Fortress : Bunker {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_bunker_ca.paa";
    };
    class Fountain : Bunker {
        color[] = {0.2, 0.45, 0.7, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_fountain_ca.paa";
    };
    class Ruin : Waypoint {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_ruin_ca.paa";
    };
    class Stack : Waypoint {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_stack_ca.paa";
    };
    class Tourism : Waypoint {
        color[] = {0, 0, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_tourism_ca.paa";
    };
    class ViewTower : Waypoint {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_viewtower_ca.paa";
    };
}; // End ctrlMap
