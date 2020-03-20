class CBA_Extended_EventHandlers;
class CfgVehicles {
/*
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Medical {
            };
        };
    };
*/
    // Medical litter classes
    class Thing;
    class ACE_MedicalLitterBase;
    class ACE_MedicalLitter_painkillers: ACE_MedicalLitterBase {
        model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
    };

    // Treatment items
    class Item_Base_F;
    class ACE_painkillersItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = Painkillers;
        author = "Wilhelm Haas";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(ACE_painkillers,1);
        };
    };

    // Medical supply crates
    class NATO_Box_Base;
    class ACE_medicalSupplyCrate: NATO_Box_Base {
        class TransportItems {
            MACRO_ADDITEM(ACE_painkillers,25);
            /*
            MACRO_ADDITEM(ACE_fieldDressing,50);
            MACRO_ADDITEM(ACE_morphine,25);
            MACRO_ADDITEM(ACE_epinephrine,25);
            MACRO_ADDITEM(ACE_bloodIV,15);
            MACRO_ADDITEM(ACE_bloodIV_500,15);
            MACRO_ADDITEM(ACE_bloodIV_250,15);
            MACRO_ADDITEM(ACE_bodyBag,10);
            */
        };
    };
    class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate {
        class TransportItems {
            MACRO_ADDITEM(ACE_painkillers,15);
            /*
            MACRO_ADDITEM(ACE_fieldDressing,25);
            MACRO_ADDITEM(ACE_packingBandage,25);
            MACRO_ADDITEM(ACE_elasticBandage,25);
            MACRO_ADDITEM(ACE_tourniquet,15);
            MACRO_ADDITEM(ACE_splint,15);
            MACRO_ADDITEM(ACE_morphine,15);
            MACRO_ADDITEM(ACE_adenosine,15);
            MACRO_ADDITEM(ACE_epinephrine,15);
            MACRO_ADDITEM(ACE_plasmaIV,7);
            MACRO_ADDITEM(ACE_plasmaIV_500,7);
            MACRO_ADDITEM(ACE_plasmaIV_250,7);
            MACRO_ADDITEM(ACE_salineIV,7);
            MACRO_ADDITEM(ACE_salineIV_500,7);
            MACRO_ADDITEM(ACE_salineIV_250,7);
            MACRO_ADDITEM(ACE_bloodIV,7);
            MACRO_ADDITEM(ACE_bloodIV_500,7);
            MACRO_ADDITEM(ACE_bloodIV_250,7);
            MACRO_ADDITEM(ACE_quikClot,20);
            MACRO_ADDITEM(ACE_personalAidKit,3);
            MACRO_ADDITEM(ACE_surgicalKit,2);
            MACRO_ADDITEM(ACE_bodyBag,5);
            */
        };
    };
};
