#include "common-chax.h"
#include "KSDefinitions.h"


const struct ClassData ClassPrincess = {
    .nameTextId = 0x2bf,
    .descTextId = 0x309,
    .number = CLASS_PRINCESS_F,
    .promotion = CLASS_EPHRAIM_MASTER_LORD,
    .SMSId = CLASS_PRINCESS_F - 1,
    .defaultPortraitId = SOLDIER_CARD,
    .sort_order = 0x1,

    .baseHP  = 23,
    .basePow = 7,
    .baseSkl = 12,
    .baseSpd = 10,
    .baseDef = 5,
    .baseRes = 4,
    .baseCon = 7,
    .baseMov = 5,

    .maxHP  = 40,
    .maxPow = 21,
    .maxSkl = 25,
    .maxSpd = 23,
    .maxDef = 16,
    .maxRes = 10,
    .maxCon = 20,
    .classRelativePower = 3,


    .growthHP  = 90,
    .growthPow = 45,
    .growthSkl = 40,
    .growthSpd = 45,
    .growthDef = 15,
    .growthRes = 15,
    .growthLck = 40,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_LORD | CA_LOCK_5,

    .baseRanks = {
        [ITYPE_SWORD] = WPN_EXP_E,
    },
    .pBattleAnimDef = AnimConf_088AEFD8,
    .pMovCostTable = {
        TerrainTable_MovCost_CommonT2Normal,
        TerrainTable_MovCost_CommonT2Rain,
        TerrainTable_MovCost_CommonT2Snow,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};