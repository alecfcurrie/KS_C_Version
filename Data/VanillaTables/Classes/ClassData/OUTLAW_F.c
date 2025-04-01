#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassOutlawF = {
    .nameTextId = MSG_CLASS_OUTLAW_NAME,
    .descTextId = MSG_CLASS_OUTLAW_DESC,
    .number = CLASS_OUTLAW_M,
    .promotion = CLASS_GREAT_KNIGHT,
    .SMSId = CLASS_OUTLAW_M - 1,
    .defaultPortraitId = OUTLAW_CARD,
    .sort_order = 0x2,

    .baseHP  = 19,
    .basePow = 5,
    .baseSkl = 6,
    .baseSpd = 9,
    .baseDef = 0,
    .baseRes = 6,
    .baseCon = 7,
    .baseMov = 5,

    .maxHP  = 40,
    .maxPow = 19,
    .maxSkl = 21,
    .maxSpd = 24,
    .maxDef = 11,
    .maxRes = 19,
    .maxCon = 20,
    .classRelativePower = 3,


    .growthHP  = 65,
    .growthPow = 45,
    .growthSkl = 50,
    .growthSpd = 60,
    .growthDef = 15,
    .growthRes = 40,
    .growthLck = 20,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_FEMALE,

    .baseRanks = {
        [ITYPE_BOW] = WPN_EXP_E,
    },
    .pBattleAnimDef = AnimConf_088AEFD8,
    .pMovCostTable = {
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};