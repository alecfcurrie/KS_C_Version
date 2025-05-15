#include "common-chax.h"
#include "KSDefinitions.h"

const struct CharacterData CharFester =
{
    .nameTextId = AudreyName,
    .descTextId = AudreyDesc,
    .number = CHARACTER_FESTER,
    .defaultClass = CLASS_SWORDFIGHTER_M,
    .portraitId = PORTRAIT_FESTER_ID,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = 0x1,
    .baseLevel = 4,
    .baseHP  = 0,
    .basePow = 0,
    .baseSkl = 0,
    .baseSpd = 0,
    .baseDef = 0,
    .baseRes = 0,
    .baseLck = 8,
    .baseCon = 0,
    .baseRanks = {
        [ITYPE_SWORD] = WPN_EXP_B,
    },
    .growthHP  = 85,
    .growthPow = 50,
    .growthSkl = 70,
    .growthSpd = 60,
    .growthDef = 45,
    .growthRes = 30,
    .growthLck = 50,
    .attributes = 0x0
};