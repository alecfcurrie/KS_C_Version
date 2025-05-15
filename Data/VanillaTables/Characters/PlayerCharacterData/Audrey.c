#include "common-chax.h"
#include "KSDefinitions.h"

const struct CharacterData CharAudrey =
{
    .nameTextId = AudreyName,
    .descTextId = AudreyDesc,
    .number = CHARACTER_AUDREY,
    .defaultClass = CLASS_PRINCESS_F,
    .portraitId = PORTRAIT_AUDREY_ID,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = 0x1,
    .baseLevel = 1,
    .baseHP  = 0,
    .basePow = 0,
    .baseSkl = 0,
    .baseSpd = 0,
    .baseDef = 0,
    .baseRes = 0,
    .baseLck = 8,
    .baseCon = 0,
    .baseRanks = {
        [ITYPE_SWORD] = WPN_EXP_E,
    },
    .growthHP  = 100,
    .growthPow = 50,
    .growthSkl = 70,
    .growthSpd = 60,
    .growthDef = 45,
    .growthRes = 40,
    .growthLck = 50,
    .attributes = CA_FEMALE,
    .pSupportData = &SupportData_Eirika,
    .visit_group = 0x7
};