#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassPriestM = {
    .nameTextId = MSG_CLASS_PRIEST_NAME,
    .descTextId = MSG_CLASS_PRIEST_DESC,
    .number = CLASS_PRIEST_M,
    .promotion = CLASS_GREAT_KNIGHT,
    .SMSId = CLASS_PRIEST_M - 1,
    .defaultPortraitId = MONK_CARD,
    .sort_order = 0x2,

    .baseHP  = 15,
    .basePow = 0,
    .baseSkl = 9,
    .baseSpd = 3,
    .baseDef = 0,
    .baseRes = 10,
    .baseCon = 6,
    .baseMov = 5,

    .maxHP  = 40,
    .maxPow = 10,
    .maxSkl = 21,
    .maxSpd = 20,
    .maxDef = 10,
    .maxRes = 25,
    .maxCon = 20,
    .classRelativePower = 3,


    .growthHP  = 55,
    .growthPow = 10,
    .growthSkl = 50,
    .growthSpd = 50,
    .growthDef = 7,
    .growthRes = 55,
    .growthLck = 70,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .baseRanks = {
        [ITYPE_STAFF] = WPN_EXP_E,
    },
    .pBattleAnimDef = AnimConf_088AEFD8,
    .pMovCostTable = {
        TerrainTable_MovCost_MagicNormal,
        TerrainTable_MovCost_MagicNormal,
        TerrainTable_MovCost_MagicNormal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};