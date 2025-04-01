#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassSwordfigherM = {
    .nameTextId = MSG_CLASS_SWORDFIGHTER_NAME,
    .descTextId = MSG_CLASS_SWORDFIGHTER_DESC,
    .number = CLASS_SWORDFIGHTER_M,
    .promotion = CLASS_SWORDMASTER,
    .SMSId = CLASS_SWORDFIGHTER_M - 1,
    .defaultPortraitId = SWORDFIGHTER_CARD,
    .sort_order = 0x2,

    .baseHP  = 19,
    .basePow = 6,
    .baseSkl = 12,
    .baseSpd = 10,
    .baseDef = 3,
    .baseRes = 4,
    .baseCon = 7,
    .baseMov = 5,

    .maxHP  = 40,
    .maxPow = 20,
    .maxSkl = 24,
    .maxSpd = 25,
    .maxDef = 15,
    .maxRes = 15,
    .maxCon = 20,
    .classRelativePower = 3,


    .growthHP  = 60,
    .growthPow = 50,
    .growthSkl = 65,
    .growthSpd = 60,
    .growthDef = 25,
    .growthRes = 35,
    .growthLck = 50,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .baseRanks = {
        [ITYPE_SWORD] = WPN_EXP_E,
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