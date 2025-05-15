#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemSilverBow = {
    .nameTextId = MSG_BOW_SILVER,
    .descTextId = MSG_DESC_STANDARD,
    .number = ITEM_BOW_IRON,
    .weaponType = ITYPE_BOW,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 21,
    .hit = 90,
    .weight = 8,
    .encodedRange = 0x22,
    .costPerUse = 3000,
    .weaponRank = WPN_EXP_B,
    .iconId = ICON_BOW_SILVER,
    .weaponExp = 1,
};