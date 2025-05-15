#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemBronzeSword = {
    .nameTextId = MSG_SWORD_BRONZE,
    .descTextId = MSG_DESC_BRONZE,
    .number = ITEM_SWORD_BRONZE,
    .weaponType = ITYPE_SWORD,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 8,
    .hit = 115,
    .weight = 4,
    .crit = 0xFF,
    .encodedRange = 0x11,
    .costPerUse = 500,
    .weaponRank = WPN_EXP_E,
    .iconId = ICON_SWORD_BRONZE,
    .weaponExp = 1,
};