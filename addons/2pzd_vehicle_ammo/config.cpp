
class CfgPatches {
    class 2pzd_Vehicle_Ammo {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        units[] = {};
        magazineWell[] = {};
        magazines[] = {};
        weapons[] = {};
        requiredAddons[] = {"Haas_WWII_Rebalance"};
    };
}; // End CfgPatches

class cfgVehicles {
    class All;

    class AllVehicles : All {
        class NewTurret {};
    };

    class Motorcycle;

    class Bicycle : Motorcycle {};

    class Tank;

    class Tank_F : Tank {
        class Turrets {
            class MainTurret : NewTurret {
                class Turrets {
                    class CommanderOptics : CommanderOptics {};
                };
            };
        };
    };

    #include "CSA38.hpp";
    #include "Sep39.hpp";

}; // End cfgVehicles