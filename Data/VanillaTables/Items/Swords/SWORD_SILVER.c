#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemSilverSword = {
    .nameTextId = MSG_SWORD_SILVER,
    .descTextId = MSG_DESC_STANDARD,
    .number = ITEM_SWORD_SILVER,
    .weaponType = ITYPE_SWORD,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 18,
    .hit = 105,
    .weight = 7,
    .encodedRange = 0x11,
    .costPerUse = 2500,
    .weaponRank = WPN_EXP_B,
    .iconId = ICON_SWORD_BRONZE,
    .weaponExp = 1,
};