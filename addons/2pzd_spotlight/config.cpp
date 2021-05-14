class CfgPatches {
    class 2pzd_spotlight {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"Haas_WWII_Rebalance"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "KillzoneKid, Ampersand, Wilhelm Haas";
    };
};

class RscPicture;
class RscStandardDisplay;
class RscText;

class RscDisplayMain : RscStandardDisplay {
/*
    class Spotlight {
        class 2pzdServer {
            action = "connectToServer ['IP.IP.IP.IP', PORT, 'Password']";
            actionText = "Join the 2PzD Server"; // Text displayed in top left corner of on-hover white frame
            condition = "true"; // Condition for showing the spotlight
            picture = "\2pzd_spotlight\logo.paa"; // Square picture, ideally 512x512
            text = "2PzD Server"; // Text displayed on the square button, converted to upper-case
            textIsQuote = 0; // 1 to add quotation marks around the text
            //video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover, ideally 512x512
        };
    };
*/
    class controls {
        class Spotlight2 { // : RscText {
            idc = 1020;
            x = "0.5 - (10 * pixelW * pixelGridNoUIScale * 2)";
            y = "1 - (10 / 2) * (pixelH * pixelGridNoUIScale * 2)";
            w = "10 * (pixelW * pixelGridNoUIScale * 2)";
            h = "10 * (pixelH * pixelGridNoUIScale * 2)";
            access = 0;
            colorBackground[] = {0, 0, 0, 0};
            colorShadow[] = {0, 0, 0, 0.5};
            colorText[] = {1, 1, 1, 1};
            deletable = 0;
            fade = 0;
            fixedWidth = 0;
            font = "RobotoCondensed";
            linespacing = 1;
            shadow = 1;
            sizeEx = "( ( ( ( (safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            show = 0;
            style = 0;
            text = "";
            tooltipColorBox[] = {1, 1, 1, 1};
            tooltipColorShade[] = {0, 0, 0, 0.65};
            tooltipColorText[] = {1, 1, 1, 1};
            type = 0;
        };
        class Spotlight3 { // : RscMainMenuSpotlight {
            idc = 1022;
            x = "0.5";
            y = "1 - (10 / 2) * (pixelH * pixelGridNoUIScale * 2)";
            w = "10 * (pixelW * pixelGridNoUIScale * 2)";
            h = "10 * (pixelH * pixelGridNoUIScale * 2)";
            deletable = 0;
            fade = 1;
            shadow = 0;
            style = 16;
            type = 15;
            class Controls {
                class GroupPicture {
                    idc = -1;
                    x = 0;
                    y = 0;
                    w = "10 * (pixelW * pixelGridNoUIScale * 2)";
                    h = "10 * (pixelH * pixelGridNoUIScale * 2)";
                    deletable = 0;
                    fade = 0;
                    shadow = 0;
                    style = 16;
                    type = 15;
                    class Controls {
                        class Picture {
                            idc = 1023;
                            x = 0;
                            y = 0;
                            w = "10 * (pixelW * pixelGridNoUIScale * 2)";
                            h = "10 * (pixelH * pixelGridNoUIScale * 2)";
                            access = 0;
                            colorBackground[] = {0, 0, 0, 0};
                            colorText[] = {1, 1, 1, 1};
                            deletable = 0;
                            fade = 0;
                            fixedWidth = 0;
                            font = "TahomaB";
                            lineSpacing = 0;
                            shadow = 0;
                            sizeEx = 0;
                            style = "0x30 + 0x800";
                            text = "\2pzd_spotlight\editor.paa";
                            tooltipColorBox[] = {1, 1, 1, 1};
                            tooltipColorShade[] = {0, 0, 0, 0.65};
                            tooltipColorText[] = {1, 1, 1, 1};
                            type = 0;
                        };
                        class Video {
                            idc = 1024;
                            show = 0;
                            x = 0;
                            y = 0;
                            w = "10 * (pixelW * pixelGridNoUIScale * 2)";
                            h = "10 * (pixelH * pixelGridNoUIScale * 2)";
                            access = 0;
                            autoplay = 1;
                            colorBackground[] = {0, 0, 0, 0};
                            colorText[] = {1, 1, 1, 1};
                            deletable = 0;
                            fade = 0;
                            fixedWidth = 0;
                            font = "TahomaB";
                            lineSpacing = 0;
                            loops = 1;
                            shadow = 0;
                            sizeEx = 0;
                            style = 48;
                            text = "\a3\Ui_f\Video\spotlight3.ogv";
                            tooltipColorBox[] = {1, 1, 1, 1};
                            tooltipColorShade[] = {0, 0, 0, 0.65};
                            tooltipColorText[] = {1, 1, 1, 1};
                            type = 0;
                        };
                    };
                    class VScrollbar {
                        arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                        arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                        autoScrollDelay = 5;
                        autoScrollEnabled = 1;
                        autoScrollRewind = 0;
                        autoScrollSpeed = -1;
                        border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                        colorActive[] = {1, 1, 1, 1};
                        colorDisabled[] = {1, 1, 1, 0.3};
                        color[] = {1, 1, 1, 1};
                        height = 0;
                        scrollSpeed = 0.06;
                        shadow = 0;
                        thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                        width = 0;
                    };
                    class HScrollbar {
                        arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                        arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                        autoScrollDelay = 5;
                        autoScrollEnabled = 0;
                        autoScrollRewind = 0;
                        autoScrollSpeed = -1;
                        border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                        colorActive[] = {1, 1, 1, 1};
                        colorDisabled[] = {1, 1, 1, 0.3};
                        color[] = {1, 1, 1, 1};
                        height = 0;
                        scrollSpeed = 0.06;
                        shadow = 0;
                        thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                        width = 0;
                    };
                };
                class GroupHover {
                    idc = 1025;
                    x = 0;
                    y = 0;
                    w = "10 * (pixelW * pixelGridNoUIScale * 2)";
                    h = "10 * (pixelH * pixelGridNoUIScale * 2)";
                    deletable = 0;
                    fade = 1;
                    shadow = 0;
                    style = 16;
                    type = 15;
                    class Controls {
                        class Overlay {
                            idc = -1;
                            x = 0;
                            y = 0;
                            w = "10 * (pixelW * pixelGridNoUIScale * 2)";
                            h = "10 * (pixelH * pixelGridNoUIScale * 2)";
                            access = 0;
                            colorBackground[] = {0, 0, 0, 0};
                            colorText[] = {0, 0, 0, 0.5};
                            deletable = 0;
                            fade = 0;
                            fixedWidth = 0;
                            font = "TahomaB";
                            lineSpacing = 0;
                            shadow = 0;
                            sizeEx = 0;
                            style = 48;
                            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\hover_ca.paa";
                            tooltipColorBox[] = {1, 1, 1, 1};
                            tooltipColorShade[] = {0, 0, 0, 0.65};
                            tooltipColorText[] = {1, 1, 1, 1};
                            type = 0;
                        };
                        class LineLeft {
                            idc = -1;
                            x = 0;
                            y = 0;
                            w = "pixelW";
                            h = "10 * (pixelH * pixelGridNoUIScale * 2)";
                            access = 0;
                            colorBackground[] = {1, 1, 1, 1};
                            colorShadow[] = {0, 0, 0, 0.5};
                            colorText[] = {1, 1, 1, 1};
                            deletable = 0;
                            fade = 0;
                            fixedWidth = 0;
                            font = "RobotoCondensed";
                            linespacing = 1;
                            shadow = 1;
                            sizeEx = "( ( ( ( (safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                            style = 0;
                            text = "";
                            tooltipColorBox[] = {1, 1, 1, 1};
                            tooltipColorShade[] = {0, 0, 0, 0.65};
                            tooltipColorText[] = {1, 1, 1, 1};
                            type = 0;
                        };
                        class LineRight {
                            idc = -1;
                            x = "10 * (pixelW * pixelGridNoUIScale * 2) - pixelW";
                            y = 0;
                            w = "pixelW";
                            h = "10 * (pixelH * pixelGridNoUIScale * 2)";
                            access = 0;
                            colorBackground[] = {1, 1, 1, 1};
                            colorShadow[] = {0, 0, 0, 0.5};
                            colorText[] = {1, 1, 1, 1};
                            deletable = 0;
                            fade = 0;
                            fixedWidth = 0;
                            font = "RobotoCondensed";
                            linespacing = 1;
                            shadow = 1;
                            sizeEx = "( ( ( ( (safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                            style = 0;
                            text = "";
                            tooltipColorBox[] = {1, 1, 1, 1};
                            tooltipColorShade[] = {0, 0, 0, 0.65};
                            tooltipColorText[] = {1, 1, 1, 1};
                            type = 0;
                        };
                        class LineTop {
                            idc = 1027;
                            x = 0;
                            y = 0;
                            w = "10 * (pixelW * pixelGridNoUIScale * 2)";
                            h = "(pixelH * pixelGrid * 2)";
                            access = 0;
                            colorBackground[] = {1, 1, 1, 1};
                            colorShadow[] = {0, 0, 0, 0.5};
                            colorText[] = {0, 0, 0, 1};
                            deletable = 0;
                            fade = 0;
                            fixedWidth = 0;
                            font = "PuristaLight";
                            linespacing = 1;
                            onLoad = "(_this select 0) ctrlsettext toupper ctrltext (_this select 0);";
                            shadow = 0;
                            sizeEx = "(pixelH * pixelGrid * 2)";
                            style = 0;
                            text = "Create";
                            tooltipColorBox[] = {1, 1, 1, 1};
                            tooltipColorShade[] = {0, 0, 0, 0.65};
                            tooltipColorText[] = {1, 1, 1, 1};
                            type = 0;
                        };
                        class LineBottom {
                            idc = 1027;
                            x = 0;
                            y = "10 * (pixelH * pixelGridNoUIScale * 2) - pixelH";
                            w = "10 * (pixelW * pixelGridNoUIScale * 2)";
                            h = "pixelH";
                            access = 0;
                            colorBackground[] = {1, 1, 1, 1};
                            colorShadow[] = {0, 0, 0, 0.5};
                            colorText[] = {0, 0, 0, 1};
                            deletable = 0;
                            fade = 0;
                            fixedWidth = 0;
                            font = "PuristaLight";
                            linespacing = 1;
                            onLoad = "(_this select 0) ctrlsettext toupper ctrltext (_this select 0);";
                            shadow = 0;
                            sizeEx = "(pixelH * pixelGrid * 2)";
                            style = 0;
                            text = "";
                            tooltipColorBox[] = {1, 1, 1, 1};
                            tooltipColorShade[] = {0, 0, 0, 0.65};
                            tooltipColorText[] = {1, 1, 1, 1};
                            type = 0;
                        };
                    };
                    class VScrollbar {
                        arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                        arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                        autoScrollDelay = 5;
                        autoScrollEnabled = 1;
                        autoScrollRewind = 0;
                        autoScrollSpeed = -1;
                        border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                        colorActive[] = {1, 1, 1, 1};
                        colorDisabled[] = {1, 1, 1, 0.3};
                        color[] = {1, 1, 1, 1};
                        height = 0;
                        scrollSpeed = 0.06;
                        shadow = 0;
                        thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                        width = 0;
                    };
                    class HScrollbar {
                        arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                        arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                        autoScrollDelay = 5;
                        autoScrollEnabled = 0;
                        autoScrollRewind = 0;
                        autoScrollSpeed = -1;
                        border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                        colorActive[] = {1, 1, 1, 1};
                        colorDisabled[] = {1, 1, 1, 0.3};
                        color[] = {1, 1, 1, 1};
                        height = 0;
                        scrollSpeed = 0.06;
                        shadow = 0;
                        thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                        width = 0;
                    };
                };
                class TextBackground {
                    idc = 1029;
                    x = 0;
                    y = 0;
                    w = "10 * (pixelW * pixelGridNoUIScale * 2)";
                    h = "10 * (pixelH * pixelGridNoUIScale * 2)";
                    access = 0;
                    colorBackground[] = {0, 0, 0, 0};
                    colorText[] = {0, 0, 0, 0.5};
                    deletable = 0;
                    fade = 0;
                    fixedWidth = 0;
                    font = "TahomaB";
                    lineSpacing = 0;
                    shadow = 0;
                    sizeEx = 0;
                    style = 48;
                    text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_backgroundText_ca.paa";
                    tooltipColorBox[] = {1, 1, 1, 1};
                    tooltipColorShade[] = {0, 0, 0, 0.65};
                    tooltipColorText[] = {1, 1, 1, 1};
                    type = 0;
                };
                class Text {
                    idc = 1028;
                    x = 0;
                    y = 0;
                    w = "10 * (pixelW * pixelGridNoUIScale * 2)";
                    h = "10 * (pixelH * pixelGridNoUIScale * 2)";
                    access = 0;
                    colorText[] = {1, 1, 1, 1};
                    deletable = 0;
                    fade = 0;
                    shadow = 2;
                    size = "1.00 * (pixelH * pixelGridNoUIScale * 2)";
                    style = 0;
                    text = "Editor";
                    type = 13;
                    class Attributes {
                        align = "center";
                        color = "#ffffff";
                        font = "PuristaBold";
                    };
                };
                class Button {
                    idc = 1026;
                    x = 0;
                    y = 0;
                    w = "10 * (pixelW * pixelGridNoUIScale * 2)";
                    h = "10 * (pixelH * pixelGridNoUIScale * 2)";
                    access = 0;
                    borderSize = 0;
                    colorBackgroundActive[] = {0, 0, 0, 0};
                    colorBackgroundDisabled[] = {0, 0, 0, 0};
                    colorBackground[] = {0, 0, 0, 0};
                    colorBorder[] = {0, 0, 0, 1};
                    colorDisabled[] = {0, 0, 0, 0};
                    colorFocused[] = {0, 0, 0, 0};
                    colorShadow[] = {0, 0, 0, 0};
                    colorText[] = {1, 1, 1, 1};
                    deletable = 0;
                    fade = 0;
                    font = "RobotoCondensed";
                    offsetPressedX = 0;
                    offsetPressedY = 0;
                    offsetX = 0;
                    offsetY = 0;
                    shadow = 2;
                    sizeEx = "( ( ( ( (safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
                    soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
                    soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
                    soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
                    style = 2;
                    text = "";
                    type = 1;
                    url = "";
                };
            };
            class VScrollbar {
                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                autoScrollDelay = 5;
                autoScrollEnabled = 1;
                autoScrollRewind = 0;
                autoScrollSpeed = -1;
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                colorActive[] = {1, 1, 1, 1};
                colorDisabled[] = {1, 1, 1, 0.3};
                color[] = {1, 1, 1, 1};
                height = 0;
                scrollSpeed = 0.06;
                shadow = 0;
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                width = 0;
            };
            class HScrollbar {
                arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                autoScrollDelay = 5;
                autoScrollEnabled = 0;
                autoScrollRewind = 0;
                autoScrollSpeed = -1;
                border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                colorActive[] = {1, 1, 1, 1};
                colorDisabled[] = {1, 1, 1, 0.3};
                color[] = {1, 1, 1, 1};
                height = 0;
                scrollSpeed = 0.06;
                shadow = 0;
                thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                width = 0;
            };
        };
    };

