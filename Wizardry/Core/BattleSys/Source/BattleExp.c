#include "common-chax.h"
#include "skill-system.h"
#include "bwl.h"
#include "constants/skills.h"

/* LynJump */
int GetUnitExpLevel(struct Unit * unit)
{
    int base, bonus;
    base = unit->level;

    if (CheckHasBwl(UNIT_CHAR_ID(unit)))
        bonus = GetUnitHiddenLevel(unit);
    else
        bonus = gpClassPreLoadHiddenLevel[UNIT_CLASS_ID(unit)];

    return base + bonus;
}

STATIC_DECLAR int KernelModifyBattleUnitExp(int base, struct BattleUnit * actor, struct BattleUnit * target)
{
    int status = base;

#if defined(SID_Blossom) && (COMMON_SKILL_VALID(SID_Blossom))
    if (SkillTester(&actor->unit, SID_Blossom))
        status = status / 2;
#endif

#if defined(SID_Paragon) && (COMMON_SKILL_VALID(SID_Paragon))
    if (SkillTester(&actor->unit, SID_Paragon))
        status = status * 2;
#endif

    /* Check last */
#if defined(SID_VoidCurse) && (COMMON_SKILL_VALID(SID_VoidCurse))
    if (SkillTester(&target->unit, SID_VoidCurse))
        status = 0;
#endif

    LIMIT_AREA(status, 1, 100);
    return status;
}

/* LynJump */
int GetBattleUnitExpGain(struct BattleUnit * actor, struct BattleUnit * target)
{
    int result;

    if (!CanBattleUnitGainLevels(actor) || (actor->unit.curHP == 0) || UNIT_CATTRIBUTES(&target->unit) & CA_NEGATE_LETHALITY)
        return 0;

    if (!actor->nonZeroDamage)
        return 1;

    result = GetUnitRoundExp(&actor->unit, &target->unit);
    result += GetUnitKillExpBonus(&actor->unit, &target->unit);

    result = KernelModifyBattleUnitExp(result, actor, target);

#if !CHAX
    ModifyUnitSpecialExp(&actor->unit, &target->unit, &result);
#endif

    return result;
}

/* LynJump */
void BattleApplyMiscActionExpGains(void)
{
    int exp;

    if (UNIT_FACTION(&gBattleActor.unit) != FACTION_BLUE)
        return;

    if (!CanBattleUnitGainLevels(&gBattleActor))
        return;

    if (gPlaySt.chapterStateBits & PLAY_FLAG_EXTRA_MAP)
        return;

    exp = 10;
    exp = KernelModifyBattleUnitExp(exp, &gBattleActor, &gBattleTarget);

    gBattleActor.expGain = exp;
    gBattleActor.unit.exp += exp;

    CheckBattleUnitLevelUp(&gBattleActor);
}
