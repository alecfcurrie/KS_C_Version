#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemIronSword = {
    .nameTextId = MSG_SWORD_IRON,
    .descTextId = MSG_DESC_STANDARD,
    .number = ITEM_SWORD_IRON,
    .weaponType = ITYPE_SWORD,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 11,
    .hit = 110,
    .weight = 6,
    .encodedRange = 0x11,
    .costPerUse = 1000,
    .weaponRank = WPN_EXP_D,
    .iconId = ICON_SWORD_BRONZE,
    .weaponExp = 1,
};