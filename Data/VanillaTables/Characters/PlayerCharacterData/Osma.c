#include "common-chax.h"
#include "KSDefinitions.h"

const struct CharacterData CharOsma =
{
    .nameTextId = OsmaName,
    .descTextId = OsmaDesc,
    .number = CHARACTER_OSMA,
    .defaultClass = CLASS_MAGE_F,
    .portraitId = PORTRAIT_OSMA_ID,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = 0x1,
    .baseLevel = 4, 
    .baseHP  = 10,
    .basePow = 0,
    .baseSkl = 6,
    .baseSpd = 4,
    .baseDef = 3,
    .baseRes = -3,
    .baseLck = 12,
    .baseCon = 3,   
    .baseRanks = {
        [ITYPE_ANIMA] = WPN_EXP_D + 10,
    },  
    .growthHP  = 70,
    .growthPow = 10,
    .growthSkl = 70,
    .growthSpd = 55,
    .growthDef = 30,
    .growthRes = 20,
    .growthLck = 25,
    .attributes = CA_FEMALE,
    .pSupportData = &SupportData_Ross,
    .visit_group = 0x7
};