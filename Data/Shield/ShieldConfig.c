#include <common-chax.h>
#include <shield.h>
#include "KSDefinitions.h"

struct ShieldExtEquipableConfig const gShieldExtEquipableConfig[] = {
	{ 0 }
};

struct ShieldItem const gShieldItemTable[0x100] = {
	[ITEM_HOPLON_SHIELD] = {
		.en = true,

		.info = {
			.iid = ITEM_HOPLON_SHIELD,
			.consume_on_defense = true,
			.consume_on_hitted  = true,
			.battle_status_bonus = { [BATTLE_STATUS_DEF] = 2 },
			.unit_status_bonus = {
				[UNIT_STATUS_DEF] = 3,
				[UNIT_STATUS_RES] = 3,
			},
			.unit_growth_bonus = {
				[UNIT_STATUS_DEF] = 10,
				[UNIT_STATUS_RES] = 10,
			},
		},
	},
};
