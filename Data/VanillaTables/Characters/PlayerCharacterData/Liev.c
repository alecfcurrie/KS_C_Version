#include "common-chax.h"
#include "KSDefinitions.h"

const struct CharacterData CharLiev =
{
    .nameTextId = SurgeName,
    .descTextId = SurgeDesc,
    .number = CHARACTER_LIEV,
    .defaultClass = CLASS_FIGHTER_M,
    .portraitId = PORTRAIT_SURGE_ID,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = 0x1,
    .baseLevel = 1, 
    .baseHP  = 5,
    .basePow = 1,
    .baseSkl = 5,
    .baseSpd = 2,
    .baseDef = 1,
    .baseRes = 2,
    .baseLck = 8,
    .baseCon = 1,   
    .baseRanks = {
        [ITYPE_AXE] = WPN_EXP_E,
    },  
    .growthHP  = 85,
    .growthPow = 60,
    .growthSkl = 50,
    .growthSpd = 65,
    .growthDef = 35,
    .growthRes = 35,
    .growthLck = 25,
    .attributes = 0x0,
    .pSupportData = &SupportData_Ross,
    .visit_group = 0x7
};