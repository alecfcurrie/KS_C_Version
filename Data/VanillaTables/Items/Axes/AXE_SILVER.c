#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemSilverAxe = {
    .nameTextId = MSG_AXE_SILVER,
    .descTextId = MSG_DESC_STANDARD,
    .number = ITEM_AXE_SILVER,
    .weaponType = ITYPE_AXE,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 22,
    .hit = 85,
    .weight = 10,
    .encodedRange = 0x11,
    .costPerUse = 1000,
    .weaponRank = WPN_EXP_D,
    .iconId = ICON_AXE_SILVER,
    .weaponExp = 1,
};