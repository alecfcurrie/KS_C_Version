#include "common-chax.h"
#include "KSDefinitions.h"

const struct CharacterData CharSurge =
{
    .nameTextId = SurgeName,
    .descTextId = SurgeDesc,
    .number = CHARACTER_SURGE,
    .defaultClass = CLASS_FIGHTER_M,
    .portraitId = PORTRAIT_SURGE_ID,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = 0x1,
    .baseLevel = 1, 
    .baseHP  = 0,
    .basePow = 1,
    .baseSkl = 3,
    .baseSpd = 3,
    .baseDef = 1,
    .baseRes = 0,
    .baseLck = 10,
    .baseCon = 2,   
    .baseRanks = {
        [ITYPE_AXE] = WPN_EXP_E,
    },  
    .growthHP  = 125,
    .growthPow = 60,
    .growthSkl = 60,
    .growthSpd = 65,
    .growthDef = 40,
    .growthRes = 5,
    .growthLck = 30,
    .attributes = 0x0,
    .pSupportData = &SupportData_Ross,
    .visit_group = 0x7
};