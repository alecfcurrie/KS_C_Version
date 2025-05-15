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

    .baseHP  = 22,
    .basePow = 0,
    .baseSkl = 9,
    .baseSpd = 3,
    .baseDef = 0,
    .baseRes = 10,
    .baseCon = 6,
    .baseMov = 5,

    .maxHP  = 45,
    .maxPow = 15,
    .maxSkl = 19,
    .maxSpd = 17,
    .maxDef = 15,
    .maxRes = 20,
    .maxCon = 20,
    .classRelativePower = 10,


    .growthHP  = 50,
    .growthPow = 0,
    .growthSkl = 50,
    .growthSpd = 35,
    .growthDef = 15,
    .growthRes = 60,
    .growthLck = 60,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .baseRanks = {
        [ITYPE_STAFF] = WPN_EXP_E,
    },
    .pBattleAnimDef = ADVENTURER_M_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_MagicNormal,
        TerrainTable_MovCost_MagicNormal,
        TerrainTable_MovCost_MagicNormal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};