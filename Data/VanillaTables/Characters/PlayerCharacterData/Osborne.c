#include "common-chax.h"
#include "KSDefinitions.h"

const struct CharacterData CharOsborne =
{
    .nameTextId = OsborneName,
    .descTextId = OsborneDesc,
    .number = CHARACTER_OSBORNE,
    .defaultClass = CLASS_PRIEST_M,
    .portraitId = PORTRAIT_OSBORNE_ID,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = 0x1,
    .baseLevel = 7, 
    .baseHP  = 3,
    .basePow = 0,
    .baseSkl = 0,
    .baseSpd = 5,
    .baseDef = 3,
    .baseRes = -3,
    .baseLck = 6,
    .baseCon = 1,   
    .baseRanks = {
        [ITYPE_STAFF] = WPN_EXP_C,
    },  
    .growthHP  = 85,
    .growthPow = 0,
    .growthSkl = 40,
    .growthSpd = 60,
    .growthDef = 30,
    .growthRes = 50,
    .growthLck = 45,
    .attributes = 0x0,
    .pSupportData = &SupportData_Moulder,
    .visit_group = 0x7
};