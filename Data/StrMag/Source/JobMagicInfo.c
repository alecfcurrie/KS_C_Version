#include "common-chax.h"
#include "strmag.h"
#include "KSDefinitions.h"

const struct UnitMagicInfo gMagicJInfos[0x100] = {
	[CLASS_ARCHER_F] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
	[CLASS_ARCHER_M] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
	[CLASS_AXE_CAVALIER_F] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
	[CLASS_AXE_CAVALIER_M] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
	[CLASS_FIGHTER_M] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
	[CLASS_OUTLAW_F] = {
		.base = 3,
		.growth = 25,
		.cap = 16,
		.bonus = 0,
	},
    [CLASS_OUTLAW_M] = {
		.base = 3,
		.growth = 25,
		.cap = 16,
		.bonus = 0
	},
    [CLASS_PRIEST_M] = {
		.base = 5,
		.growth = 45,
		.cap = 18,
		.bonus = 0,
	},
    [CLASS_PRINCESS_F] = {
		.base = 4,
		.growth = 0,
		.cap = 17,
		.bonus = 0,
	},
    [CLASS_SOLDIER_F] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
    [CLASS_SOLDIER_M] = {
		.base = 0,
		.growth = 0,
		.cap = 15,
		.bonus = 0,
	},
    [CLASS_SWORDFIGHTER_F] = {
		.base = 0,
		.growth = 15,
		.cap = 16,
		.bonus = 0,
	},
    [CLASS_SWORDFIGHTER_M] = {
		.base = 0,
		.growth = 15,
		.cap = 16,
		.bonus = 0,
	}
};
