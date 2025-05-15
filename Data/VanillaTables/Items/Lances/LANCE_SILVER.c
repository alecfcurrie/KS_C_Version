#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemSilverLance = {
    .nameTextId = MSG_LANCE_SILVER,
    .descTextId = MSG_DESC_STANDARD,
    .number = ITEM_LANCE_SILVER,
    .weaponType = ITYPE_LANCE,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 20,
    .hit = 90,
    .weight = 8,
    .encodedRange = 0x11,
    .costPerUse = 2500,
    .weaponRank = WPN_EXP_B,
    .iconId = ICON_LANCE_SILVER,
    .weaponExp = 1,
};