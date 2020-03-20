
class CfgPatches {
    class 2Pzd_SdKfz251_Desert_Medical {
        author = "Wilhelm Haas";
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"WW2_Assets_c_Vehicles_WheeledAPC_c_SdKfz251"};
    };
};

class CfgVehicles {
    class LIB_WheeledTracked_APC_base;

    class LIB_SdKfz251_base: LIB_WheeledTracked_APC_base {
        class textureSources {
            class desert_m {
                displayName = "DAK Medical";
                author = "Wilhelm Haas (Drofseh)";
                textures[] = {"\2pzd_sdkfz251_desert_medical\Hull_DAK_Medical_co.paa","\WW2\Assets_t\Vehicles\WheeledAPC_t\IF_SdKfz251\Interrior_co.paa","\WW2\Assets_t\Vehicles\WheeledAPC_t\IF_SdKfz251\Panel_co.paa","WW2\Assets_t\Vehicles\WheeledAPC_t\IF_SdKfz251\Track\0_ca.paa","\WW2\Assets_t\Vehicles\WheeledAPC_t\IF_SdKfz251\Wheels_co.paa","WW2\Assets_t\Weapons\MachineGun_Light_t\IF_MG42\Mg42_co.paa","\WW2\Core_t\IF_Decals_t\German\_num\2.paa","\WW2\Core_t\IF_Decals_t\German\_num\5.paa","\WW2\Core_t\IF_Decals_t\German\_num\5.paa"};
                factions[] = {"LIB_WEHRMACHT"};
            };
        };
    };

    class LIB_DAK_SdKfz251;

    class LIB_DAK_SdKfz251_Medical: LIB_DAK_SdKfz251 {
        author = "Wilhelm Haas (Drofseh)";
        crew = "LIB_DAK_Soldier";
        displayName = "Sd.Kfz. 251 (Medical)";
        faction = "LIB_DAK";
        hiddenSelectionsTextures[] = {"\2pzd_sdkfz251_desert_medical\Hull_DAK_Medical_co.paa","\WW2\Assets_t\Vehicles\WheeledAPC_t\IF_SdKfz251\Interrior_co.paa","\WW2\Assets_t\Vehicles\WheeledAPC_t\IF_SdKfz251\Panel_co.paa","WW2\Assets_t\Vehicles\WheeledAPC_t\IF_SdKfz251\Track\0_ca.paa","\WW2\Assets_t\Vehicles\WheeledAPC_t\IF_SdKfz251\Wheels_co.paa","WW2\Assets_t\Weapons\MachineGun_Light_t\IF_MG42\Mg42_co.paa","\WW2\Core_t\IF_Decals_t\German\_num\2.paa","\WW2\Core_t\IF_Decals_t\German\_num\5.paa","\WW2\Core_t\IF_Decals_t\German\_num\5.paa"};
        scope = 2;
        side = 1;
        typicalCargo[] = {"LIB_DAK_Soldier","LIB_DAK_Soldier","LIB_DAK_Soldier"};
    };
};