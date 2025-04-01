#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassAxeCavF = {
    .nameTextId = MSG_CLASS_AXE_CAV_NAME,
    .descTextId = MSG_CLASS_AXE_CAV_DESC,
    .number = CLASS_AXE_CAVALIER_F,
    .promotion = CLASS_GREAT_KNIGHT,
    .SMSId = CLASS_AXE_CAVALIER_F - 1,
    .defaultPortraitId = AXE_CAVALIER_CARD,
    .sort_order = 0x2,

    .baseHP  = 22,
    .basePow = 10,
    .baseSkl = 6,
    .baseSpd = 3,
    .baseDef = 7,
    .baseRes = 0,
    .baseCon = 10,
    .baseMov = 7,

    .maxHP  = 40,
    .maxPow = 24,
    .maxSkl = 20,
    .maxSpd = 16,
    .maxDef = 20,
    .maxRes = 10,
    .maxCon = 20,
    .classRelativePower = 3,


    .growthHP  = 80,
    .growthPow = 55,
    .growthSkl = 40,
    .growthSpd = 30,
    .growthDef = 40,
    .growthRes = 10,
    .growthLck = 40,

    .promotionHp  = 0,
    .promotionPow = 0,
    .promotionSkl = 0,
    .promotionSpd = 0,
    .promotionDef = 0,
    .promotionRes = 0,

    .attributes = CA_MOUNTED | CA_MOUNTEDAID | CA_CANTO | CA_FEMALE,

    .baseRanks = {
        [ITYPE_AXE] = WPN_EXP_E,
    },
    .pBattleAnimDef = AnimConf_088AEFD8,
    .pMovCostTable = {
        TerrainTable_MovCost_HorseT1Normal,
        TerrainTable_MovCost_HorseT1Normal,
        TerrainTable_MovCost_HorseT1Normal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};