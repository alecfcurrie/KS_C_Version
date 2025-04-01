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
        .basePow = 0,
        .baseSkl = 0,
        .baseSpd = 0,
        .baseDef = 0,
        .baseRes = 0,
        .baseLck = 8,
        .baseCon = 0,

        .baseRanks = {
            [ITYPE_AXE] = WPN_EXP_E,
        },

        .growthHP  = 75,
        .growthPow = 65,
        .growthSkl = 50,
        .growthSpd = 45,
        .growthDef = 45,
        .growthRes = 30,
        .growthLck = 55,
        .attributes = 0x0,
        .pSupportData = &SupportData_Franz,
        .visit_group = 0x7
};