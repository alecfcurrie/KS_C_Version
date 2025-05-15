#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassOutlawM = {
    .nameTextId = MSG_CLASS_OUTLAW_NAME,
    .descTextId = MSG_CLASS_OUTLAW_DESC,
    .number = CLASS_OUTLAW_M,
    .promotion = CLASS_GREAT_KNIGHT,
    .SMSId = CLASS_OUTLAW_M - 1,
    .defaultPortraitId = OUTLAW_CARD,
    .sort_order = 0x2,

    .baseHP  = 25,
    .basePow = 5,
    .baseSkl = 4,
    .baseSpd = 8,
    .baseDef = 2,
    .baseRes = 7,
    .baseCon = 7,
    .baseMov = 5,

    .maxHP  = 45,
    .maxPow = 15,
    .maxSkl = 16,
    .maxSpd = 20,
    .maxDef = 15,
    .maxRes = 20,
    .maxCon = 20,
    .classRelativePower = 6,


    .growthHP  = 60,
    .growthPow = 35,
    .growthSkl = 35,
    .growthSpd = 45,
    .growthDef = 30,
    .growthRes = 50,
    .growthLck = 30,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .baseRanks = {
        [ITYPE_BOW] = WPN_EXP_E,
    },
    .pBattleAnimDef = OUTLAW_M_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};