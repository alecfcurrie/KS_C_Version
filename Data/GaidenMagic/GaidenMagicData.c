#include <common-chax.h>
#include <gaiden-magic.h>
#include <skill-system.h>
#include <constants/skills.h>
#include "KSDefinitions.h"

const u8 gGaidenWeaponCostList[0x100] = {
	
};

struct GaidenPinfoConfig const gGaidenPinfoConfigList[0x100] = {

};

// This config is valid only when CONFIG_GAIDEN_EXT_CONF_EN is set!
const struct GaidenChaxConfigEnt gGaidenChaxConfigs[] = {
#if (defined(SID_Latona) && COMMON_SKILL_VALID(SID_Latona))
	{
		.iid = ITEM_STAFF_LATONA,
		.skill = SID_Latona,
	},
#endif
	{ 0 },
};
