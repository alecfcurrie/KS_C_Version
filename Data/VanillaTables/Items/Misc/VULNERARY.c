#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemVulnerary = {
    .nameTextId = MSG_VULNERARY,
    .descTextId = MSG_DESC_VULNERARY,
    .number = ITEM_VULNERARY,
    .weaponType = ITYPE_ITEM,
    .maxUses = 3,
    .encodedRange = 0x11,
    .costPerUse = 100,
    .iconId = 0x6a, // TODO Change this
    .useEffectId = 33,
};