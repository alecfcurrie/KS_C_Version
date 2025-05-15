#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemSpear = {
    .nameTextId = MSG_LANCE_SPEAR,
    .descTextId = MSG_DESC_ONE_TWO_RANGE,
    .number = ITEM_LANCE_SPEAR,
    .weaponType = ITYPE_LANCE,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 11,
    .hit = 85,
    .weight = 8,
    .crit = 0xFF,
    .encodedRange = 0x12,
    .costPerUse = 3000,
    .weaponRank = WPN_EXP_B,
    .iconId = ICON_LANCE_BRAVE, // TODO Change this
    .weaponExp = 1,
};