#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassArcherF = {
    .nameTextId = MSG_CLASS_ARCHER_NAME,
    .descTextId = MSG_CLASS_ARCHER_DESC,
    .number = CLASS_ARCHER_F,
    .promotion = CLASS_GREAT_KNIGHT,
    .SMSId = CLASS_ARCHER_F - 1,
    .defaultPortraitId = ARCHER_CARD,
    .sort_order = 0x2,

    .baseHP  = 17,
    .basePow = 8,
    .baseSkl = 12,
    .baseSpd = 6,
    .baseDef = 2,
    .baseRes = 0,
    .baseCon = 6,
    .baseMov = 5,

    .maxHP  = 40,
    .maxPow = 22,
    .maxSkl = 25,
    .maxSpd = 22,
    .maxDef = 13,
    .maxRes = 14,
    .maxCon = 20,
    .classRelativePower = 3,


    .growthHP  = 70,
    .growthPow = 50,
    .growthSkl = 70,
    .growthSpd = 40,
    .growthDef = 15,
    .growthRes = 20,
    .growthLck = 40,

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