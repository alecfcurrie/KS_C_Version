#include "common-chax.h"
#include "skill-system.h"
#include "constants/skills.h"

/**
 * If you want use this list, make sure that the following config has been uncommented:
 *
 * CONFIG_FIT_OLD_SKILLSYS_LIST
 */

struct FebListEnt const *const CharLevelUpSkillTable[0x100] = {};

struct FebListEnt const *const ClassLevelUpSkillTable[0x100] = {};
