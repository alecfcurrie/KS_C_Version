#include "common-chax.h"
#include "battle-system.h"

#define DEFAULT_WRANK_BONUS_CONF {{ \
	[WPN_LEVEL_E] = {{ 0 }}, \
	[WPN_LEVEL_D] = {{ \
		[BATTLE_STATUS_HIT] = 3, \
	}}, \
	[WPN_LEVEL_C] = {{ \
		[BATTLE_STATUS_HIT] = 5, \
	}}, \
	[WPN_LEVEL_B] = {{ \
		[BATTLE_STATUS_ATK] = 1, \
		[BATTLE_STATUS_HIT] = 5, \
	}}, \
	[WPN_LEVEL_A] = {{ \
		[BATTLE_STATUS_ATK] = 1, \
		[BATTLE_STATUS_HIT] = 10, \
	}}, \
	[WPN_LEVEL_S] = {{ \
		[BATTLE_STATUS_ATK] = 3, \
		[BATTLE_STATUS_HIT] = 15, \
		[BATTLE_STATUS_SILENCER] = 1, \
	}}, \
}}

struct WrankBonusConf const WrankBonusConf[WRANK_BONUS_ITYPE_COUNT] = {
	[ITYPE_SWORD] = DEFAULT_WRANK_BONUS_CONF,
	[ITYPE_LANCE] = DEFAULT_WRANK_BONUS_CONF,
	[ITYPE_AXE]   = DEFAULT_WRANK_BONUS_CONF,
	[ITYPE_BOW]   = DEFAULT_WRANK_BONUS_CONF,
	[ITYPE_ANIMA] = DEFAULT_WRANK_BONUS_CONF,
	[ITYPE_LIGHT] = DEFAULT_WRANK_BONUS_CONF,
	[ITYPE_DARK]  = DEFAULT_WRANK_BONUS_CONF,
};
