#include "common-chax.h"
#include "skill-system.h"
#include "constants/skills.h"

const struct SkillPreloadPConf gSkillPreloadPData[0x100] = {
	
};

const struct SkillPreloadJConf gSkillPreloadJData[0x100] = {

};

/*
	[CLASS_SNIPER] = {{
#if (defined(SID_RangeBonusBow2) && COMMON_SKILL_VALID(SID_RangeBonusBow2))
		[10] = SID_RangeBonusBow2,
#endif
	}},

	[CLASS_SNIPER_F] = {{
#if (defined(SID_RangeBonusBow2) && COMMON_SKILL_VALID(SID_RangeBonusBow2))
		[10] = SID_RangeBonusBow2,
#endif
	}},

	[CLASS_MANAKETE_MYRRH] = {{
#if (defined(SID_SuperLuck) && COMMON_SKILL_VALID(SID_SuperLuck))
		[10] = SID_SuperLuck
#endif
	}},
*/