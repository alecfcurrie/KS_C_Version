#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemSteelSword = {
    .nameTextId = MSG_SWORD_STEEL,
    .descTextId = MSG_DESC_STANDARD,
    .number = ITEM_SWORD_STEEL,
    .weaponType = ITYPE_SWORD,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 15,
    .hit = 95,
    .weight = 8,
    .encodedRange = 0x11,
    .costPerUse = 1500,
    .weaponRank = WPN_EXP_C,
    .iconId = ICON_SWORD_BRONZE,
    .weaponExp = 1,
};