#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemHandaxe = {
    .nameTextId = MSG_AXE_HANDAXE,
    .descTextId = MSG_DESC_ONE_TWO_RANGE,
    .number = ITEM_AXE_HANDAXE,
    .weaponType = ITYPE_AXE,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 6,
    .hit = 75,
    .weight = 7,
    .crit = 0xFF,
    .encodedRange = 0x12,
    .costPerUse = 1750,
    .weaponRank = WPN_EXP_D,
    .iconId = ICON_AXE_HAMMER, // TODO Change this
    .weaponExp = 1,
};