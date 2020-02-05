class CfgPatches {
    class 2PzD_Anizay_Names {
        author = "2PzD Campaign Team";
        name = "Anizay Names";
        requiredAddons[] = {"tem_anizay"};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};

class CfgWorlds {
    class CAWorld;
    class tem_anizay : CAWorld {
        class Names {
            class FobNauzad {
                name = "Nauzad";
            };
            class FobObeh {
                name = "Obeh";
            };
        };
    };
};
