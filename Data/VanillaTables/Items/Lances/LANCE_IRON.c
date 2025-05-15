#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemIronLance = {
    .nameTextId = MSG_LANCE_IRON,
    .descTextId = MSG_DESC_STANDARD,
    .number = ITEM_LANCE_IRON,
    .weaponType = ITYPE_LANCE,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 12,
    .hit = 95,
    .weight = 7,
    .encodedRange = 0x11,
    .costPerUse = 1000,
    .weaponRank = WPN_EXP_D,
    .iconId = ICON_LANCE_IRON,
    .weaponExp = 1,
};