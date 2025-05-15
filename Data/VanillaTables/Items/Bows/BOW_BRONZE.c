#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemBronzeBow = {
    .nameTextId = MSG_BOW_BRONZE,
    .descTextId = MSG_DESC_BRONZE,
    .number = ITEM_BOW_BRONZE,
    .weaponType = ITYPE_BOW,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 9,
    .hit = 100,
    .crit = 0xFF,
    .weight = 4,
    .encodedRange = 0x22,
    .costPerUse = 500,
    .weaponRank = WPN_EXP_E,
    .iconId = ICON_BOW_BRONZE,
    .weaponExp = 1,
};