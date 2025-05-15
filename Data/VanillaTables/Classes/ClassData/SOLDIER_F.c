#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassSoldierF = {
    .nameTextId = MSG_CLASS_SOLDIER_NAME,
    .descTextId = MSG_CLASS_SOLDIER_DESC,
    .number = CLASS_SOLDIER_F,
    .promotion = CLASS_GREAT_KNIGHT,
    .SMSId = CLASS_SOLDIER_F - 1,
    .defaultPortraitId = SOLDIER_CARD,
    .sort_order = 0x2,

    .baseHP  = 29,
    .basePow = 7,
    .baseSkl = 8,
    .baseSpd = 6,
    .baseDef = 7,
    .baseRes = 4,
    .baseCon = 8,
    .baseMov = 5,

    .maxHP  = 45,
    .maxPow = 17,
    .maxSkl = 19,
    .maxSpd = 19,
    .maxDef = 18,
    .maxRes = 16,
    .maxCon = 20,
    .classRelativePower = 6,


    .growthHP  = 70,
    .growthPow = 45,
    .growthSkl = 40,
    .growthSpd = 40,
    .growthDef = 45,
    .growthRes = 40,
    .growthLck = 35,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_FEMALE,

    .baseRanks = {
        [ITYPE_LANCE] = WPN_EXP_E,
    },
    .pBattleAnimDef = SOLDIER_F_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};