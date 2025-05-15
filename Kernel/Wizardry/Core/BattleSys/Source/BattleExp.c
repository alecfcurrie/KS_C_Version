#include "common-chax.h"
#include "skill-system.h"
#include "battle-system.h"
#include "bwl.h"
#include "constants/skills.h"
#include "KSDefinitions.h"

#define BASE_KILL_EXP_AMOUNT 30
#define BASE_CHIP_EXP_AMOUNT 10

#define NORMAL_MODE_EXP_BONUS 12
#define HARD_MODE_EXP_BONUS 6

int GetDifficultyExpBonus() {
	if (IS_EASY_MODE) // Playing on Normal mode
		return NORMAL_MODE_EXP_BONUS;
	else if (!(gPlaySt.chapterStateBits & PLAY_FLAG_HARD)) // Playing on Hard mode
		return HARD_MODE_EXP_BONUS;
	return 0;
}

int GetUnitChipExpAmount(struct Unit* actor, struct Unit* target) {
	int result;
	int levelDifference = GetUnitExpLevel(actor) - GetUnitExpLevel(target);

	if (levelDifference > 0) // Unit is overleveled
		result = BASE_CHIP_EXP_AMOUNT - (levelDifference * 2);
	else if (levelDifference < 0) // Unit is underleveled
		result = BASE_CHIP_EXP_AMOUNT - levelDifference;
	else
		result = BASE_CHIP_EXP_AMOUNT;

	if (result < 0) 
		result = 0;
	if (result > 16)
		result = 16;
	
	return result;
}

int GetUnitKillExpAmount(struct Unit* actor, struct Unit* target) {

    if (target->curHP != 0) {
        return 0;
	}
	
	int levelDifference = GetUnitExpLevel(actor) - GetUnitExpLevel(target);
	int result;
	
	if (levelDifference > 0)  // Unit is overeleveled
		result =  BASE_KILL_EXP_AMOUNT - (((levelDifference + 3) * levelDifference) / 2);
	else if (levelDifference < 0) // Unit is underleveled
		result = BASE_KILL_EXP_AMOUNT + (((-levelDifference + 3) * -levelDifference) / 2);
	else
		result = BASE_KILL_EXP_AMOUNT;
	
	if (result > 75) {
		result = 75;
	}

	result += GetDifficultyExpBonus();

	result += GetUnitClassKillExpBonus(actor, target);

	if (result < 1) {
		result = 1;
	}
	
	return result;
}

int GetBattleUnitExpGain_New(struct BattleUnit* actor, struct BattleUnit* target) {
    int result;

    if (!CanBattleUnitGainLevels(actor) || (actor->unit.curHP == 0) || UNIT_CATTRIBUTES(&target->unit) & CA_NEGATE_LETHALITY) {
        return 0;
	}

    if (!actor->nonZeroDamage) {
        return 0;
	}
	
	result = GetUnitKillExpAmount(&actor->unit, &target->unit);
	
	if (result == 0)
		result = GetUnitChipExpAmount(&actor->unit, &target->unit);

    if (result > 100)
        result = 100;

    ModifyUnitSpecialExp(&actor->unit, &target->unit, &result);

    return result;
}



LYN_REPLACE_CHECK(GetUnitExpLevel);
int GetUnitExpLevel(struct Unit *unit)
{
	int base, bonus;

	base = unit->level;

	if (CheckHasBwl(UNIT_CHAR_ID(unit)))
		bonus = GetUnitHiddenLevel(unit);
	else
		bonus = gpClassPreLoadHiddenLevel[UNIT_CLASS_ID(unit)];

	return base + bonus;
}

STATIC_DECLAR int KernelModifyBattleUnitExp(int base, struct BattleUnit *actor, struct BattleUnit *target)
{
	int status = base;

#if defined(SID_Blossom) && (COMMON_SKILL_VALID(SID_Blossom))
	if (BattleFastSkillTester(actor, SID_Blossom))
		status = status / 2;
#endif

#if defined(SID_Paragon) && (COMMON_SKILL_VALID(SID_Paragon))
	if (BattleFastSkillTester(actor, SID_Paragon))
		status = status * 2;
#endif

	/* Check last */
#if defined(SID_VoidCurse) && (COMMON_SKILL_VALID(SID_VoidCurse))
	if (BattleFastSkillTester(target, SID_VoidCurse))
		status = 0;
#endif

	LIMIT_AREA(status, 0, 100);
	if (base > 0 && status <= 0)
		status = 1;

	return status;
}

int GetBattleUnitExpGainRework(struct BattleUnit *actor, struct BattleUnit *target)
{
	int result = GetBattleUnitExpGain_New(actor, target);

	result = KernelModifyBattleUnitExp(result, actor, target);
	ModifyUnitSpecialExp(&actor->unit, &target->unit, &result);

	return result;
}

LYN_REPLACE_CHECK(BattleApplyMiscActionExpGains);
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

#if CHAX
	ResetPopupSkillStack();
#endif

	CheckBattleUnitLevelUp(&gBattleActor);
}

int GetBattleUnitStaffExpRework(struct BattleUnit *bu)
{
	int result = GetBattleUnitStaffExp(bu);

	result = KernelModifyBattleUnitExp(
		result,
		bu,
		bu == &gBattleActor
			? &gBattleTarget
			: &gBattleActor);

	if (result > 100)
		result = 100;

	return result;
}

LYN_REPLACE_CHECK(BattleApplyItemExpGains);
void BattleApplyItemExpGains(void)
{
	if (gPlaySt.chapterStateBits & PLAY_FLAG_EXTRA_MAP)
		return;

#if CHAX
	ResetPopupSkillStack();
#endif

	if (gBattleActor.weaponAttributes & IA_STAFF) {
		if (UNIT_FACTION(&gBattleActor.unit) == FACTION_BLUE)
			gBattleActor.wexpMultiplier++;

		gBattleActor.expGain = GetBattleUnitStaffExpRework(&gBattleActor);
		gBattleActor.unit.exp += gBattleActor.expGain;

		CheckBattleUnitLevelUp(&gBattleActor);
	} else if ((gBattleActor.weaponType == ITYPE_12) && (gBattleActor.unit.exp != UNIT_EXP_DISABLED)) {
		gBattleActor.expGain = 20;
		gBattleActor.unit.exp += 20;

		CheckBattleUnitLevelUp(&gBattleActor);
	}
}

LYN_REPLACE_CHECK(BattleApplyExpGains);
void BattleApplyExpGains(void)
{
	if ((UNIT_FACTION(&gBattleActor.unit) != FACTION_BLUE) || (UNIT_FACTION(&gBattleTarget.unit) != FACTION_BLUE)) {
		if (!(gPlaySt.chapterStateBits & PLAY_FLAG_EXTRA_MAP)) {
			gBattleActor.expGain  = GetBattleUnitExpGainRework(&gBattleActor, &gBattleTarget);
			gBattleTarget.expGain = GetBattleUnitExpGainRework(&gBattleTarget, &gBattleActor);

			gBattleActor.unit.exp  += gBattleActor.expGain;
			gBattleTarget.unit.exp += gBattleTarget.expGain;

#if CHAX
			ResetPopupSkillStack();
#endif

			CheckBattleUnitLevelUp(&gBattleActor);
			CheckBattleUnitLevelUp(&gBattleTarget);
		}
	}
}
