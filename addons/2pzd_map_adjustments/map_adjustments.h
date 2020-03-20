
    colorForestBorder[] = {0, 0, 0, 1};
    colorForest[] = {"146/255", "191/255", "124/255", 0.75};
    colorOutside[]              = {1,1,1,1};
    colorSea[] = {"178/255", "216/255", "254/255", 0.75};

    maxSatelliteAlpha           = 0.85;

    showCountourInterval        = 0;

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

    //fonts
    font                        = "UraniaCzech";
    sizeEx                      = 0.04;

    fontGrid                    = "UraniaCzech";
    sizeExGrid                  = 0.04;

    fontInfo                    = "UraniaCzech";
    sizeExInfo                  = "( ( ( ( (safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";

    fontLabel                   = "UraniaCzech";
    sizeExLabel                 = "( ( ( ( (safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";

    fontLevel                   = "UraniaCzech";
    sizeExLevel                 = 0.03;

    fontNames                   = "UraniaCzech"; //Markers use this font!
    sizeExNames                 = "( ( ( ( (safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2"; //2

    fontUnits                   = "UraniaCzech";
    sizeExUnits                 = "( ( ( ( (safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
    /*
    class Legend {
        font = "RobotoCondensed";
        sizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
        colorBackground[] = {1, 1, 1, 0.5};
        color[] = {0, 0, 0, 1};
        x = "SafeZoneX + ( ((safezoneW / safezoneH) min 1.2) / 40)";
        y = "SafeZoneY + safezoneH - 4.5 * ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        w = "10 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        h = "3.5 * ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
    };
    */
    class Transmitter {
        color[]                 = {0,0,0,0};
    };
    class powersolar {
        color[]                 = {0,0,0,0};
    };
    class powerwave {
        color[]                 = {0,0,0,0};
    };
    class powerwind {
        color[]                 = {0,0,0,0};
    };

    //------------

    access = 0;
    alphaFadeEndScale = 100;
    alphaFadeStartScale = 100;
    colorBackground[] = {0.929412, 0.929412, 0.929412, 1};
    colorInactive[] = {1, 0, 0, 1};
    colorLevels[] = {0, 0, 0, 1};
    colorNames[] = {0, 1, 0, 1};
    colorPowerLines[] = {0.1, 0.1, 0.1, 1};
    colorRailWay[] = {0.8, 0.2, 0, 1};
    colorRocksBorder[] = {0, 0, 0, 1};
    colorRocks[] = {"100/255", "85/255", "40/255", 0.5};
    colorText[] = {0, 0, 0, 1};
    deletable = 0;
    fade = 0;
    h = "SafeZoneH - 1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
    idc = 51;
    idcMarkerColor = -1;
    idcMarkerIcon = -1;
    maxSatelliteAlpha = 1;
    moveOnEdges = 1;
    ptsPerSquareCLn = 10;
    ptsPerSquareCost = 10;
    ptsPerSquareExp = 10;
    ptsPerSquareFor = "6.0f";
    ptsPerSquareForEdge = "15.0f";
    ptsPerSquareObj = 1;
    ptsPerSquareRoad = 1;
    ptsPerSquareSea = 8;
    ptsPerSquareTxt = 10;
    scaleDefault = 0.16;
    scaleMax = 1;
    scaleMin = 0.001;
    shadow = 0;
    showCountourInterval = 1;
    showMarkers = 1;
    stickX[] = {0.2, {"Gamma", 1, 1.5}};
    stickY[] = {0.2, {"Gamma", 1, 1.5}};
    style = 48;
    textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
    type = 101;
    widthRailWay = 4;
    w = "SafeZoneWAbs";
    x = "SafeZoneXAbs";
    y = "SafeZoneY + 1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

    class Legend {
        font = "RobotoCondensed";
        sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
        colorBackground[] = {0, 0, 0, 0.1};
        color[] = {0, 0, 0, 1};
        x = "SafeZoneX + 					(			((safezoneW / safezoneH) min 1.2) / 40)";
        y = "SafeZoneY + safezoneH - 4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
        h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
    };

    class ActiveMarker {
        color[] = {0.3, 0.1, 0.9, 1};
        size = 50;
    };
    class Command {
        color[] = {0, 0.9, 0, 1};
        size = 18;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
        icon = "WW2\Core_t\IF_MapControl_t\map_waypoint_ca.paa";
    };
    class Task {
        taskNone = "#(argb,8,8,3)color(0,0,0,0)";
        taskCreated = "#(argb,8,8,3)color(0,0,0,1)";
        taskAssigned = "#(argb,8,8,3)color(1,1,1,1)";
        taskSucceeded = "#(argb,8,8,3)color(0,1,0,1)";
        taskFailed = "#(argb,8,8,3)color(1,0,0,1)";
        taskCanceled = "#(argb,8,8,3)color(1,0.5,0,1)";
        colorCreated[] = {0.95, 0.95, 0.95, 1};
        colorCanceled[] = {0.606, 0.606, 0.606, 1};
        colorDone[] = {0.424, 0.651, 0.247, 1};
        colorFailed[] = {0.706, 0.0745, 0.0196, 1};
        color[] = {0.863, 0.584, 0, 1};
        icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
        iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
        iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
        iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
        iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
        size = 27;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class CustomMark {
        color[] = {0.6471, 0.6706, 0.6235, 1};
        size = 18;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
        icon = "WW2\Core_t\IF_MapControl_t\map_waypoint_ca.paa";
    };
    class Tree {
        color[] = {"84/255", "254/255", "0/255", 0.4};
        size = 12;
        importance = "0.9 * 16 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
        icon = "WW2\Core_t\IF_MapControl_t\map_tree_ca.paa";
    };
    class SmallTree {
        color[] = {"84/255", "254/255", "0/255", 0.4};
        size = 12;
        importance = "0.6 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
        icon = "WW2\Core_t\IF_MapControl_t\map_smalltree_ca.paa";
    };
    class Bush {
        color[] = {"84/255", "254/255", "0/255", 0.4};
        coefMin = 0.25;
        coefMax = 4;
        icon = "WW2\Core_t\IF_MapControl_t\map_bush_ca.paa";
        size = 14;
        importance = "0.2 * 14 * 0.05";
    };
    class Church {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_church_ca.paa";
        size = 16;
        importance = "2 * 16 * 0.05";
        coefMin = 0.9;
        coefMax = 4;
    };
    class Chapel {
        color[] = {0, 0, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_chapel_ca.paa";
        size = 16;
        importance = "1 * 16 * 0.05";
        coefMin = 0.9;
        coefMax = 4;
    };
    class Cross {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_cross_ca.paa";
        size = 16;
        importance = "0.7 * 16 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Rock {
        color[] = {0.1, 0.1, 0.1, 0.8};
        size = 12;
        importance = "0.5 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
        icon = "WW2\Core_t\IF_MapControl_t\map_rock_ca.paa";
    };
    class Bunker {
        color[] = {0, 0, 0, 1};
        size = 14;
        importance = "1.5 * 14 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
        icon = "WW2\Core_t\IF_MapControl_t\map_bunker_ca.paa";
    };
    class Fortress {
        color[] = {0, 0.9, 0, 1};
        importance = "2 * 16 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
        size = 24;
        icon = "WW2\Core_t\IF_MapControl_t\map_bunker_ca.paa";
    };
    class Fountain {
        color[] = {0.2, 0.45, 0.7, 1};
        importance = "1 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
        size = 24;
        icon = "WW2\Core_t\IF_MapControl_t\map_fountain_ca.paa";
    };
    class ViewTower {
        color[] = {0, 0.9, 0, 1};
        importance = "2.5 * 16 * 0.05";
        size = 16;
        coefMin = 0.5;
        coefMax = 4;
        icon = "WW2\Core_t\IF_MapControl_t\map_viewtower_ca.paa";
    };
    class Lighthouse {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_lighthouse_ca.paa";
        size = 14;
        importance = "3 * 16 * 0.05";
        coefMin = 0.9;
        coefMax = 4;
    };
    class Quay {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_quay_ca.paa";
        size = 16;
        importance = "2 * 16 * 0.05";
        coefMin = 0.5;
        coefMax = 4;
    };
    class Fuelstation {
        color[] = {0, 0.9, 0, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_fuelstation_ca.paa";
        size = 16;
        importance = "2 * 16 * 0.05";
        coefMin = 0.75;
        coefMax = 4;
    };
    class Hospital {
        color[] = {0.78, 0, 0.05, 1};
        size = 24;
        coefMin = 0.85;
        coefMax = 1;
        icon = "WW2\Core_t\IF_MapControl_t\map_hospital_ca.paa";
        importance = "2 * 16 * 0.05";
    };
    class BusStop {
        color[] = {0.15, 0.26, 0.87, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_busstop_ca.paa";
        size = 12;
        importance = "1 * 10 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class LineMarker {
        textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
        lineWidthThin = 0.008;
        lineWidthThick = 0.014;
        lineDistanceMin = 3e-005;
        lineLengthMin = 5;
    };
    class Stack {
        color[] = {0, 0.9, 0, 1};
        size = 16;
        importance = "2 * 16 * 0.05";
        coefMin = 0.4;
        coefMax = 2;
        icon = "WW2\Core_t\IF_MapControl_t\map_stack_ca.paa";
    };
    class Ruin {
        color[] = {0, 0.9, 0, 1};
        size = 16;
        importance = "1.2 * 16 * 0.05";
        coefMin = 1;
        coefMax = 4;
        icon = "WW2\Core_t\IF_MapControl_t\map_ruin_ca.paa";
    };
    class Tourism {
        color[] = {0, 0, 0, 1};
        size = 16;
        importance = "1 * 16 * 0.05";
        coefMin = 0.7;
        coefMax = 4;
        icon = "WW2\Core_t\IF_MapControl_t\map_tourism_ca.paa";
    };
    class Watertower {
        color[] = {0.2, 0.45, 0.7, 1};
        icon = "WW2\Core_t\IF_MapControl_t\map_watertower_ca.paa";
        size = 20;
        importance = "1.2 * 16 * 0.05";
        coefMin = 0.9;
        coefMax = 4;
    };
    class Waypoint {
        color[] = {1, 1, 1, 1};
        importance = 1;
        coefMin = 1;
        coefMax = 1;
        size = 18;
        icon = "WW2\Core_t\IF_MapControl_t\map_waypoint_ca.paa";
    };
    class WaypointCompleted {
        color[] = {1, 1, 1, 1};
        importance = 1;
        coefMin = 1;
        coefMax = 1;
        size = 18;
        icon = "WW2\Core_t\IF_MapControl_t\map_waypoint_completed_ca.paa";
    };
    class power {
        icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
        color[] = {1, 1, 1, 1};
    };
    class Shipwreck {
        icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
        color[] = {0, 0, 0, 1};
    };
