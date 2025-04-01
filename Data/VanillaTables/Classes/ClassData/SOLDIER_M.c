#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassSoldierM = {
    .nameTextId = MSG_CLASS_SOLDIER_NAME,
    .descTextId = MSG_CLASS_SOLDIER_DESC,
    .number = CLASS_SOLDIER_M,
    .promotion = CLASS_GREAT_KNIGHT,
    .SMSId = CLASS_SOLDIER_M - 1,
    .defaultPortraitId = SOLDIER_CARD,
    .sort_order = 0x2,

    .baseHP  = 19,
    .basePow = 9,
    .baseSkl = 8,
    .baseSpd = 7,
    .baseDef = 4,
    .baseRes = 2,
    .baseCon = 8,
    .baseMov = 5,

    .maxHP  = 40,
    .maxPow = 24,
    .maxSkl = 22,
    .maxSpd = 23,
    .maxDef = 18,
    .maxRes = 13,
    .maxCon = 20,
    .classRelativePower = 3,


    .growthHP  = 70,
    .growthPow = 55,
    .growthSkl = 50,
    .growthSpd = 55,
    .growthDef = 35,
    .growthRes = 30,
    .growthLck = 45,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .baseRanks = {
        [ITYPE_LANCE] = WPN_EXP_E,
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