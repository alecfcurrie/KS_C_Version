#include "common-chax.h"
#include "KSDefinitions.h"

const struct CharacterData CharCordell =
{
    .nameTextId = CordellName,
    .descTextId = CordellDesc,
    .number = CHARACTER_CORDELL,
    .defaultClass = CLASS_ARCHER_M,
    .portraitId = PORTRAIT_CORDELL_ID,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = 0x1,
    .baseLevel = 5, 
    .baseHP  = 8,
    .basePow = 2,
    .baseSkl = 0,
    .baseSpd = 5,
    .baseDef = 5,
    .baseRes = 3,
    .baseLck = 12,
    .baseCon = 0,   
    
    .baseRanks = {
        [ITYPE_BOW] = WPN_EXP_C,
    },
      
    .growthHP  = 70,
    .growthPow = 40,
    .growthSkl = 75,
    .growthSpd = 75,
    .growthDef = 30,
    .growthRes = 30,
    .growthLck = 75,
    .attributes = 0x0,
    .pSupportData = &SupportData_Seth,
    .visit_group = 0x7
};