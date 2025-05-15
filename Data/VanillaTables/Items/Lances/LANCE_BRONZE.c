#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemBronzeLance = {
    .nameTextId = MSG_LANCE_BRONZE,
    .descTextId = MSG_DESC_BRONZE,
    .number = ITEM_LANCE_BRONZE,
    .weaponType = ITYPE_LANCE,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 9,
    .hit = 105,
    .weight = 5,
    .crit = 0xFF,
    .encodedRange = 0x11,
    .costPerUse = 500,
    .weaponRank = WPN_EXP_E,
    .iconId = ICON_LANCE_BRONZE,
    .weaponExp = 1,
};