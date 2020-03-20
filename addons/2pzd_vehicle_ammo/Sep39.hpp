
    class w39_tank_base : Tank_F {
        class Turrets : Turrets {
            class MainTurret : MainTurret {};
        };
    };
    class W39_7TP : w39_tank_base {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"CSA38_37mm_WZ37", "CSA38_CKMwz30mgveh"};
                magazines[] = {"CSA38_37mm_PLAP", "CSA38_37mm_PLHE", "CSA38_CKMwz30mg", "CSA38_CKMwz30mg", "CSA38_CKMwz30mg", "CSA38_CKMwz30mg", "CSA38_CKMwz30mg", "CSA38_CKMwz30mg", "CSA38_CKMwz30mg", "CSA38_CKMwz30mg", "CSA38_CKMwz30mg", "CSA38_CKMwz30mg", "CSA38_CKMwz30mg", "CSA38_CKMwz30mg"};
            };
        };
    };
    class w39_tks20mm : w39_tank_base {
        class Turrets {
            class MainTurret : NewTurret {
                weapons[] = {"w39_20mm_PL"};
                magazines[] = {"w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL", "w39_20mm_PL"};
            };
        };
    };
    class w39_tks : w39_tks20mm {
        class Turrets {
            class MainTurret : NewTurret {
                weapons[] = {"w39_ckmwz25veh"};
                magazines[] = {"w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS"};
            };
        };
    };
    class w39_FT17 : w39_tank_base {
        class Turrets {
            class MainTurret : NewTurret {
                weapons[] = {"w39_ckmwz25veh"};
                magazines[] = {"w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserP", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS", "w39_7_92_30xMauserS"};
            };
        };
    };
    class w39_ckm30 : w39_StaticMGWeapon {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"w39_CKMwz30mg"};
                magazines[] = {"CSA38_CKMwz30mg", "CSA38_CKMwz30mg", "CSA38_CKMwz30mg", "CSA38_CKMwz30mg"};
            };
        };
    };
    class w39_boforswz36 : w39_StaticCannon {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"w39_37mm_WZ36"};
                magazines[] = {"w39_37mm_PLAP", "w39_37mm_PLAP", "w39_37mm_PLAP", "w39_37mm_PLAP", "w39_37mm_PLAP", "w39_37mm_PLAP", "w39_37mm_PLAP", "w39_37mm_PLAP", "w39_37mm_PLHE", "w39_37mm_PLHE", "w39_37mm_PLHE"};
            };
        };
    };
    class w39_bofors40 : w39_StaticCannon {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"w39_40mm_WZ36"};
                magazines[] = {"w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL", "w39_40mm_PL"};
            };
        };
    };
