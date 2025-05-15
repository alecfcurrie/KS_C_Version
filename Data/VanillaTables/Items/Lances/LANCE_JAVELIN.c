#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemJavelin = {
    .nameTextId = MSG_LANCE_JAVELIN,
    .descTextId = MSG_DESC_ONE_TWO_RANGE,
    .number = ITEM_LANCE_JAVELIN,
    .weaponType = ITYPE_LANCE,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 5,
    .hit = 80,
    .weight = 5,
    .crit = 0xFF,
    .encodedRange = 0x12,
    .costPerUse = 1750,
    .weaponRank = WPN_EXP_D,
    .iconId = ICON_LANCE_BRAVE, // TODO Change this
    .weaponExp = 1,
};