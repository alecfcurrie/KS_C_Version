#include "common-chax.h"
#include "skill-system.h"
#include "constants/skills.h"
#include "KSDefinitions.h"

const u16 gConstSkillTable_Person[0x100][2] = {
    [CHARACTER_AUDREY] = {
#if (defined(SID_BornLeader) && COMMON_SKILL_VALID(SID_BornLeader))
        SID_BornLeader
#endif
    },
    [CHARACTER_WESLEY] = {
#if (defined(SID_VerdantPoise) && COMMON_SKILL_VALID(SID_VerdantPoise))
        SID_VerdantPoise
#endif
    },
};
