#include "common-chax.h"
#include "KSDefinitions.h"

const struct CharacterData CharWesley =
{
    .nameTextId = WesleyName,
    .descTextId = WesleyDesc,
    .number = CHARACTER_WESLEY,
    .defaultClass = CLASS_AXE_CAVALIER_M,
    .portraitId = PORTRAIT_WESLEY_ID,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = 0x1,
    .baseLevel = 3, 
    .baseHP  = 0,
    .basePow = 5,
    .baseSkl = 1,
    .baseSpd = 4,
    .baseDef = 0,
    .baseRes = 0,
    .baseLck = 7,
    .baseCon = 0,   
    .baseRanks = {
        [ITYPE_AXE] = WPN_EXP_D,
    },  
    .growthHP  = 115,
    .growthPow = 70,
    .growthSkl = 50,
    .growthSpd = 45,
    .growthDef = 60,
    .growthRes = 15,
    .growthLck = 40,
    .attributes = 0x0,
    .pSupportData = &SupportData_Franz,
    .visit_group = 0x7
};