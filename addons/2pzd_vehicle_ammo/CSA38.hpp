
    class csa38_kolo_base : Bicycle {
        weapons[] = {"csa38_Bicycle_Horn"};
    };
    class CSA38Truck_01_base_F : Truck_F {
        weapons[] = {"TruckHorn2"};
    };
    class CSA38_pragarv_base : CSA38Truck_01_base_F {
        weapons[] = {"CSA38_old_Horn"};
    };
    class CSA38_opelblitz_base : CSA38Truck_01_base_F {
        weapons[] = {"CSA38_old_Horn"};
    };

    class csa38_tank_base : Tank_F {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics : NewTurret {};
                };
            };
            class MainTurret2 : MainTurret {
                class Turrets {};
            };
        };
    };

    class CSA38_TCvz33 : csa38_tank_base {
        weapons[] = {"csa38_zb26MG"};
        magazines[] = {"csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg"};
        class Turrets {
            class MainTurret : NewTurret {
                weapons[] = {"csa38_zb26MG"};
                magazines[] = {"csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2", "csa38_zb26mg2"};
            };
        };
    };
    class CSA38_ltvz34 : csa38_tank_base {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_37mm_A3", "CSA38_ZB53mgveh"};
                magazines[] = {"CSA38_37mm_A3PII_AP", "CSA38_37mm_A3PII_HE", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg4", "CSA38_ZB53mg4", "CSA38_ZB53mg4", "CSA38_ZB53mg4", "CSA38_ZB53mg4"};
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"CSA38_ZB53mgveh2"};
                magazines[] = {"CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg4", "CSA38_ZB53mg4", "CSA38_ZB53mg4", "CSA38_ZB53mg4"};
            };
        };
    };
    class CSA38_ltvz35 : csa38_tank_base {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_37mm_A3", "CSA38_ZB53mgveh"};
                magazines[] = {"CSA38_37mm_A3_HE", "CSA38_37mm_A3_AP", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg4", "CSA38_ZB53mg4", "CSA38_ZB53mg4", "CSA38_ZB53mg4", "CSA38_ZB53mg4"};
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"CSA38_ZB53mgveh2"};
                magazines[] = {"CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg4", "CSA38_ZB53mg4", "CSA38_ZB53mg4", "CSA38_ZB53mg4"};
            };
        };
    };
    class CSA38_ltm35_1 : CSA38_ltvz35 {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_37mm_A3G", "CSA38_ZB53mgvehG"};
                magazines[] = {"CSA38_37mm_A3_HEG", "CSA38_37mm_A3_APG", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G"};
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"CSA38_ZB53mgveh2G"};
                magazines[] = {"CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G"};
            };
        };
    };
    class CSA38_ltm35_FR2 : CSA38_ltm35_FR {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_ZB53mgvehG"};
                magazines[] = {"CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G"};
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"CSA38_ZB53mgveh2G"};
                magazines[] = {"CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg3G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G", "CSA38_ZB53mg4G"};
            };
        };
    };
    class CSA38_R2Tacam : CSA38_R2 {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_76mm_ZIS3"};
                magazines[] = {"CSA38_76mm_F34_AP3", "CSA38_76mm_F34_HE3"};
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"CSA38_ZB53mgveh2"};
                magazines[] = {"CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg3", "CSA38_ZB53mg4", "CSA38_ZB53mg4", "CSA38_ZB53mg4", "CSA38_ZB53mg4"};
            };
        };
    };
    class CSA38_ltvz38 : csa38_tank_base {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_37mm_A7", "CSA38_ZB53mgveh"};
                magazines[] = {"CSA38_37mm_A7_AP", "CSA38_37mm_A7_HE", "CSA38_ZB53mg", "CSA38_ZB53mg", "CSA38_ZB53mg", "CSA38_ZB53mg", "CSA38_ZB53mg2", "CSA38_ZB53mg2"};
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"CSA38_ZB53mgveh2"};
                magazines[] = {"CSA38_ZB53mg", "CSA38_ZB53mg", "CSA38_ZB53mg", "CSA38_ZB53mg2", "CSA38_ZB53mg2"};
            };
        };
    };
    class CSA38_lt40 : CSA38_ltvz38 {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_37mm_A7", "CSA38_ZB53mgveh"};
                magazines[] = {"CSA38_37mm_A7LT40_AP", "CSA38_37mm_A7LT40_HE", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg6", "CSA38_ZB53mg6", "CSA38_ZB53mg6", "CSA38_ZB53mg6"};
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"CSA38_ZB53mgveh2"};
                magazines[] = {"CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg6", "CSA38_ZB53mg6", "CSA38_ZB53mg6"};
            };
        };
    };
    class CSA38_lt40kul : CSA38_lt40 {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_ZB53mgveh"};
                magazines[] = {"CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg6", "CSA38_ZB53mg6", "CSA38_ZB53mg6", "CSA38_ZB53mg6"};
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"CSA38_ZB53mgveh2"};
                magazines[] = {"CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg5", "CSA38_ZB53mg6", "CSA38_ZB53mg6", "CSA38_ZB53mg6"};
            };
        };
    };
    class CSA38_ltm38 : CSA38_ltvz38 {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_37mm_A7G", "CSA38_ZB53mgvehG"};
                magazines[] = {"CSA38_37mm_A7_APG", "CSA38_37mm_A7_HEG", "CSA38_ZB53mgG", "CSA38_ZB53mgG", "CSA38_ZB53mgG", "CSA38_ZB53mgG", "CSA38_ZB53mg2G", "CSA38_ZB53mg2G"};
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"CSA38_ZB53mgveh2G"};
                magazines[] = {"CSA38_ZB53mgG", "CSA38_ZB53mgG", "CSA38_ZB53mgG", "CSA38_ZB53mg2G", "CSA38_ZB53mg2G"};
            };
        };
    };
    class CSA38_pzkpfwI : csa38_tank_base {
        class Turrets : Turrets {
            class MainTurret : NewTurret {
                weapons[] = {"CSA38_MG13mg2"};
                magazines[] = {"CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP"};
            };
        };
    };
    class CSA38_pzbfwI : CSA38_pzkpfwI {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_MG34mgveh3"};
                magazines[] = {"csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP"};
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        weapons[] = {"csa38_pohled"};
                    };
                };
            };
        };
    };
    class CSA38_pzkpfwIA : CSA38_pzkpfwI {
        class Turrets : Turrets {
            class MainTurret : NewTurret {
                weapons[] = {"CSA38_MG13mg2"};
                magazines[] = {"CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mg", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP", "CSA38_2xMG13mgAP"};
            };
        };
    };
    class CSA38_pzbfwIA : CSA38_pzkpfwIA {
        class Turrets : Turrets {
            class MainTurret : NewTurret {
                weapons[] = {"csa38_pohled"};
            };
        };
    };
    class CSA38_pzII : csa38_tank_base {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_KwK30_20L55", "CSA38_MG34mgveh"};
                magazines[] = {"CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP"};
            };
        };
    };
    class CSA38_pzIIb : CSA38_pzII {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                magazines[] = {"CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP"};
            };
        };
    };
    class CSA38_pzIIa : CSA38_pzII {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                magazines[] = {"CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWK", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "CSA38_20mm_KWKHE", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP"};
            };
        };
    };
    class CSA38_pzIIID : csa38_tank_base {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_KWKL45", "CSA38_MG34mgveh", "CSA38_MG34mgveh4"};
                magazines[] = {"CSA38_37mm_PzGr", "CSA38_37mm_SprGr", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP"};
                class Turrets {
                    class CommanderOptics : NewTurret {
                        weapons[] = {"csa38_pohled"};
                    };
                    class MainTurret3 : NewTurret {
                        weapons[] = {"csa38_pohled"};
                    };
                };
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"CSA38_MG34mgveh2"};
                magazines[] = {"Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP", "Csa38_mg34mg2AP"};
            };
        };
    };
    class CSA38_StugIII : CSA38_pzIIID {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_KWK37L24"};
                magazines[] = {"csa38_75mm_KGrrotPz", "csa38_75mm_GR38HL4"};
                class Turrets {
                    class CommanderOptics : NewTurret {
                        weapons[] = {"csa38_pohled"};
                    };
                    class MainTurret2 : NewTurret {
                        weapons[] = {"csa38_pohled"};
                    };
                };
            };
        };
    };
    class CSA38_pzIV : csa38_tank_base {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_KWK37L24", "CSA38_MG34mgveh"};
                magazines[] = {"csa38_75mm_GR38HL", "csa38_75mm_KGrrotPz2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP"};
                class Turrets {
                    class CommanderOptics : NewTurret {
                        weapons[] = {"csa38_pohled"};
                    };
                    class MainTurret3 : NewTurret {
                        weapons[] = {"csa38_pohled"};
                    };
                };
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"CSA38_MG34mgveh2"};
                magazines[] = {"csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP"};
            };
        };
    };
    class CSA38_pzIVB : CSA38_pzIV {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_KWK37L24", "CSA38_MG34mgveh"};
                magazines[] = {"csa38_75mm_GR38HL2", "csa38_75mm_KGrrotPz3", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP"};
                class Turrets {
                    class CommanderOptics : NewTurret {
                        weapons[] = {"csa38_pohled"};
                    };
                    class MainTurret3 : NewTurret {
                        weapons[] = {"csa38_pohled"};
                    };
                };
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"csa38_pohled"};
            };
        };
    };
    class CSA38_pzIVcv38 : CSA38_pzIV {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_KWK37L24", "CSA38_MG34mgveh"};
                magazines[] = {"csa38_75mm_GR38HL2", "csa38_75mm_KGrrotPz3", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP"};
                class Turrets {
                    class CommanderOptics : NewTurret {
                        weapons[] = {"csa38_pohled"};
                    };
                    class MainTurret3 : NewTurret {
                        weapons[] = {"csa38_pohled"};
                    };
                };
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"csa38_pohled"};
            };
        };
    };
    class CSA38_pzIV_W : CSA38_pzIV {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_KWK37L24", "CSA38_MG34mgveh"};
                magazines[] = {"csa38_75mm_GR38HL", "csa38_75mm_PZGR39", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP"};
            };
        };
    };
    class CSA38_pzIVB_W : CSA38_pzIVB {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_KWK37L24", "CSA38_MG34mgveh"};
                magazines[] = {"csa38_75mm_GR38HL2", "csa38_75mm_PZGR392", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP"};
            };
        };
    };
    class CSA38_pzIVC_W : CSA38_pzIVcv38 {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_KWK37L24", "CSA38_MG34mgveh"};
                magazines[] = {"csa38_75mm_GR38HL2", "csa38_75mm_PZGR392", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP", "csa38_mg34mg2AP"};
            };
        };
    };

    class csa38_cromwell_1 : csa38_tank_base2 {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_75mm_MKV", "CSA38_BESAmgveh"};
                magazines[] = {"CSA38_SMOKE_M89", "CSA38_HE_M48", "CSA38_APC_M61", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8"};
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        weapons[] = {"csa38_pohled"};
                    };
                    class MainTurret3 : NewTurret {
                        weapons[] = {"csa38_mortarMkIA"};
                        magazines[] = {"csa38_MinaMKI", "csa38_MinaMKI", "csa38_MinaMKI", "csa38_MinaMKI", "csa38_MinaMKI", "csa38_MinaMKI", "csa38_MinaMKI", "csa38_MinaMKI", "csa38_MinaMKI", "csa38_MinaMKI", "csa38_MinaMKI", "csa38_MinaMKI", "csa38_MinaMKI"};
                    };
                };
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"CSA38_BESAmgveh2"};
                magazines[] = {"CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8"};
            };
        };
    };
    class csa38_cromwell_DCS : csa38_cromwell_D {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_95mm_MKI", "CSA38_BESAmgveh"};
                magazines[] = {"CSA38_HES_MKI", "CSA38_HES_MKIa", "CSA38_SMOKE_MKI", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8"};
            };
        };
    };
    class csa38_cromwell_4 : csa38_cromwell_1 {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_95mm_MKI", "CSA38_BESAmgveh"};
                magazines[] = {"CSA38_SMOKE_MKI", "CSA38_HES_MKI", "CSA38_HES_MKIa", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8"};
            };
        };
    };
    class csa38_valentineMkII : csa38_tank_base2 {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_40mm_QF", "CSA38_BESAmgveh"};
                magazines[] = {"CSA38_40mm_QF_AP", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8"};
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        weapons[] = {"csa38_pohled"};
                    };
                };
            };
        };
    };
    class csa38_t34cz1 : csa38_tank_base2 {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_76mm_F34", "CSA38_DTvz29"};
                magazines[] = {"CSA38_76mm_F34_AP", "CSA38_76mm_F34_HE", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag"};
            };
            class MainTurret2 : MainTurret2 {
                weapons[] = {"CSA38_DTvz292"};
                magazines[] = {"CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag", "CSA38_DTvz29mag"};
            };
        };
    };
    class csa38_cromwell_command_CZ : csa38_cromwell_1 {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                magazines[] = {"CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8"};
                weapons[] = {"CSA38_BESAmgveh"};
            };
        };
    };
    class csa38_cromwell_command_UK : csa38_cromwell_C {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                magazines[] = {"CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8"};
                weapons[] = {"CSA38_BESAmgveh"};
            };
        };
    };
    class csa38_valentineMkII_command : csa38_valentineMkII {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                magazines[] = {"CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg7", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8", "CSA38_ZB53mg8"};
                weapons[] = {"CSA38_BESAmgveh"};
            };
        };
    };
