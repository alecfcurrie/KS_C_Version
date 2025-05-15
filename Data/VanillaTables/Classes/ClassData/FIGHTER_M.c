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

    .baseHP  = 31,
    .basePow = 8,
    .baseSkl = 7,
    .baseSpd = 5,
    .baseDef = 4,
    .baseRes = 0,
    .baseCon = 10,
    .baseMov = 5,

    .maxHP  = 45,
    .maxPow = 20,
    .maxSkl = 18,
    .maxSpd = 17,
    .maxDef = 16,
    .maxRes = 15,
    .maxCon = 20,
    .classRelativePower = 4,


    .growthHP  = 85,
    .growthPow = 55,
    .growthSkl = 40,
    .growthSpd = 35,
    .growthDef = 35,
    .growthRes = 25,
    .growthLck = 20,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .baseRanks = {
        [ITYPE_AXE] = WPN_EXP_E,
    },
    
    .pBattleAnimDef = FIGHTER_M_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
        TerrainTable_MovCost_CommonT1Normal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};