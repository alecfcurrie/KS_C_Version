#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemIronBow = {
    .nameTextId = MSG_BOW_IRON,
    .descTextId = MSG_DESC_STANDARD,
    .number = ITEM_BOW_IRON,
    .weaponType = ITYPE_BOW,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 12,
    .hit = 95,
    .weight = 6,
    .encodedRange = 0x22,
    .costPerUse = 1000,
    .weaponRank = WPN_EXP_D,
    .iconId = ICON_BOW_IRON,
    .weaponExp = 1,
};