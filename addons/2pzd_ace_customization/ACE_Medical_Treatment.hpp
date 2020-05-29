
class ace_medical_treatment {
    class Bandaging {
        // Field dressing is normal average treatment
        // packing bandage is average treatment, higher reopen chance, longer reopening delay
        // elastic bandage is higher treatment, higher reopen chance, shorter reopen delay
        // quickclot is lower treatment, lower reopen chance, longer reopening delay
        class BasicBandage {
            effectiveness = 5;
            reopeningChance = 0;
            reopeningMinDelay = 0;
            reopeningMaxDelay = 0;
        };

        class FieldDressing {
            // How effect is the bandage for treating one wounds type injury
            effectiveness = 1;
            // What is the chance and delays (in seconds) of the treated default injury reopening
            reopeningChance = 0.1;
            reopeningMinDelay = 120;
            reopeningMaxDelay = 2160;

            class Abrasion {
                effectiveness = 2;
                reopeningChance = 0.3;
                reopeningMinDelay = 120;
                reopeningMaxDelay = 2160;
            };
            class AbrasionMinor: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1140;
            };
            class AbrasionMedium: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 0.5;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };

            class Avulsion: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };
            class AvulsionMinor: Avulsion {
                effectiveness = 2;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class AvulsionMedium: Avulsion {
                effectiveness = 1;
                reopeningChance = 0.7;
                reopeningMaxDelay = 1260;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 0.5;
                reopeningChance = 1;
                reopeningMaxDelay = 360;
            };

            class Contusion: Abrasion {
                effectiveness = 1;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.2;
                reopeningMaxDelay = 2160;
            };
            class CrushMinor: Crush {
                effectiveness = 2;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1140;
            };
            class CrushMedium: Crush {
                effectiveness = 1;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class CrushLarge: Crush {
                effectiveness = 0.5;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };

            class Cut: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.1;
                reopeningMaxDelay = 2160;
            };
            class CutMinor: Cut {
                effectiveness = 2;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1140;
            };
            class CutMedium: Cut {
                effectiveness = 1;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class CutLarge: Cut {
                effectiveness = 0.5;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };

            class Laceration: Abrasion {
                effectiveness = 0.95;
                reopeningChance = 0.3;
                reopeningMaxDelay = 2160;
            };
            class LacerationMinor: Laceration {
                effectiveness = 2;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class LacerationMedium: Laceration {
                effectiveness = 1;
                reopeningChance = 0.7;
                reopeningMaxDelay = 1260;
            };
            class LacerationLarge: Laceration {
                effectiveness = 0.5;
                reopeningChance = 1;
                reopeningMaxDelay = 360;
            };

            class VelocityWound: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.7;
                reopeningMaxDelay = 2160;
            };
            class VelocityWoundMinor: VelocityWound {
                effectiveness = 2;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 1;
                reopeningChance = 0.7;
                reopeningMaxDelay = 1260;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 0.5;
                reopeningChance = 1;
                reopeningMaxDelay = 360;
            };

            class PunctureWound: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };
            class PunctureWoundMinor: PunctureWound {
                effectiveness = 2;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1140;
            };
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 1;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 0.5;
                reopeningChance = 0.7;
                reopeningMaxDelay = 1260;
            };
        };

        class PackingBandage: fieldDressing {
            class Abrasion {
                effectiveness = 3;
                reopeningChance = 0.6;
                reopeningMinDelay = 120;
                reopeningMaxDelay = 2160;
            };
            class AbrasionMinor: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.7;
                reopeningMaxDelay = 1260;
            };
            class AbrasionMedium: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.6;
                reopeningMaxDelay = 1680;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 0.5;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };

            class Avulsion: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.7;
                reopeningMaxDelay = 2160;
            };
            class AvulsionMinor: Avulsion {
                effectiveness = 2;
                reopeningChance = 0.6;
                reopeningMaxDelay = 1680;
            };
            class AvulsionMedium: Avulsion {
                effectiveness = 1;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 0.5;
                reopeningChance = 0.2;
                reopeningMaxDelay = 540;
            };

            class Contusion: Abrasion {
                effectiveness = 1;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };
            class CrushMinor: Crush {
                effectiveness = 2;
                reopeningChance = 0.7;
                reopeningMaxDelay = 1260;
            };
            class CrushMedium: Crush {
                effectiveness = 1;
                reopeningChance = 0.5;
                reopeningMaxDelay = 1140;
            };
            class CrushLarge: Crush {
                effectiveness = 0.5;
                reopeningChance = 0.3;
                reopeningMaxDelay = 2160;
            };

            class Cut: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.4;
                reopeningMaxDelay = 2160;
            };
            class CutMinor: Cut {
                effectiveness = 2;
                reopeningChance = 0.7;
                reopeningMaxDelay = 1260;
            };
            class CutMedium: Cut {
                effectiveness = 1;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };
            class CutLarge: Cut {
                effectiveness = 0.5;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1140;
            };

            class Laceration: Abrasion {
                effectiveness = 0.95;
                reopeningChance = 0.65;
                reopeningMaxDelay = 2160;
            };
            class LacerationMinor: Laceration {
                effectiveness = 2;
                reopeningChance = 0.7;
                reopeningMaxDelay = 1260;
            };
            class LacerationMedium: Laceration {
                effectiveness = 1;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };
            class LacerationLarge: Laceration {
                effectiveness = 0.5;
                reopeningChance = 0.3;
                reopeningMaxDelay = 540;
            };

            class VelocityWound: Abrasion {
                effectiveness = 2;
                reopeningChance = 1;
                reopeningMaxDelay = 2160;
            };
            class VelocityWoundMinor: VelocityWound {
                effectiveness = 2;
                reopeningChance = 0.6;
                reopeningMaxDelay = 1680;
            };
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 1;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 0.5;
                reopeningChance = 0.2;
                reopeningMaxDelay = 540;
            };

            class PunctureWound: Abrasion {
                effectiveness = 2;
                reopeningChance = 1;
                reopeningMaxDelay = 2160;
            };
            class PunctureWoundMinor: PunctureWound {
                effectiveness = 2;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 1;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1140;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 0.5;
                reopeningChance = 0.2;
                reopeningMaxDelay = 540;
            };
        };

        class ElasticBandage: fieldDressing {
            class Abrasion {
                effectiveness = 4;
                reopeningChance = 0.6;
                reopeningMinDelay = 120;
                reopeningMaxDelay = 2160;
            };
            class AbrasionMinor: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.2;
                reopeningMaxDelay = 540;
            };
            class AbrasionMedium: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1140;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 0.5;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };

            class Avulsion: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.7;
                reopeningMaxDelay = 2160;
            };
            class AvulsionMinor: Avulsion {
                effectiveness = 2;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1680;
            };
            class AvulsionMedium: Avulsion {
                effectiveness = 1;
                reopeningChance = 0.6;
                reopeningMaxDelay = 1680;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 0.5;
                reopeningChance = 0.8;
                reopeningMaxDelay = 900;
            };

            class Contusion: Abrasion {
                effectiveness = 2;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };
            class CrushMinor: Crush {
                effectiveness = 2;
                reopeningChance = 0.2;
                reopeningMaxDelay = 540;
            };
            class CrushMedium: Crush {
                effectiveness = 1;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1140;
            };
            class CrushLarge: Crush {
                effectiveness = 0.5;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };

            class Cut: Abrasion {
                effectiveness = 5;
                reopeningChance = 0.4;
                reopeningMaxDelay = 2160;
            };
            class CutMinor: Cut {
                effectiveness = 2;
                reopeningChance = 0.2;
                reopeningMaxDelay = 540;
            };
            class CutMedium: Cut {
                effectiveness = 1;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class CutLarge: Cut {
                effectiveness = 0.5;
                reopeningChance = 0.6;
                reopeningMaxDelay = 1680;
            };

            class Laceration: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.65;
                reopeningMaxDelay = 2160;
            };
            class LacerationMinor: Laceration {
                effectiveness = 2;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1140;
            };
            class LacerationMedium: Laceration {
                effectiveness = 1;
                reopeningChance = 0.6;
                reopeningMaxDelay = 1680;
            };
            class LacerationLarge: Laceration {
                effectiveness = 0.5;
                reopeningChance = 0.8;
                reopeningMaxDelay = 900;
            };

            class VelocityWound: Abrasion {
                effectiveness = 2.2;
                reopeningChance = 1;
                reopeningMaxDelay = 2160;
            };
            class VelocityWoundMinor: VelocityWound {
                effectiveness = 2;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1140;
            };
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 1;
                reopeningChance = 0.6;
                reopeningMaxDelay = 1680;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 0.5;
                reopeningChance = 0.8;
                reopeningMaxDelay = 900;
            };

            class PunctureWound: Abrasion {
                effectiveness = 2.5;
                reopeningChance = 1;
                reopeningMaxDelay = 2160;
            };
            class PunctureWoundMinor: PunctureWound {
                effectiveness = 2;
                reopeningChance = 0.2;
                reopeningMaxDelay = 540;
            };
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 1;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 0.5;
                reopeningChance = 0.6;
                reopeningMaxDelay = 1680;
            };
        };

        class QuikClot: fieldDressing {
            class Abrasion {
                effectiveness = 2;
                reopeningChance = 0.3;
                reopeningMinDelay = 120;
                reopeningMaxDelay = 2160;
            };
            class AbrasionMinor: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.1;
                reopeningMaxDelay = 360;
            };
            class AbrasionMedium: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.2;
                reopeningMaxDelay = 540;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 0.5;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1140;
            };

            class Avulsion: Abrasion {
                effectiveness = 0.7;
                reopeningChance = 0.2;
                reopeningMaxDelay = 2160;
            };
            class AvulsionMinor: Avulsion {
                effectiveness = 2;
                reopeningChance = 0.2;
                reopeningMaxDelay = 540;
            };
            class AvulsionMedium: Avulsion {
                effectiveness = 1;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 0.5;
                reopeningChance = 0.6;
                reopeningMaxDelay = 1680;
            };

            class Contusion: Abrasion {
                effectiveness = 1;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 0.6;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };
            class CrushMinor: Crush {
                effectiveness = 2;
                reopeningChance = 0.1;
                reopeningMaxDelay = 360;
            };
            class CrushMedium: Crush {
                effectiveness = 1;
                reopeningChance = 0.2;
                reopeningMaxDelay = 540;
            };
            class CrushLarge: Crush {
                effectiveness = 0.5;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1140;
            };

            class Cut: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.2;
                reopeningMaxDelay = 2160;
            };
            class CutMinor: Cut {
                effectiveness = 2;
                reopeningChance = 0.1;
                reopeningMaxDelay = 360;
            };
            class CutMedium: Cut {
                effectiveness = 1;
                reopeningChance = 0.3;
                reopeningMaxDelay = 1140;
            };
            class CutLarge: Cut {
                effectiveness = 0.5;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };

            class Laceration: Abrasion {
                effectiveness = 0.7;
                reopeningChance = 0.4;
                reopeningMaxDelay = 2160;
            };
            class LacerationMinor: Laceration {
                effectiveness = 2;
                reopeningChance = 0.2;
                reopeningMaxDelay = 540;
            };
            class LacerationMedium: Laceration {
                effectiveness = 1;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class LacerationLarge: Laceration {
                effectiveness = 0.5;
                reopeningChance = 0.6;
                reopeningMaxDelay = 1680;
            };

            class VelocityWound: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };
            class VelocityWoundMinor: VelocityWound {
                effectiveness = 2;
                reopeningChance = 0.2;
                reopeningMaxDelay = 540;
            };
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 1;
                reopeningChance = 0.4;
                reopeningMaxDelay = 1680;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 0.5;
                reopeningChance = 0.6;
                reopeningMaxDelay = 1680;
            };

            class PunctureWound: Abrasion {
                effectiveness = 1;
                reopeningChance = 0.5;
                reopeningMaxDelay = 2160;
            };
            class PunctureWoundMinor: PunctureWound {
                effectiveness = 2;
                reopeningChance = 0.1;
                reopeningMaxDelay = 360;
            };
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 1;
                reopeningChance = 0.2;
                reopeningMaxDelay = 1140;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 0.5;
                reopeningChance = 0.3;
                reopeningMaxDelay = 2160;
            };
        };
    };

    class Medication {
        // How much does the pain get reduced?
        painReduce = 0;
        // How much will the heart rate be increased when the HR is low (below 55)? {minIncrease, maxIncrease}
        hrIncreaseLow[] = {0, 0};    // _heartRate < 55
        hrIncreaseNormal[] = {0, 0}; // 55 <= _heartRate <= 110
        hrIncreaseHigh[] = {0, 0};   // 110 < _heartRate

        // How long until this medication has disappeared
        timeInSystem = 120;
        // How long until the maximum effect is reached
        timeTillMaxEffect = 30;
        // How many of this type of medication can be in the system before the patient overdoses?
        maxDose = 4;
        // Function to execute upon overdose. Arguments passed to call back are 0: unit <OBJECT>, 1: medicationClassName <STRING>
        onOverDose = "";
        // The viscosity of a fluid is a measure of its resistance to gradual deformation by shear stress or tensile stress. For liquids, it corresponds to the informal concept of "thickness". This value will increase/decrease the viscoty of the blood with the percentage given. Where 100 = max. Using the minus will decrease viscosity
        viscosityChange = 0;

        // specific details for the ACE_Morphine treatment action
        class Morphine {
            painReduce = 0.8;
            // painReduce = 15; //from v3.12.6
            hrIncreaseLow[] = {-10, -20};
            hrIncreaseNormal[] = {-10, -30};
            hrIncreaseHigh[] = {-10, -35};
            timeInSystem = 1800;
            // timeInSystem = 900; //from v3.12.6
            timeTillMaxEffect = 30;
            maxDose = 4;
            incompatibleMedication[] = {};
            viscosityChange = -10;
        };
        class PainKillers {
            painReduce = 0.1;
            timeInSystem = 1200;
            timeTillMaxEffect = 60;
            maxDose = 25;
            incompatibleMedication[] = {};
            viscosityChange = 5;
            // viscosityChange = -0.05; //from v3.12.6
        };
        class Epinephrine {
            painReduce = 0;
            hrIncreaseLow[] = {10, 20};
            hrIncreaseNormal[] = {10, 50};
            hrIncreaseHigh[] = {10, 40};
            timeInSystem = 120;
            timeTillMaxEffect = 10;
            maxDose = 10;
            incompatibleMedication[] = {};
        };
        class Adenosine {
            painReduce = 0;
            hrIncreaseLow[] = {-7, -10};
            hrIncreaseNormal[] = {-15, -30};
            hrIncreaseHigh[] = {-15, -35};
            timeInSystem = 120;
            timeTillMaxEffect = 15;
            maxDose = 6;
            incompatibleMedication[] = {};
        };
    };
    class IV {
        // volume is in millileters
        volume = 1000;
        ratio[] = {};
        type = "Blood";
        class BloodIV {
            volume = 1000;
            ratio[] = {"Plasma", 1};
        };
        class BloodIV_500: BloodIV {
            volume = 500;
        };
        class BloodIV_250: BloodIV {
            volume = 250;
        };
        class PlasmaIV: BloodIV {
            volume = 1000;
            ratio[] = {"Blood", 1};
            type = "Plasma";
        };
        class PlasmaIV_500: PlasmaIV {
            volume = 500;
        };
        class PlasmaIV_250: PlasmaIV {
            volume = 250;
        };
        class SalineIV: BloodIV {
            volume = 1000;
            type = "Saline";
            ratio[] = {};
        };
        class SalineIV_500: SalineIV {
            volume = 500;
        };
        class SalineIV_250: SalineIV {
            volume = 250;
        };
    };
};
