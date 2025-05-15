#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemHealStaff = {
    .nameTextId = MSG_HEAL,
    .descTextId = MSG_DESC_HEAL,
	.useDescTextId = MSG_DESC_HEAL,
    .number = ITEM_STAFF_HEAL,
    .weaponType = ITYPE_STAFF,
    .attributes = IA_STAFF,
	.maxUses = 30,
	.hit = 100,
	.weight = 2,
	.encodedRange = 0x11,
	.costPerUse = 20,
	.weaponRank = WPN_EXP_E,
	.iconId = 0x49, // TODO Update Icon
	.useEffectId = 1,
	.weaponExp = 2,
};