    class ControlsBackground {
        class BackgroundLeft : RscText {
            idc = -1;
            x = "- 10";
            y = "- 10";
            w = "safezoneX + 10";
            h = "2 * 10";
            access = 0;
            colorBackground[] = {0.1, 0.1, 0.1, 1};
            colorShadow[] = {0, 0, 0, 0.5};
            colorText[] = {1, 1, 1, 1};
            deletable = 0;
            fade = 0;
            fixedWidth = 0;
            font = "RobotoCondensed";
            linespacing = 1;
            shadow = 1;
            sizeEx = "( ( ( ( (safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            style = 0;
            text = "";
            tooltipColorBox[] = {1, 1, 1, 1};
            tooltipColorShade[] = {0, 0, 0, 0.65};
            tooltipColorText[] = {1, 1, 1, 1};
            type = 0;
        };
        class BackgroundRight : BackgroundLeft {
            idc = -1;
            x = "safezoneX + safezoneW";
            y = "- 10";
            w = 10;
            h = "2 * 10";
            access = 0;
            colorBackground[] = {0.1, 0.1, 0.1, 1};
            colorShadow[] = {0, 0, 0, 0.5};
            colorText[] = {1, 1, 1, 1};
            deletable = 0;
            fade = 0;
            fixedWidth = 0;
            font = "RobotoCondensed";
            linespacing = 1;
            shadow = 1;
            sizeEx = "( ( ( ( (safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            style = 0;
            text = "";
            tooltipColorBox[] = {1, 1, 1, 1};
            tooltipColorShade[] = {0, 0, 0, 0.65};
            tooltipColorText[] = {1, 1, 1, 1};
            type = 0;
        };
        class Picture : RscPicture {
            idc = 998;
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            h = "safezoneW * 4/3";
            access = 0;
            colorBackground[] = {0, 0, 0, 0};
            colorText[] = {1, 1, 1, 1};
            deletable = 0;
            fade = 0;
            fixedWidth = 0;
            font = "TahomaB";
            lineSpacing = 0;
            shadow = 0;
            sizeEx = 0;
            style = 48;
            picture = "\2pzd_spotlight\backgroundgrey.jpg";
            tooltipColorBox[] = {1, 1, 1, 1};
            tooltipColorShade[] = {0, 0, 0, 0.65};
            tooltipColorText[] = {1, 1, 1, 1};
            type = 0;
        };
    };
};

