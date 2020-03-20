class ace_medical_treatment_actions {

    // - Syringes -------------------------------------------------------------
    class Morphine;
    class Painkillers: Morphine { //2PzD
        displayName = $STR_ACE_Medical_Give_Painkilllers; //TODO
        displayNameProgress = $STR_ACE_Medical_Giving_Painkilllers; //TODO
        //displayName = "Give painkillers";
        //displayNameProgress = "Administering painkillers...";
        allowSelfTreatment = 1;
        allowedSelections[] = {"head"};
        animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
        callbackSuccess = ace_medical_fnc_medication;
        category = "medication";
        condition = "";
        icon = "2pzd_ace_customization\ui\icons\painkillers.paa"; //TODO
        items[] = {"ACE_painkillers"};
        litter[] = {{"ACE_MedicalLitter_painkillers"}}; //TODO
        // sounds[] = {{QPATHTO_R(sounds\Inject.ogg),1,1,50}};//TODO
        treatmentTime = 5;
    };
};
