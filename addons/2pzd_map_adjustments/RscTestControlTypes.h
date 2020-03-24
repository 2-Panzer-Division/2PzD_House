
class RscTestControlTypes {
    class Controls {
        class _CT_MAP {
            colorForestBorder[] = {0, 0, 0, 1};
            colorForest[] = {"146/255", "191/255", "124/255", 0.75};
            colorOutside[]              = {1,1,1,1};
            colorSea[] = {"178/255", "216/255", "254/255", 0.75};

            //textureComboBoxColor = "#(argb,8,8,3)color(0,0,1,1)";

            //background image
            text                        = "#(argb,8,8,3)color(0.9255,0.9176,0.7333,1)";
            //text                        = "WW2\Core_t\IF_GUI_t\ui_old_paper.paa";

            //roads/paths
            colorGrid[]                 = {"0/255", "0/255", "0/255", 0.6};
            colorGridMap[]              = {"0/255", "0/255", "0/255", 0.6};
            colorMainRoadsFill[]        = {"225/255", "25/255", "25/255", 1};
            colorMainRoads[]            = {"225/255", "25/255", "25/255", 1};
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

            class Waypoint {
                color[] = {1, 1, 1, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_waypoint_ca.paa";
            };

            class Transmitter : Waypoint {
                color[]                 = {0,0,0,0};
            };

            class power : Waypoint {
                color[]                 = {0,0,0,0};
            };
            class powersolar : Waypoint {
                color[]                 = {0,0,0,0};
            };
            class powerwave : Waypoint {
                color[]                 = {0,0,0,0};
            };
            class powerwind : Waypoint {
                color[]                 = {0,0,0,0};
            };

            //------------

            class ActiveMarker {
                color[] = {0.3, 0.1, 0.9, 1};
            };
            class Command : Waypoint {
                color[] = {0, 0.9, 0, 1};
            };
            class CustomMark : Waypoint {
                icon = "WW2\Core_t\IF_MapControl_t\map_waypoint_ca.paa";
            };
            class Tree : Waypoint {
                color[] = {"84/255", "254/255", "0/255", 0.4};
                icon = "WW2\Core_t\IF_MapControl_t\map_tree_ca.paa";
            };
            class SmallTree : Waypoint {
                color[] = {"84/255", "254/255", "0/255", 0.4};
                icon = "WW2\Core_t\IF_MapControl_t\map_smalltree_ca.paa";
            };
            class Bush : Waypoint {
                color[] = {"84/255", "254/255", "0/255", 0.4};
                icon = "WW2\Core_t\IF_MapControl_t\map_bush_ca.paa";
            };
            class Church : Waypoint {
                color[] = {0, 0.9, 0, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_church_ca.paa";
            };
            class Chapel : Waypoint {
                color[] = {0, 0, 0, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_chapel_ca.paa";
            };
            class Cross : Waypoint {
                color[] = {0, 0.9, 0, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_cross_ca.paa";
            };
            class Rock : Waypoint {
                color[] = {0.1, 0.1, 0.1, 0.8};
                icon = "WW2\Core_t\IF_MapControl_t\map_rock_ca.paa";
            };
            class Bunker : Waypoint {
                color[] = {0, 0, 0, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_bunker_ca.paa";
            };
            class Fortress : Waypoint {
                color[] = {0, 0.9, 0, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_bunker_ca.paa";
            };
            class Fountain : Waypoint {
                color[] = {0.2, 0.45, 0.7, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_fountain_ca.paa";
            };
            class ViewTower : Waypoint {
                color[] = {0, 0.9, 0, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_viewtower_ca.paa";
            };
            class Lighthouse : Waypoint {
                color[] = {0, 0.9, 0, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_lighthouse_ca.paa";
            };
            class Quay : Waypoint {
                color[] = {0, 0.9, 0, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_quay_ca.paa";
            };
            class Fuelstation : Waypoint {
                color[] = {0, 0.9, 0, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_fuelstation_ca.paa";
            };
            class Hospital : Waypoint {
                color[] = {0.78, 0, 0.05, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_hospital_ca.paa";
            };
            class BusStop : Waypoint {
                color[] = {0.15, 0.26, 0.87, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_busstop_ca.paa";
            };
            class LineMarker {
                textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
            };
            class Stack : Waypoint {
                color[] = {0, 0.9, 0, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_stack_ca.paa";
            };
            class Ruin : Waypoint {
                color[] = {0, 0.9, 0, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_ruin_ca.paa";
            };
            class Tourism : Waypoint {
                color[] = {0, 0, 0, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_tourism_ca.paa";
            };
            class Watertower : Waypoint {
                color[] = {0.2, 0.45, 0.7, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_watertower_ca.paa";
            };
            class WaypointCompleted : Waypoint {
                color[] = {1, 1, 1, 1};
                icon = "WW2\Core_t\IF_MapControl_t\map_waypoint_completed_ca.paa";
            };
            class Shipwreck : Waypoint {
                icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
                color[] = {0, 0, 0, 1};
            };
        };
    };
}; // End RscTestControlTypes

