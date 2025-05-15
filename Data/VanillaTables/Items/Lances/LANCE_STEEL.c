#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemSteelLance = {
    .nameTextId = MSG_LANCE_STEEL,
    .descTextId = MSG_DESC_STANDARD,
    .number = ITEM_SWORD_STEEL,
    .weaponType = ITYPE_LANCE,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 16,
    .hit = 85,
    .weight = 9,
    .encodedRange = 0x11,
    .costPerUse = 1500,
    .weaponRank = WPN_EXP_C,
    .iconId = ICON_LANCE_STEEL,
    .weaponExp = 1,
};