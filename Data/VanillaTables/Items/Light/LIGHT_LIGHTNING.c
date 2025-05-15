#include "common-chax.h"
#include "KSDefinitions.h"

const struct ItemData ItemLightLightning = {
    .nameTextId = MSG_LIGHTNING,
	.descTextId = MSG_DESC_LIGHTNING,
	.number = ITEM_LIGHT_LIGHTNING,
	.weaponType = ITYPE_LIGHT,
	.attributes = IA_WEAPON | IA_MAGIC | IA_UNBREAKABLE,
	.maxUses = 1,
	.might = 4,
	.hit = 95,
	.weight = 6,
	.crit = 0xFF,
	.encodedRange = 0x12,
	.costPerUse = 500,
	.weaponRank = WPN_EXP_E,
	.iconId = 0x3d,
	.weaponExp = 1,
};