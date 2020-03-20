
class CfgPatches {
    class 2pzd_Orbat {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        units[] = {};
        magazineWell[] = {};
        magazines[] = {};
        weapons[] = {};
        requiredAddons[] = {"Haas_WWII_Rebalance","Font_UraniaCzech"};
    };
}; // End CfgPatches

class cfgORBAT {
    class 2PzD {
        id = 0;
        idType = 0;
        //insignia = "\a3\missions_f_epa\data\img\orbat\csat_ca.paa";
        insignia = "\2pzd_orbat\images\2PzD_Logo_1944.jpg";
        side = "West";
        size = "Division";
        type = "Armored";
        text = "2. Panzer Division";
        textShort = "2nd Panzer Division (Wehrmacht)";
        //texture = "\a3\missions_f_epa\data\img\orbat\B_Aegis_texture_ca.paa";
        color[] = {0,0,0,1};

            class 3PzReg {
                id = 3;
                side = "West";
                size = "Regiment";
                type = "Armored";
                text = "3. Panzer Regiment";
                textShort = "3rd Panzer Regiment";

                class 1PzBat :3PzReg {
                    id = 1;
                    size = "Battalion";
                    text = "Panzer Battalion I";
                    textShort = "Panzer Battalion I";
                };

                class 2PzBat :3PzReg {
                    id = 2;
                    text = "Panzer Battalion II";
                    textShort = "Panzer Battalion II";
                };
            };

            class 2PzgrenReg : 3PzReg {
                id = 2;
                type = "MechanizedInfantry";
                text = "2. Panzergrenadier Regiment";
                textShort = "2nd Panzergrenadier Regiment";

                class 1PzgrenBat : 2PzgrenReg {
                    id = 1;
                    size = "Battalion";
                    text = "Panzergrenadier Battalion I";
                    textShort = "Panzergrenadier Battalion I";

                    class 1Komp : 1PzgrenBat {
                        commander = "Olt. Madsen";
                        size = "Company";
                        text = "1. Kompanie";
                        textShort = "1. Kompanie";

                        class 1Zug : 1Komp {
                            commander = "Olt. Madsen";
                            size = "Platoon";
                            text = "1. Zug";
                            textShort = "1. Zug";

                            class 1Gruppe : 1Zug {
                                commander = "Ufw. Schüttler";
                                size = "Squad";
                                text = "1. Gruppe";
                                textShort = "1. Gruppe";
                            };

                            class 2Gruppe : 1Zug {
                                commander = "Uffz. Vogel";
                                id = 2;
                                text = "2. Gruppe";
                                textShort = "2. Gruppe";
                            };

                            class 3Gruppe : 1Zug {
                                commander = "Uffz. xxxxxxxx";
                                id = 3;
                                text = "3. Gruppe";
                                textShort = "3. Gruppe";
                            };
                        };

                        class 2Zug : 1Zug {
                            commander = "Lt. Brauer";
                            text = "2. Zug";
                            textShort = "2. Zug";

                            class 1Gruppe : 2Zug {
                                commander = "Ufw. Hessel";
                                size = "Squad";
                                text = "1. Gruppe";
                                textShort = "1. Gruppe";
                            };

                            class 2Gruppe : 2Zug {
                                commander = "Uffz. Werrich";
                                id = 2;
                                text = "2. Gruppe";
                                textShort = "2. Gruppe";
                            };

                            class 3Gruppe : 2Zug {
                                commander = "Uffz. xxxxxxxx";
                                id = 3;
                                text = "3. Gruppe";
                                textShort = "3. Gruppe";
                            };
                        };
                    };

                    class 2Komp : 1Komp {
                        id = 2;
                        text = "2. Kompanie";
                        textShort = "2. Kompanie";
                    };

                    class 3Komp : 1Komp {
                        id = 3;
                        text = "3. Kompanie";
                        textShort = "3. Kompanie";
                    };
                };

                class 2PzgrenBat : 2PzgrenReg {
                    id = 2;
                    size = "Battalion";
                    text = "Panzergrenadier Battalion II";
                    textShort = "Panzergrenadier Battalion II";
                };
            };

            class 304PzgrenReg : 3PzReg {
                id = 304;
                type = "MechanizedInfantry";
                text = "304. Panzergrenadier Regiment";
                textShort = "304th Panzergrenadier Regiment";

                class 1PzgrenBat : 304PzgrenReg {
                    id = 1;
                    size = "Battalion";
                    type = "MechanizedInfantry";
                    text = "Panzergrenadier Battalion I";
                    textShort = "Panzergrenadier Battalion I";
                };

                class 2PzgrenBat : 304PzgrenReg {
                    id = 2;
                    size = "Battalion";
                    type = "MechanizedInfantry";
                    text = "Panzergrenadier Battalion II";
                    textShort = "Panzergrenadier Battalion II";
                };
            };

            class 74PzArtReg : 3PzReg {
                id = 304;
                type = "Artillery";
                textShort = "74. Panzergrenadier Regiment";
                text = "74th Panzergrenadier Regiment";
            };

            class 273FlakBat : 74PzArtReg {
                id = 273;
                size = "Battalion";
                textShort = "273. Army Flak Artillery Battalion";
                text = "273rd Army Flak Artillery Battalion";
            };

            class 2ReconBat : 74PzArtReg {
                id = 2;
                textShort = "2. Reconnaissance Battalion";
                text = "2nd. Reconnaissance Battalion";
            };

            class 38PzJagBat : 273FlakBat {
                id = 38;
                type = "Artillery";
                textShort = "38. Panzerjager Battalion";
                text = "38th Panzerjager Battalion";
            };

            class 38PzPioneerBat : 38PzJagBat {
                type = "Support";
                textShort = "38. Panzer Pioneer Battalion";
                text = "38th Panzer Pioneer Battalion";
            };

            class 38PzSigBat : 38PzPioneerBat {
                textShort = "38. Panzer Signals Battalion";
                text = "38th Panzer Signals Battalion";
            };

            class 82SupplyBat : 38PzPioneerBat {
                id = 82;
                textShort = "82. Supply Battalion";
                text = "82nd Supply Battalion";
            };
        };
    };
}; // End cfgORBAT
