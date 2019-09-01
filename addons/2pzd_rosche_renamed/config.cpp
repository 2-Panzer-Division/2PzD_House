class CfgPatches {
    class 2PzD_Rosche_DutchNames {
        author = "2PzD Campaign Team";
        name = "Rosche Renamed";
        requiredAddons[] = {"WL_Rosche"};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};

class CfgLocationTypes {
    class ViewPoint;
    class FedRoad071 : ViewPoint {
        color[] = {0,0,0,1};
        textSize = 0.06;
        size = 18;
        texture = "WW2\Core_t\IF_MapControl_t\mapkey_viewpoint_ca.paa";
    };
    class FedRoad191 : ViewPoint {
        color[] = {0,0,0,1};
        textSize = 0.06;
        size = 18;
        texture = "WW2\Core_t\IF_MapControl_t\mapkey_viewpoint_ca.paa";
    };
    class FedRoad493 : ViewPoint {
        color[] = {0,0,0,1};
        textSize = 0.06;
        size = 18;
        texture = "WW2\Core_t\IF_MapControl_t\mapkey_viewpoint_ca.paa";
    };
};

class CfgWorldList {
    class 2PzD_Rosche_DutchNames {};
};

class CfgWorlds {
    class CAWorld;
    class WL_Rosche : CAWorld {
        class Grid {
            offsetX = 0;
            offsetY = 15360;
        };
    };

    class 2PzD_Rosche_DutchNames : WL_Rosche {
        description = "Rosche (Dutch names)";
        class Names {
            class vill_jarlitz {
                name = "Ommen";
                // name = "Jarlitz";
                position[] = {9217.66,7799.33};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_suttorf {
                name = "Hezelaar";
                // name = "Suttorf";
                position[] = {9149.41,9732.43};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_dormte {
                name = "Alteveer";
                // name = "Dormte";
                position[] = {9544.28,10612.81};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_stocken {
                name = "Broekveld";
                // name = "Stocken";
                position[] = {7357.3,9278.81};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_riestedt {
                name = "Hild";
                // name = "Riestedt";
                position[] = {5789.47,8156.62};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class town_oetzen {
                name = "Kerkrade";
                // name = "Oetzen";
                position[] = {7380.67,10611.22};
                type = "NameCityCapital";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_masendorf {
                name = "Saasveld";
                // name = "Masendorf";
                position[] = {4608.18,9740.12};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class town_molzen {
                name = "Hoonte";
                // name = "Molzen";
                position[] = {2617.67,8608.77};
                type = "NameCityCapital";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_oetzendorf {
                name = "Dichteren";
                // name = "Oetzendorf";
                position[] = {5444.24,12866.07};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_Testorf {
                name = "Slikkendam";
                // name = "Testorf";
                position[] = {10132.8,13181.57};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class misc_quarry_schwem {
                name = "Sand Pit";
                // name = "Sand Pit";
                position[] = {12098.18,11597.7};
                type = "RockArea";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_bruchwedel {
                name = "Groede";
                // name = "Bruchwedel";
                position[] = {10740.31,11650.41};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_hagen {
                name = "Zwilbroek";
                // name = "Hagen";
                position[] = {11657.69,14742.41};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_weste {
                name = "Os";
                // name = "Weste";
                position[] = {9187.52,14754.92};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_torwe {
                name = "Kloosterhoek";
                // name = "Torwe";
                position[] = {13381.95,14841.37};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_gross_malchau {
                name = "Hexel";
                // name = "Gross Malchau";
                position[] = {14361.2,14775.97};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_schwemlitz {
                name = "Steenwijkerwold";
                // name = "Schwemlitz";
                position[] = {12636.05,11250.33};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_borg {
                name = "Druten";
                // name = "Borg";
                position[] = {12162.07,9532.32};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_katzien {
                name = "Berghuis";
                // name = "Katzien";
                position[] = {13172.11,8659.85};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class town_rosche {
                name = "Terhuizemerhoven";
                // name = "Rosche";
                position[] = {12622.2,6794.72};
                type = "NameCityCapital";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_stutensen {
                name = "Tonsel";
                // name = "Stutensen";
                position[] = {14861.2,8697.24};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_molbath {
                name = "Dirkshorn";
                // name = "Molbath";
                position[] = {9686.88,4189.72};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class town_ratzlingen {
                name = "Tweedeweg";
                // name = "Ratzlingen";
                position[] = {7334.98,5709.7};
                type = "NameCityCapital";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_rassau {
                name = "Tranendal";
                // name = "Rassau";
                position[] = {8357.59,3673.21};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class town_hanstedt {
                name = "Boornzwaag";
                // name = "Hanstedt";
                position[] = {6888.97,3681.93};
                type = "NameCityCapital";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class pond_triangle {
                name = "Driehoeksven";
                // name = "Pond";
                position[] = {7090.61,7534.9};
                type = "NameMarine";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class pond_rosche {
                name = "Terhuizerven";
                // name = "Pond";
                position[] = {13453.26,7700.81};
                type = "NameMarine";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class stream_wipp_1 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {6930.33,9917.34};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 26.0;
            };
            class stream_wipp_2 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {8282.63,9989.13};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 351.0;
            };
            class stream_wipp_4 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {5702.76,9937.3};
                type = "NameMarine";
                radiusA = 330.38;
                radiusB = 211.8;
                angle = 354.0;
            };
            class stream_wipp_6 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {4731.56,9592.62};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 308.0;
            };
            class stream_wipp_7 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {9924.59,10352.75};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 324.0;
            };
            class airfield {
                name = "Luftwaffe Luftstutzpunkt";
                // name = "Flughafen";
                position[] = {765,4195};
                type = "NameCityCapital";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_neumuhle {
                name = "Berghuis";
                // name = "Neumuhle";
                position[] = {11109.14,9821.9};
                type = "NameCity";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_probien {
                name = "Chaamdijk";
                // name = "Probien";
                position[] = {13054.23,11980.97};
                type = "NameVillage";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_schlagte {
                name = "Burg";
                // name = "Schlagte";
                position[] = {11500.24,13986.09};
                type = "NameVillage";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fir_1 {
                name = "Wilhelminawoud";
                // name = "Oetzer Gehege";
                position[] = {8133.59,12420.72};
                type = "VegetationFir";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fir_2 {
                name = "Oost Bruinbos";
                // name = "Absunder";
                position[] = {6107.06,11661.23};
                type = "VegetationFir";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fir_3 {
                name = "Koningswoud";
                // name = "";
                position[] = {14286.77,12860.09};
                type = "VegetationFir";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fir_4 {
                name = "Koningswoud";
                // name = "";
                position[] = {15027.34,10630.31};
                type = "VegetationFir";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fir_5 {
                name = "West Bruinbos";
                // name = "Brandgehege";
                position[] = {4227.95,12172.22};
                type = "VegetationFir";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class vill_klein_malchau {
                name = "Winssen";
                // name = "Klein Malchau";
                position[] = {10110.69,5507.31};
                type = "NameVillage";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fir_8 {
                name = "Hoogwoud";
                // name = "Hohes Holz";
                position[] = {10281.02,6924.56};
                type = "VegetationFir";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fir_9 {
                name = "Hertog Hendrik Woud";
                // name = "Deine";
                position[] = {2539.03,6276.24};
                type = "VegetationFir";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fir_10 {
                name = "Langwoud";
                // name = "Langeholz";
                position[] = {1108.77,8081.29};
                type = "VegetationFir";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fir_11 {
                name = "Koningswoud";
                // name = "";
                position[] = {12739.13,13318.88};
                type = "VegetationFir";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fir_12 {
                name = "Tweedewegsebos";
                // name = "";
                position[] = {9112.83,5104.52};
                type = "VegetationFir";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class hill_landfill {
                name = "Landfill";
                // name = "Landfill";
                position[] = {13493.69,9686.88};
                type = "Hill";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class lake_olden {
                name = "Julianaven";
                // name = "Oldenstadter See";
                position[] = {1580.31,6466.5};
                type = "NameMarine";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fr71_cent {
                name = "Rijksweg 071";
                // name = "";
                position[] = {8978.55,3093.68};
                type = "FedRoad071";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fr71_east {
                name = "Rijksweg 071";
                // name = "";
                position[] = {13146.39,1097.29};
                type = "FedRoad071";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fr71_west {
                name = "Rijksweg 071";
                // name = "";
                position[] = {3678.36,3444.51};
                type = "FedRoad071";
                radiusA = 382.08;
                radiusB = 244.94;
                angle = 0.0;
            };
            class fr191_cent {
                name = "Rijksweg 191";
                // name = "";
                position[] = {8335.52,9224.53};
                type = "FedRoad191";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fr191_east {
                name = "Rijksweg 191";
                // name = "";
                position[] = {13709.52,11625.5};
                type = "FedRoad191";
                radiusA = 746.25;
                radiusB = 478.41;
                angle = 0.0;
            };
            class fr191_west {
                name = "Rijksweg 191";
                // name = "";
                position[] = {3180.1,6029.12};
                type = "FedRoad191";
                radiusA = 746.25;
                radiusB = 478.41;
                angle = 0.0;
            };
            class fr493_cent {
                name = "Rijksweg 493";
                // name = "";
                position[] = {9682.75,6195.43};
                type = "FedRoad493";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fr493_east {
                name = "Rijksweg 493";
                // name = "";
                position[] = {13788.23,7188.22};
                type = "FedRoad493";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class fr493_west {
                name = "Rijksweg 493";
                // name = "";
                position[] = {3395.75,5480.17};
                type = "FedRoad493";
                radiusA = 932.82;
                radiusB = 598.01;
                angle = 0.0;
            };
            class fir_13 {
                name = "Wilhelminawoud";
                // name = "Wester Gehege";
                position[] = {8648.91,13718.79};
                type = "VegetationFir";
                radiusA = 300.0;
                radiusB = 300.0;
                angle = 0.0;
            };
            class pond_ratz_1 {
                name = "Laagsewater";
                // name = "Oberer Teich";
                position[] = {5267.38,6499.87};
                type = "NameMarine";
                radiusA = 618.95;
                radiusB = 413.67;
                angle = 0.0;
            };
            class cem_testorf {
                name = "Cemetary";
                // name = "Cemetary";
                position[] = {9794.48,14035.0};
                type = "NameLocal";
                radiusA = 103.84;
                radiusB = 69.4;
                angle = 0.0;
            };
            class biogas_rosche {
                name = "Royal Dutch Shell Storage";
                // name = "BioGas Plant";
                position[] = {13197.38,7914.86};
                type = "NameLocal";
                radiusA = 202.82;
                radiusB = 135.55;
                angle = 0.0;
            };
            class treat_rosche {
                name = "Gemeentelijke Waterzuivering";
                // name = "Water Treatment Plant";
                position[] = {12707.05,7822.25};
                type = "NameLocal";
                radiusA = 202.82;
                radiusB = 135.55;
                angle = 0.0;
            };
            class lake_jast {
                name = "Kanaal meer";
                // name = "Jastorfer See";
                position[] = {2051.36,12446.42};
                type = "NameMarine";
                radiusA = 495.16;
                radiusB = 330.94;
                angle = 0.0;
            };
            class waste_dump {
                name = "Veld Afvalverwerking en Zn.";
                // name = "Waste Dump";
                position[] = {13316.06,9521.24};
                type = "NameLocal";
                radiusA = 83.08;
                radiusB = 55.52;
                angle = 0.0;
            };
            class klein_hesebeck {
                name = "Vraggelen";
                // name = "Klein Hesebeck";
                position[] = {3222.85,14473.9};
                type = "NameCity";
                radiusA = 202.82;
                radiusB = 135.55;
                angle = 0.0;
            };
            class schlieckau {
                name = "Diffelen";
                // name = "Schlieckau";
                position[] = {9161.26,3281.97};
                type = "NameCity";
                radiusA = 618.95;
                radiusB = 413.67;
                angle = 0.0;
            };
            class wellendorf {
                name = "Hallumerhoek";
                // name = "Wellendorf";
                position[] = {10323.16,2640.77};
                type = "NameCity";
                radiusA = 495.16;
                radiusB = 330.94;
                angle = 0.0;
            };
            class mehre {
                name = "Schaamdijk";
                // name = "Mehre";
                position[] = {4666.77,2588.08};
                type = "NameVillage";
                radiusA = 162.26;
                radiusB = 108.44;
                angle = 0.0;
            };
            class nateln {
                name = "Doldersum";
                // name = "Nateln";
                position[] = {13081.2,5351.33};
                type = "NameCity";
                radiusA = 396.13;
                radiusB = 264.75;
                angle = 0.0;
            };
            class teyendorf {
                name = "Nieuwkuik";
                // name = "Teyendorf";
                position[] = {14746.45,5692.18};
                type = "NameCity";
                radiusA = 495.16;
                radiusB = 330.94;
                angle = 0.0;
            };
            class batensen {
                name = "Schore";
                // name = "Batensen";
                position[] = {12902.63,3353.93};
                type = "NameCity";
                radiusA = 316.9;
                radiusB = 211.8;
                angle = 0.0;
            };
            class gross_ellenberg {
                name = "Velnerhoek";
                // name = "Gross Ellenberg";
                position[] = {12229.11,1273.46};
                type = "NameCity";
                radiusA = 129.8;
                radiusB = 86.75;
                angle = 0.0;
            };
            class klein_pretzier {
                name = "Buitenpost";
                // name = "Klein Pretzier";
                position[] = {8985.54,861.46};
                type = "NameVillage";
                radiusA = 103.84;
                radiusB = 69.4;
                angle = 0.0;
            };
            class kahlstorf {
                name = "Ittervoort";
                // name = "Kahlstorf";
                position[] = {8038.94,873.36};
                type = "NameVillage";
                radiusA = 83.08;
                radiusB = 55.52;
                angle = 0.0;
            };
            class klein_liedern {
                name = "Leije";
                // name = "Klein Liedern";
                position[] = {3817.31,4498.48};
                type = "NameVillage";
                radiusA = 316.9;
                radiusB = 211.8;
                angle = 0.0;
            };
            class tatern {
                name = "Houwerxijl";
                // name = "Tatern";
                position[] = {3889.39,5047.65};
                type = "NameVillage";
                radiusA = 396.13;
                radiusB = 264.75;
                angle = 0.0;
            };
            class pieperhofen {
                name = "Zuid Doldersum";
                // name = "Pieperhofen";
                position[] = {3712.47,6414.91};
                type = "NameCity";
                radiusA = 103.84;
                radiusB = 69.4;
                angle = 0.0;
            };
            class woltersburg_sud {
                name = "";
                // name = "Woltersburg Sud";
                position[] = {3449.38,6742.68};
                type = "NameVillage";
                radiusA = 162.26;
                radiusB = 108.44;
                angle = 0.0;
            };
            class woltersburg {
                name = "Noord Doldersum";
                // name = "Woltersburg";
                position[] = {3042.86,6886.57};
                type = "NameCity";
                radiusA = 162.26;
                radiusB = 108.44;
                angle = 0.0;
            };
            class jastorf_culture {
                name = "Grauw";
                // name = "Jastorf";
                position[] = {2673.97,13380.58};
                type = "NameCity";
                radiusA = 316.9;
                radiusB = 211.8;
                angle = 0.0;
            };
            class heitbrack {
                name = "Lamswaarde";
                // name = "Heitbrack";
                position[] = {2068.16,11785.98};
                type = "NameVillage";
                radiusA = 162.26;
                radiusB = 108.44;
                angle = 0.0;
            };
            class halligdorf {
                name = "Hulst";
                // name = "Halligdorf";
                position[] = {882.39,1577.11};
                type = "NameCity";
                radiusA = 253.52;
                radiusB = 169.44;
                angle = 0.0;
            };
            class nestau1 {
                name = "Schaft";
                // name = "Nestau";
                position[] = {14426.4,1925.67};
                type = "NameCity";
                radiusA = 253.52;
                radiusB = 169.44;
                angle = 0.0;
            };
            class ripdorf {
                name = "Rijsbergen";
                // name = "Ripdorf";
                position[] = {709.94,7240.81};
                type = "NameVillage";
                radiusA = 570.98;
                radiusB = 413.0;
                angle = 0.0;
            };
            class emmendorf {
                name = "Emmen";
                // name = "Emmendorf";
                position[] = {314.24,11081.84};
                type = "NameCity";
                radiusA = 365.43;
                radiusB = 264.32;
                angle = 0.0;
            };
            class klein_bunstorf {
                name = "Hugten";
                // name = "Klein Bunstorf";
                position[] = {1522.94,14731.68};
                type = "NameCity";
                radiusA = 233.88;
                radiusB = 169.16;
                angle = 0.0;
            };
            class town_gross_Liedern {
                name = "Weite";
                // name = "Gross Liedern";
                position[] = {2725.71,3775.59};
                type = "NameVillage";
                radiusA = 635.01;
                radiusB = 477.62;
                angle = 0.0;
            };
            class vill_lehmke {
                name = "Achtmaal";
                // name = "Lehmke";
                position[] = {5357.11,749.87};
                type = "NameVillage";
                radiusA = 325.13;
                radiusB = 244.54;
                angle = 0.0;
            };
            class stream_wipp_8 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {10432.05,10067.95};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 32.582;
            };
            class stream_whipp_9 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {11384.08,9200.55};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 43.316;
            };
            class stream_whipp_10 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {11930.48,8569.91};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 18.817;
            };
            class stream_whipp_11 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {12171.98,7756.66};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 42.1;
            };
            class stream_whipp_12 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {12594.08,7210.26};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 34.362;
            };
            class stream_whipp13 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {12852.63,6059.39};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 30.619;
            };
            class stream_whipp_14 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {13521.33,5794.42};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 20.96;
            };
            class stream_whipp_15 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {14495.83,5404.98};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 342.416;
            };
            class stream_whipp_16 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {4212.3,8974.7};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 354.262;
            };
            class stream_whipp_17 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {3419.69,9015.6};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 323.154;
            };
            class stream_whipp_18 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {2148.61,8417.07};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 316.42;
            };
            class stream_whipp_19 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {2308.25,7488.68};
                type = "NameMarine";
                radiusA = 330.38;
                radiusB = 211.8;
                angle = 33.455;
            };
            class stream_whipp_20 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {2759.28,7058.84};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 52.372;
            };
            class stream_whipp_21 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {2971.22,6579.3};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 33.507;
            };
            class stream_whipp_22 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {2990.48,6152.89};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 324.175;
            };
            class stream_whipp_23 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {2587.73,5871.84};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 321.771;
            };
            class stream_whipp_24 {
                name = "Huizebeek";
                // name = "Wipperau";
                position[] = {2260.69,5477.41};
                type = "NameMarine";
                radiusA = 211.44;
                radiusB = 135.55;
                angle = 35.358;
            };
        };
    };
};
