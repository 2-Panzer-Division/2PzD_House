
class CfgPatches {
    class 2pzd_clutter_removal {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        units[] = {};
        magazineWell[] = {};
        magazines[] = {};
        weapons[] = {};
        requiredAddons[] = {"Haas_WWII_Rebalance"};
    };
}; // End CfgPatches

/*
[
    configFile >> "CfgSurfaceCharacters",
    true,
    true,
    true,
    true,
    [
        "probability",
        "names"
    ],
    true,
    true,
    true,
    false,
    true,
    "2pzd_clutter_removal - CfgSurfaceCharacters"
] call compile preprocessFileLineNumbers "dumpConfig.sqf";
*/

class CfgSurfaceCharacters {
    class Empty {
        probability[] = {};
        names[] = {};
    };
    class StratisForestPineClutter {
        probability[] = {};
        names[] = {};
    };
    class StratisDryGrassClutter {
        probability[] = {};
        names[] = {};
    };
    class StratisGreenGrassClutter {
        probability[] = {};
        names[] = {};
    };
    class StratisRockyClutter {
        probability[] = {};
        names[] = {};
    };
    class StratisThistlesClutter {
        probability[] = {};
        names[] = {};
    };
    class StratisSeabedClutter {
        probability[] = {};
        names[] = {};
    };
    class RubbleClutter {
        probability[] = {};
        names[] = {};
    };
    class ForestPineClutter {
        probability[] = {};
        names[] = {};
    };
    class DirtClutter {
        probability[] = {};
        names[] = {};
    };
    class GrassGreenClutter {
        probability[] = {};
        names[] = {};
    };
    class GrassDryClutter {
        probability[] = {};
        names[] = {};
    };
    class GrassWildClutter {
        probability[] = {};
        names[] = {};
    };
    class WildFieldClutter {
        probability[] = {};
        names[] = {};
    };
    class WeedClutter {
        probability[] = {};
        names[] = {};
    };
    class ThornClutter {
        probability[] = {};
        names[] = {};
    };
    class StonyClutter {
        probability[] = {};
        names[] = {};
    };
    class MudClutter {
        probability[] = {};
        names[] = {};
    };
    class StonyThistleClutter {
        probability[] = {};
        names[] = {};
    };
    class SeabedClutter {
        probability[] = {};
        names[] = {};
    };
    class GrassClutter {
        probability[] = {};
        names[] = {};
    };
    class GrassSouthClutter {
        probability[] = {};
        names[] = {};
    };
    class SandGeneralClutter {
        probability[] = {};
        names[] = {};
    };
    class ForestLeavesClutter {
        probability[] = {};
        names[] = {};
    };
    class ForestNeedlesClutter {
        probability[] = {};
        names[] = {};
    };
    class RockSouthClutter {
        probability[] = {};
        names[] = {};
    };
    class SparseWeedsClutter {
        probability[] = {};
        names[] = {};
    };
    class GrassClutterFix {
        probability[] = {};
        names[] = {};
    };
    class swu_grass_plain {
        probability[] = {};
        names[] = {};
    };
    class swu_grass_mud {
        probability[] = {};
        names[] = {};
    };
    class swu_jungle_floor {
        probability[] = {};
        names[] = {};
    };
    class hell_sammal_Character {
        probability[] = {};
        names[] = {};
    };
    class hell_hietikko2_gravel_Character {
        probability[] = {};
        names[] = {};
    };
    class hell_hietikko_vaalea_Character {
        probability[] = {};
        names[] = {};
    };
    class hell_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class hell_tienreuna_Character {
        probability[] = {};
        names[] = {};
    };
    class hell_ruoho_Character {
        probability[] = {};
        names[] = {};
    };
    class criverblud {
        probability[] = {};
        names[] = {};
    };
    class blud_cgressj {
        probability[] = {};
        names[] = {};
    };
    class blud_cjungleheavy {
        probability[] = {};
        names[] = {};
    };
    class blud_cdirt {
        probability[] = {};
        names[] = {};
    };
    class pulau_forest_Character {
        probability[] = {};
        names[] = {};
    };
    class pulau_grass_short_Character {
        probability[] = {};
        names[] = {};
    };
    class pulau_reddirt_character {
        probability[] = {};
        names[] = {};
    };
    class pulau_seabed_character {
        probability[] = {};
        names[] = {};
    };
    class pulau_innerwater_character {
        probability[] = {};
        names[] = {};
    };
    class pulau_pelto_character {
        probability[] = {};
        names[] = {};
    };
    class tem_anizay_airfield_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_anizay_tumma_hiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_anizay_soil_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_anizay_vaalea_hiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_anizay_keltainen_hiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_anizay_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_olhava_sammal_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_olhava_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_olhava_hietikko_vaalea_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_olhava_hiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_olhava_ruoho_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_olhava_suo_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_raatteentiew_sammal_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_raatteentiew_metsahiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_raatteentiew_hietikko_vaalea_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_raatteentiew_ruoho_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_raatteentiew_suo_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_summaw_sammal_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_summaw_metsahiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_summaw_hietikko_vaalea_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_summaw_ruoho_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_summaw_suo_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_vinjesvingen_sammal_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_vinjesvingen_metsahiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_vinjesvingen_kallio_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_vinjesvingen_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_vinjesvingen_hietikko_vaalea_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_vinjesvingen_ruoho_Character {
        probability[] = {};
        names[] = {};
    };
    class MaldenForestClutter {
        probability[] = {};
        names[] = {};
    };
    class ruha_sammal_Character {
        probability[] = {};
        names[] = {};
    };
    class ruha_hakkuu_Character {
        probability[] = {};
        names[] = {};
    };
    class ruha_hietikko_vaalea_Character {
        probability[] = {};
        names[] = {};
    };
    class ruha_lentokentta_Character {
        probability[] = {};
        names[] = {};
    };
    class ruha_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class ruha_keltainen_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class ruha_ruoho_Character {
        probability[] = {};
        names[] = {};
    };
    class ruha_suo_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_summas_sammal_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_summas_metsahiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_summas_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_summas_hietikko_vaalea_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_summas_ruoho_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_summas_suo_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_suursaari_sammal_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_suursaari_vaaleahiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_suursaari_kallio_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_suursaari_hiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_suursaari_suo_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_suursaari_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_suursaari_vesi_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_suursaariw_sammal_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_suursaariw_vaaleahiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_suursaariw_suo_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_suursaariw_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_suursaariw_vesi_Character {
        probability[] = {};
        names[] = {};
    };
    class wl_rosche_forest_Character {
        probability[] = {};
        names[] = {};
    };
    class wl_rosche_long_grass_Character {
        probability[] = {};
        names[] = {};
    };
    class wl_rosche_dry_grass_Character {
        probability[] = {};
        names[] = {};
    };
    class wl_rosche_soil_Character {
        probability[] = {};
        names[] = {};
    };
    class GrassTallGroup {
        probability[] = {};
        names[] = {};
    };
    class RainForestGroup {
        probability[] = {};
        names[] = {};
    };
    class GrassShortGroup {
        probability[] = {};
        names[] = {};
    };
    class VolcanoGroup {
        probability[] = {};
        names[] = {};
    };
    class CliffGroup {
        probability[] = {};
        names[] = {};
    };
    class RedDirtGroup {
        probability[] = {};
        names[] = {};
    };
    class SeabedExpGroup {
        probability[] = {};
        names[] = {};
    };
    class tem_kujari_forest_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_kujari_tumma_hiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_kujari_vaalea_hiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_kujari_keltainen_hiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_kujari_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class org_forest_grassy {
        probability[] = {};
        names[] = {};
    };
    class org_plain_grassy {
        probability[] = {};
        names[] = {};
    };
    class org_fieldy {
        probability[] = {};
        names[] = {};
    };
    class org_grassy {
        probability[] = {};
        names[] = {};
    };
    class org_mudy {
        probability[] = {};
        names[] = {};
    };
    class org_dirty {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarus_forest_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarus_forest2_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarus_grass_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarus_grass2_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarus_grey_sand_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarusd_forest_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarusd_forest2_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarusd_grass_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarusd_grass2_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarusd_grey_sand_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarusw_forest_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarusw_forest2_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarusw_grass_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarusw_grass2_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_chernarusw_grey_sand_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalaww_sammal_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalaww_metsahiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalaww_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalaww_hietikko_vaalea_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalaww_ruoho_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalaww_suo_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalawww_sammal_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalawww_metsahiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalawww_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalawww_hietikko_vaalea_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalawww_ruoho_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalawww_suo_Character {
        probability[] = {};
        names[] = {};
    };
    class 23pzd_kuban_forest_pine_Character {
        probability[] = {};
        names[] = {};
    };
    class 23pzd_kuban_field_Character {
        probability[] = {};
        names[] = {};
    };
    class 23pzd_kuban_dirt_Character {
        probability[] = {};
        names[] = {};
    };
    class 23pzd_kuban_cutfield_Character {
        probability[] = {};
        names[] = {};
    };
    class 23pzd_kuban_green_grass_Character {
        probability[] = {};
        names[] = {};
    };
    class KlWeatheredTarmac {
        probability[] = {};
        names[] = {};
    };
    class KLSoil {
        probability[] = {};
        names[] = {};
    };
    class KLForestCon {
        probability[] = {};
        names[] = {};
    };
    class KLForestDec {
        probability[] = {};
        names[] = {};
    };
    class KLField {
        probability[] = {};
        names[] = {};
    };
    class KLStubble {
        probability[] = {};
        names[] = {};
    };
    class KLGrass1 {
        probability[] = {};
        names[] = {};
    };
    class KLGrass2 {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_GrassClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_OldgrassClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_OldwheatClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_SandClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_WheatClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_ForestClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_GrazyClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_BurnClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_SwampClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_AmbushClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_France_GrassClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_France_PoppyClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_France_RapsClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_France_SandClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_France_TillageClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_France_WeedClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_France_WheatClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_Winter_GrassClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_Winter_OldgrassClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_Winter_OldwheatClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_Winter_SandClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_Winter_WheatClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_Winter_ForestClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_Winter_GrazyClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_Winter_BurnClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_Staszow_Winter_SwampClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_France_Winter_GrassClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_France_Winter_PoppyClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_France_Winter_RapsClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_France_Winter_WeedClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_France_Winter_WheatClutter {
        probability[] = {};
        names[] = {};
    };
    class LIB_France_Winter_ForestClutter {
        probability[] = {};
        names[] = {};
    };
    class ALGrassClutter {
        probability[] = {};
        names[] = {};
    };
    class ALRockClutter {
        probability[] = {};
        names[] = {};
    };
    class ALGrassdryClutter {
        probability[] = {};
        names[] = {};
    };
    class ALStubbleClutter {
        probability[] = {};
        names[] = {};
    };
    class Hyde_Grass {
        probability[] = {};
        names[] = {};
    };
    class Hyde_Hay {
        probability[] = {};
        names[] = {};
    };
    class Hyde_Runway {
        probability[] = {};
        names[] = {};
    };
    class irons_deserty {
        probability[] = {};
        names[] = {};
    };
    class irons_sandy {
        probability[] = {};
        names[] = {};
    };
    class irons_dry {
        probability[] = {};
        names[] = {};
    };
    class irons_grass {
        probability[] = {};
        names[] = {};
    };
    class irons_foresty {
        probability[] = {};
        names[] = {};
    };
    class irons_marshy {
        probability[] = {};
        names[] = {};
    };
    class swu_forest_ardennes {
        probability[] = {};
        names[] = {};
    };
    class SWU_Main_Grass {
        probability[] = {};
        names[] = {};
    };
    class SWU_Roads_Dirt {
        probability[] = {};
        names[] = {};
    };
    class SWU_Forest_Sticks {
        probability[] = {};
        names[] = {};
    };
    class SWU_Grassy_Winter {
        probability[] = {};
        names[] = {};
    };
    class SWU_Sandy {
        probability[] = {};
        names[] = {};
    };
    class SWU_Grass_Main {
        probability[] = {};
        names[] = {};
    };
    class SWU_Road_Dunkirk {
        probability[] = {};
        names[] = {};
    };
    class SWU_River_Floor {
        probability[] = {};
        names[] = {};
    };
    class SWU_Volkhov_Winter_Clutter {
        probability[] = {};
        names[] = {};
    };
    class SWU_Volkhov_Swamp {
        probability[] = {};
        names[] = {};
    };
    class swu_aachen_main_dry {
        probability[] = {};
        names[] = {};
    };
    class swu_aachen_main_dry_2 {
        probability[] = {};
        names[] = {};
    };
    class swu_aachen_forest {
        probability[] = {};
        names[] = {};
    };
    class swu_greece_green {
        probability[] = {};
        names[] = {};
    };
    class swu_greece_jungle {
        probability[] = {};
        names[] = {};
    };
    class swu_greece_bushy {
        probability[] = {};
        names[] = {};
    };
    class swu_greece_roadside {
        probability[] = {};
        names[] = {};
    };
    class swu_berlin_plain {
        probability[] = {};
        names[] = {};
    };
    class swu_berlin_green {
        probability[] = {};
        names[] = {};
    };
    class swu_alamein_desert_grass {
        probability[] = {};
        names[] = {};
    };
    class swu_pegasus_grassy_long {
        probability[] = {};
        names[] = {};
    };
    class swu_pegasus_grassy_green {
        probability[] = {};
        names[] = {};
    };
    class swu_pegasus_stones {
        probability[] = {};
        names[] = {};
    };
    class swu_pegasus_wheat {
        probability[] = {};
        names[] = {};
    };
    class Forest_Clutter {
        probability[] = {};
        names[] = {};
    };
    class Grass_GreenClutter {
        probability[] = {};
        names[] = {};
    };
    class Seabed_Clutter {
        probability[] = {};
        names[] = {};
    };
    class Grass_Clutter {
        probability[] = {};
        names[] = {};
    };
    class trw_grass_green_clutter {
        probability[] = {};
        names[] = {};
    };
    class trw_seabed_clutter {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantala_sammal_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantala_metsahiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantala_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantala_hietikko_vaalea_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantala_ruoho_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantala_suo_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalaw_sammal_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalaw_metsahiekka_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalaw_pelto_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalaw_hietikko_vaalea_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalaw_ruoho_Character {
        probability[] = {};
        names[] = {};
    };
    class tem_ihantalaw_suo_Character {
        probability[] = {};
        names[] = {};
    };
    class swu_pegasus_green_grass {
        probability[] = {};
        names[] = {};
    };
    class swu_pegasus_grass_mix {
        probability[] = {};
        names[] = {};
    };
}; // End CfgSurfaceCharacters
