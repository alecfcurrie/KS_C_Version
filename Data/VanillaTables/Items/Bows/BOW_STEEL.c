#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemSteelBow = {
    .nameTextId = MSG_BOW_STEEL,
    .descTextId = MSG_DESC_STANDARD,
    .number = ITEM_BOW_IRON,
    .weaponType = ITYPE_BOW,
    .attributes = IA_WEAPON | IA_UNBREAKABLE,
    .maxUses = 1,
    .might = 15,
    .hit = 80,
    .weight = 9,
    .encodedRange = 0x22,
    .costPerUse = 2000,
    .weaponRank = WPN_EXP_C,
    .iconId = ICON_BOW_STEEL,
    .weaponExp = 1,
    .tieredWeaponType = TIER_WEAPON_BOW,
};