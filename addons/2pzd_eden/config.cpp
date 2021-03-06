class CfgPatches {
    class 2Pzd_Eden {
        author = "Wilhelm Haas";
        name = "2PzD Eden Changes";
        url = "https://www.2PzD.net";
        requiredAddons[] =  {
            "A3_3DEN"
        };
        requiredVersion = 0.1;
        units[] =  {};
        weapons[] = {};
    };
};

class ctrlButtonCancel;
class ctrlButtonOK;
class ctrlButtonSearch;
class ctrlCheckbox;
class ctrlEdit;
class ctrlListbox;
class ctrlListNBox;
class ctrlMenu;
class ctrlShortcutButtonSteam;
class ctrlStatic;
class ctrlStaticBackground;
class ctrlStaticBackgroundDisable;
class ctrlStaticBackgroundDisableTiles;
class ctrlStaticFooter;
class ctrlStaticOverlay;
class ctrlStaticPicture;
class ctrlStaticTitle;
class ctrlTree;
class DisplaySimulated;

class Display3DENNew : DisplaySimulated {
    class controlsBackground {
        class Background : ctrlStaticBackground {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 0.5) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - ( 120 * 0.5 - 2 * 5) * (pixelH * pixelGrid * 0.50)";
            w = "240 * (pixelW * pixelGrid * 0.50)";
            h = "( 120 - 5 - 10) * (pixelH * pixelGrid * 0.50)";
        };
        class BackgroundWorld : ctrlStaticOverlay {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 0.5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + ( 120 * 0.5 - 2 * 5 - 3) * (pixelH * pixelGrid * 0.50) - (( 120 - 2) * (pixelH * pixelGrid * 0.50) - (( 120 - 32) * (pixelH * pixelGrid * 0.50)))";
            w = "( 240 - 2) * (pixelW * pixelGrid * 0.50) - (( 120 - 32) * (pixelW * pixelGrid * 0.50))";
            h = "( 120 - 2) * (pixelH * pixelGrid * 0.50) - (( 120 - 32) * (pixelH * pixelGrid * 0.50))";
        };
        class BackgroundButtons : ctrlStaticFooter {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 0.5) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + ( 120 * 0.5 - 2 * 5 - 2) * (pixelH * pixelGrid * 0.50)";
            w = "240 * (pixelW * pixelGrid * 0.50)";
            h = "( 5 + 2) * (pixelH * pixelGrid * 0.50)";
        };
    };
    class controls {
        class Title : ctrlStaticTitle {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 0.5) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - ( 120 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)";
            w = "240 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class IslandsBox : ctrlListbox {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 0.5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - ( 120 * 0.5 - 11) * (pixelH * pixelGrid * 0.50)";
            w = "( 240 - 2) * (pixelW * pixelGrid * 0.50) - (( 120 - 32) * (pixelW * pixelGrid * 0.50))";
            h = "(( 120 - 32) * (pixelH * pixelGrid * 0.50)) - (10 + 2 * 5 + 3) * (pixelH * pixelGrid * 0.50)";
        };/*
        class World : ctrlStaticPicture {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 0.5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + ( 120 * 0.5 - 2 * 5 - 3) * (pixelH * pixelGrid * 0.50) - (( 120 - 2) * (pixelH * pixelGrid * 0.50) - (( 120 - 32) * (pixelH * pixelGrid * 0.50)))";
            w = "( 240 - 2) * (pixelW * pixelGrid * 0.50) - (( 120 - 32) * (pixelW * pixelGrid * 0.50))";
            h = "( 120 - 2) * (pixelH * pixelGrid * 0.50) - (( 120 - 32) * (pixelH * pixelGrid * 0.50))";
        };
        class WorldLng : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 0.5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + ( 120 * 0.5 - 2 * 5 - 3) * (pixelH * pixelGrid * 0.50) - (( 120 - 2) * (pixelH * pixelGrid * 0.50) - (( 120 - 32) * (pixelH * pixelGrid * 0.50)))";
            w = "pixelW";
            h = "( 120 - 2) * (pixelH * pixelGrid * 0.50) - (( 120 - 32) * (pixelH * pixelGrid * 0.50))";
        };
        class WorldLat : WorldLng {
            // y = "((getResolution select 2) * 0.5 * pixelH) - ( 240 * 0.5 - 1) * (pixelH * pixelGrid * 0.50)";
            // x = "0.5 + ( 120 * 0.5 - 2 * 5 - 3) * (pixelW * pixelGrid * 0.50) - (( 120 - 2) * (pixelW * pixelGrid * 0.50) - (( 120 - 32) * (pixelW * pixelGrid * 0.50)))";
            w = "( 240 - 2) * (pixelW * pixelGrid * 0.50) - (( 120 - 32) * (pixelW * pixelGrid * 0.50))";
            h = "pixelH";
        };*/
        class NameBackground : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) + ( 240 * 0.5) * (pixelW * pixelGrid * 0.50) - (( 120 - 32) * (pixelW * pixelGrid * 0.50))";
            y = "0.5 - ( 120 * 0.5 - 10) * (pixelH * pixelGrid * 0.50)";
            w = "(( 120 - 32) * (pixelW * pixelGrid * 0.50))";
            h = "2 * 5 * (pixelH * pixelGrid * 0.50)";
        };
        class Name : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) + ( 240 * 0.5) * (pixelW * pixelGrid * 0.50) - (( 120 - 32) * (pixelW * pixelGrid * 0.50))";
            y = "0.5 - ( 120 * 0.5 - 10) * (pixelH * pixelGrid * 0.50)";
            w = "(( 120 - 32) * (pixelW * pixelGrid * 0.50))";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class Author : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) + ( 240 * 0.5) * (pixelW * pixelGrid * 0.50) - (( 120 - 32) * (pixelW * pixelGrid * 0.50))";
            y = "0.5 - ( 120 * 0.5 - 10 - 5) * (pixelH * pixelGrid * 0.50)";
            w = "(( 120 - 32) * (pixelW * pixelGrid * 0.50))";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class IslandPanorama : ctrlStaticPicture {
            x = "((getResolution select 2) * 0.5 * pixelW) + ( 240 * 0.5) * (pixelW * pixelGrid * 0.50) - (( 120 - 32) * (pixelW * pixelGrid * 0.50))";
            y = "0.5 - ( 120 * 0.5 - 10 - 2 * 5) * (pixelH * pixelGrid * 0.50)";
            w = "(( 120 - 32) * (pixelW * pixelGrid * 0.50))";
            h = "(( 120 - 32) * (pixelH * pixelGrid * 0.50))";
        };
        class ButtonContinue : ctrlButtonOK {
            x = "((getResolution select 2) * 0.5 * pixelW) + ( 240 * 0.5 - 55 - 2) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + ( 120 * 0.5 - 2 * 5 - 1) * (pixelH * pixelGrid * 0.50)";
            w = "30 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class ButtonPurchase : ctrlShortcutButtonSteam {
            x = "((getResolution select 2) * 0.5 * pixelW) + ( 240 * 0.5 - 60 - 2) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + ( 120 * 0.5 - 2 * 5 - 1) * (pixelH * pixelGrid * 0.50)";
            w = "35 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class ButtonCancel : ctrlButtonCancel {
            x = "((getResolution select 2) * 0.5 * pixelW) + ( 240 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + ( 120 * 0.5 - 2 * 5 - 1) * (pixelH * pixelGrid * 0.50)";
            w = "25 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
    };
};

