#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemIronAxe = {
    .nameTextId = MSG_AXE_IRON,
    .descTextId = MSG_DESC_STANDARD,
    .number = ITEM_AXE_IRON,
    .weaponType = ITYPE_AXE,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 13,
    .hit = 90,
    .weight = 8,
    .encodedRange = 0x11,
    .costPerUse = 1000,
    .weaponRank = WPN_EXP_D,
    .iconId = ICON_AXE_IRON,
    .weaponExp = 1,
};