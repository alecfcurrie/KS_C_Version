#include "common-chax.h"
#include "strmag.h"
#include "KSDefinitions.h"

const struct UnitMagicInfo gMagicPInfos[0x100] = {
	[CHARACTER_AUDREY] = {
		.base = 0,
		.growth = 45
	},
	[CHARACTER_WESLEY] = {
		.base = 0,
		.growth = 0
	},
	[CHARACTER_OSBORNE] = {
		.base = 2,
		.growth = 65
	},
	[CHARACTER_ELAINE] = {
		.base = 0,
		.growth = 0
	},
	[CHARACTER_CORDELL] = {
		.base = 0,
		.growth = 0
	},
	[CHARACTER_SURGE] = {
		.base = 0,
		.growth = 0
	}
};
