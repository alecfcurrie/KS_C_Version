#include "common-chax.h"
#include "KSDefinitions.h"

const struct ClassData ClassAxeCavM = {
    .nameTextId = MSG_CLASS_AXE_CAV_NAME,
    .descTextId = MSG_CLASS_AXE_CAV_DESC,
    .number = CLASS_AXE_CAVALIER_M,
    .promotion = CLASS_GREAT_KNIGHT,
    .SMSId = CLASS_AXE_CAVALIER_M - 1,
    .defaultPortraitId = AXE_CAVALIER_CARD,
    .sort_order = 0x2,

    .baseHP  = 31,
    .basePow = 7,
    .baseSkl = 6,
    .baseSpd = 3,
    .baseDef = 10,
    .baseRes = 1,
    .baseCon = 9,
    .baseMov = 7,
    .baseLuck = 2,

    .maxHP  = 45,
    .maxPow = 18,
    .maxSkl = 17,
    .maxSpd = 16,
    .maxDef = 19,
    .maxRes = 15,
    .maxCon = 20,


    .growthHP  = 75,
    .growthPow = 40,
    .growthSkl = 25,
    .growthSpd = 30,
    .growthDef = 50,
    .growthRes = 25,
    .growthLck = 15,

    .attributes = CA_MOUNTED | CA_MOUNTEDAID | CA_CANTO,

    .baseRanks = {
        [ITYPE_AXE] = WPN_EXP_E,
    },
    .pBattleAnimDef = AXECAV_M_REF,
    .pMovCostTable = {
        TerrainTable_MovCost_HorseT1Normal,
        TerrainTable_MovCost_HorseT1Normal,
        TerrainTable_MovCost_HorseT1Normal,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};