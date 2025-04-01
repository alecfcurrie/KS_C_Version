#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassFighterM = {
    .nameTextId = MSG_CLASS_FIGHTER_NAME,
    .descTextId = MSG_CLASS_FIGHTER_DESC,
    .number = CLASS_FIGHTER_M,
    .promotion = CLASS_HERO,
    .SMSId = CLASS_FIGHTER_M - 1,
    .defaultPortraitId = FIGHTER_CARD,
    .sort_order = 0x2,

    .baseHP  = 24,
    .basePow = 11,
    .baseSkl = 8,
    .baseSpd = 6,
    .baseDef = 2,
    .baseRes = 0,
    .baseCon = 10,
    .baseMov = 5,

    .maxHP  = 40,
    .maxPow = 25,
    .maxSkl = 19,
    .maxSpd = 21,
    .maxDef = 13,
    .maxRes = 10,
    .maxCon = 20,
    .classRelativePower = 3,


    .growthHP  = 80,
    .growthPow = 65,
    .growthSkl = 60,
    .growthSpd = 40,
    .growthDef = 15,
    .growthRes = 5,
    .growthLck = 30,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .baseRanks = {
        [ITYPE_AXE] = WPN_EXP_E,
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