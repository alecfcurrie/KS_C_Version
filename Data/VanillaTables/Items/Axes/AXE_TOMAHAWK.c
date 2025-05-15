#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemTomahawk = {
    .nameTextId = MSG_AXE_TOMAHAWK,
    .descTextId = MSG_DESC_ONE_TWO_RANGE,
    .number = ITEM_AXE_TOMAHAWK,
    .weaponType = ITYPE_AXE,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 12,
    .hit = 85,
    .weight = 8,
    .crit = 0xFF,
    .encodedRange = 0x12,
    .costPerUse = 3000,
    .weaponRank = WPN_EXP_B,
    .iconId = ICON_AXE_HAMMER, // TODO Change this
    .weaponExp = 1,
};