#include "script_component.hpp"

class CfgPatches {
    class 2pzd_ace_customization {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        units[] = {};
        magazineWell[] = {};
        magazines[] = {};
        weapons[] = {"ACE_painkillers"};
        requiredAddons[] = { // Add all required Ace Medical stuff as well.
            "Haas_WWII_Rebalance",
            // "ace_spectator",
            "ace_medical",
            "ace_medical_ai",
            "ace_medical_blood",
            "ace_medical_damage",
            "ace_medical_engine",
            "ace_medical_feedback",
            "ace_medical_gui",
            "ace_medical_statemachine",
            "ace_medical_status",
            "ace_medical_treatment",
            "ace_medical_vitals"
        };
    };
}; // End CfgPatches

#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
#include "CfgReplacementItems.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
