// This config accepts both item type numbers and item class names
// Item type numbers need the prefix ItemType_, so for example ItemType_401
// Class names need no special prefix
class ace_medical_replacementItems {
    DOUBLES(ItemType,TYPE_FIRST_AID_KIT)[] = {
        {"ACE_fieldDressing", 4},
        {"ACE_painkillers", 1},
        {"ACE_tourniquet", 1}
    };
    DOUBLES(ItemType,TYPE_MEDIKIT)[] = {
        {"ACE_elasticBandage", 10},
        {"ACE_packingBandage", 12},
        {"ACE_epinephrine", 5},
        {"ACE_morphine", 5},
        {"ACE_salineIV_500", 5},
        {"ACE_tourniquet", 4},
        {"ACE_splint", 2}
    };
    ACE_atropine[] = {
        {"ACE_adenosine", 1}
    };
};
