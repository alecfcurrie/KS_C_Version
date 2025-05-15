#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassArcherM = {
    .nameTextId = MSG_CLASS_ARCHER_NAME,
    .descTextId = MSG_CLASS_ARCHER_DESC,
    .number = CLASS_ARCHER_M,
    .promotion = CLASS_GREAT_KNIGHT,
    .SMSId = CLASS_ARCHER_M - 1,
    .defaultPortraitId = ARCHER_CARD,
    .sort_order = 0x2,

    .baseHP  = 24,
    .basePow = 5,
    .baseSkl = 12,
    .baseSpd = 6,
    .baseDef = 2,
    .baseRes = 0,
    .baseCon = 6,
    .baseMov = 5,

    .maxHP  = 45,
    .maxPow = 17,
    .maxSkl = 20,
    .maxSpd = 19,
    .maxDef = 17,
    .maxRes = 16,
    .maxCon = 20,
    .classRelativePower = 5,


    .growthHP  = 70,
    .growthPow = 40,
    .growthSkl = 50,
    .growthSpd = 35,
    .growthDef = 40,
    .growthRes = 35,
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
    .pBattleAnimDef = ARCHER_M_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};