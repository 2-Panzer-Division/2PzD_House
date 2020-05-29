
class CfgWeapons {
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore;

    class ACE_fieldDressing : ACE_ItemCore {
        descriptionShort = "$STR_2PzD_ACE_Medical_Treatment_Bandage_Basic_Desc_Short";
    };
    class ACE_elasticBandage : ACE_ItemCore {
        descriptionShort = "$STR_2PzD_ACE_Medical_Treatment_Bandage_Elastic_Desc_Short";
    };
    class ACE_packingBandage : ACE_ItemCore {
        descriptionShort = "$STR_2PzD_ACE_Medical_Treatment_Packing_Bandage_Desc_Short";
    };

    class ACE_painkillers : ACE_ItemCore {
        scope = 2;
        author = "Wilhelm Haas";
        displayName = Painkillers;
        picture = "\2pzd_ace_customization\ui\items\painkillers_ca.paa";
        model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
        descriptionShort = "$STR_2PzD_ACE_Medical_Treatment_Painkillers_Desc_Short";
        descriptionUse = "$STR_2PzD_ACE_Medical_Treatment_Painkillers_Desc_Use";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.25;
        };
    };
};
