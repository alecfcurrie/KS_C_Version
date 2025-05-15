#include "common-chax.h"
#include "KSDefinitions.h"

const struct CharacterData CharElaine =
{
    .nameTextId = ElaineName,
    .descTextId = ElaineDesc,
    .number = CHARACTER_ELAINE,
    .defaultClass = CLASS_SOLDIER_F,
    .portraitId = PORTRAIT_ELAINE_ID,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = 0x1,
    .baseLevel = 2,
    .baseHP  = 2,
    .basePow = 1,
    .baseSkl = 2,
    .baseSpd = 3,
    .baseDef = 0,
    .baseRes = -1,
    .baseLck = 5,
    .baseCon = 0,
    .baseRanks = {
        [ITYPE_LANCE] = WPN_EXP_D,
    },
    .growthHP  = 110,
    .growthPow = 50,
    .growthSkl = 40,
    .growthSpd = 60,
    .growthDef = 50,
    .growthRes = 20,
    .growthLck = 70,
    .attributes = CA_FEMALE,
    .pSupportData = &SupportData_Vanessa,
    .visit_group = 0x7
};