class Display3DENSave {
    class ControlsBackground {
        class Background : ctrlStaticBackground {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 0.5) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 + 10 * (pixelH * pixelGrid * 0.50)";
            w = "240 * (pixelW * pixelGrid * 0.50)";
            h = "(safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) - (10 +     5) * (pixelH * pixelGrid * 0.50)";
        };
        class BackgroundFilter : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 + (12 +   5) * (pixelH * pixelGrid * 0.50)";
            w = "( 240 * 3/4 - 2) * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class BackgroundFiles : ctrlStaticOverlay {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 + (12 +   5) * (pixelH * pixelGrid * 0.50)";
            w = "( 240 * 3/4 - 2) * (pixelW * pixelGrid * 0.50)";
            h = "(safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) - (23 +     5 * 3 + 3) * (pixelH * pixelGrid * 0.50)";
        };
        class BackgroundButtons : ctrlStaticFooter {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 0.5) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 - 2 * ( 5 + 1) * (pixelH * pixelGrid * 0.50)";
            w = "240 * (pixelW * pixelGrid * 0.50)";
            h = "( 5 + 2) * (pixelH * pixelGrid * 0.50)";
        };
    };
    class Controls {
        class Title : ctrlStaticTitle {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 0.5) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 +     5 * (pixelH * pixelGrid * 0.50)";
            w = "240 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class Search : ctrlEdit {
            x = "((getResolution select 2) * 0.5 * pixelW) + ( 240 * 1/4 - 5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 + (11) * (pixelH * pixelGrid * 0.50)";
            w = "( 240 / 4) * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class SearchButton : ctrlButtonSearch {
            x = "((getResolution select 2) * 0.5 * pixelW) + ( 240 * 1/2 - 5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 + (11) * (pixelH * pixelGrid * 0.50)";
            w = "5 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class Folders : ctrlTree {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 0.5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 0.50)";
            w = "( 240 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            h = "(safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) - (23 + 2 * 5 + 2) * (pixelH * pixelGrid * 0.50)";
        };
        class Files : ctrlListNBox {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 + (12 +   5 * 2) * (pixelH * pixelGrid * 0.50)";
            w = "( 240 * 3/4 - 2) * (pixelW * pixelGrid * 0.50)";
            h = "(safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) - (23 + 4 * 5 + 3) * (pixelH * pixelGrid * 0.50)";
        };
        class Filter : ctrlListNBox {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 + (12 +   5) * (pixelH * pixelGrid * 0.50)";
            w = "( 240 * 3/4 - 2) * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class NameText : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 0.5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 - (4 * 5 + 3) * (pixelH * pixelGrid * 0.50)";
            w = "( 240 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class Name : ctrlEdit {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 - (4 * 5 + 3) * (pixelH * pixelGrid * 0.50)";
            w = "( 240 * 3/4 - 2) * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class BinarizeText : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 0.5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 - (3 * 5 + 3) * (pixelH * pixelGrid * 0.50)";
            w = "( 240 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class Binarize : ctrlCheckbox {
            x = "((getResolution select 2) * 0.5 * pixelW) - ( 240 * 1/4) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 - (3 * 5 + 3) * (pixelH * pixelGrid * 0.50)";
            w = "5 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class ButtonOK : ctrlButtonOK {
            x = "((getResolution select 2) * 0.5 * pixelW) + ( 240 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 - (2 * 5 + 1) * (pixelH * pixelGrid * 0.50)";
            w = "25 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class ButtonPurchase : ctrlShortcutButtonSteam {
            x = "((getResolution select 2) * 0.5 * pixelW) + ( 240 * 0.5 - 60 - 2) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 - (2 * 5 + 1) * (pixelH * pixelGrid * 0.50)";
            w = "35 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class ButtonCancel : ctrlButtonCancel {
            x = "((getResolution select 2) * 0.5 * pixelW) + ( 240 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min ( 240 * (pixelH * pixelGrid * 0.50))) * 0.5 - (2 * 5 + 1) * (pixelH * pixelGrid * 0.50)";
            w = "25 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
    };
};
