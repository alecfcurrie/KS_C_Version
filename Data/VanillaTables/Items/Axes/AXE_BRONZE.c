#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemBronzeAxe = {
    .nameTextId = MSG_AXE_BRONZE,
    .descTextId = MSG_DESC_BRONZE,
    .number = ITEM_AXE_BRONZE,
    .weaponType = ITYPE_AXE,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 10,
    .hit = 95,
    .weight = 6,
    .crit = 0xFF,
    .encodedRange = 0x11,
    .costPerUse = 500,
    .weaponRank = WPN_EXP_E,
    .iconId = ICON_AXE_BRONZE,
    .weaponExp = 1,
};