class ace_medical_treatment_actions {

    // - Syringes -------------------------------------------------------------
    class Morphine;
    class Painkillers: Morphine { //2PzD
        displayName = "$STR_2PzD_ACE_Medical_Give_Painkilllers";
        displayNameProgress = "$STR_2PzD_ACE_Medical_Giving_Painkilllers";
        allowSelfTreatment = 1;
        allowedSelections[] = {"head"};
        animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
        callbackSuccess = "ace_medical_treatment_fnc_medication";
        category = "medication";
        condition = "!(_patient getVariable ['ACE_isUnconscious',false])";
        icon = "2pzd_ace_customization\ui\icons\painkillers.paa";
        items[] = {"ACE_painkillers"};
        litter[] = {{"ACE_MedicalLitter_painkillers"}};
        // sounds[] = {{QPATHTO_R(sounds\Inject.ogg),1,1,50}};//TODO
        treatmentTime = 5;
    };
};