class CfgMainMenuSpotlight {
    class 2pzdServer {
        action = "connectToServer ['IP.IP.IP.IP', PORT, 'Password']";
        actionText = "Join the 2PzD Server"; // Text displayed in top left corner of on-hover white frame
        condition = "true"; // Condition for showing the spotlight
        picture = "\2pzd_spotlight\logo.paa"; // Square picture, ideally 512x512
        text = "2PzD Server"; // Text displayed on the square button, converted to upper-case
        textIsQuote = 0; // 1 to add quotation marks around the text
        //video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover, ideally 512x512
    };
    // These are referenced somewhere so they can't be deleted
    class AoW_Showcase_Future {condition = "false";};
    class Orange_Campaign {condition = "false";};
    class Tacops_Campaign_01 {condition = "false";};
    delete AoW_Showcase_AoW;
    delete ApexProtocol;
    delete BootCamp;
    delete Contact_Campaign;
    delete EastWind;
    delete OldMan;
    delete Orange_CampaignGerman;
    delete Orange_Showcase_IDAP;
    delete Orange_Showcase_LoW;
    delete Showcase_TankDestroyers;
    delete Tacops_Campaign_02;
    delete Tacops_Campaign_03;
    delete Tanks_Campaign_01;
    delete gm_campaign_01;
    delete SP_FD14;
};
