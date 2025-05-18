#include "common-chax.h"
#include "battle-system.h"
#include "skill-system.h"
#include "constants/skills.h"

// clang-format off
const struct WeaponTriangleConf gWeaponTriangleConfs[] = {
#if defined(SID_AxeBreaker) && (COMMON_SKILL_VALID(SID_AxeBreaker))
	{
		.wtype_a = ITYPE_SWORD,
		.wtype_b = ITYPE_AXE,
		.sid = SID_AxeBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20,
	},
#endif

#if defined(SID_LanceBreaker) && (COMMON_SKILL_VALID(SID_LanceBreaker))
	{
		.wtype_a = ITYPE_AXE,
		.wtype_b = ITYPE_LANCE,
		.sid = SID_LanceBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
#endif

#if defined(SID_SwordBreaker) && (COMMON_SKILL_VALID(SID_SwordBreaker))
	{
		.wtype_a = ITYPE_LANCE,
		.wtype_b = ITYPE_SWORD,
		.sid = SID_SwordBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
#endif

#if defined(SID_BowBreaker) && (COMMON_SKILL_VALID(SID_BowBreaker))
	{
		.wtype_a = ITYPE_ANIMA,
		.wtype_b = ITYPE_BOW,
		.sid = SID_BowBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
	{
		.wtype_a = ITYPE_LIGHT,
		.wtype_b = ITYPE_BOW,
		.sid = SID_BowBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
	{
		.wtype_a = ITYPE_DARK,
		.wtype_b = ITYPE_BOW,
		.sid = SID_BowBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
#endif

#if defined(SID_BMagBreaker) && (COMMON_SKILL_VALID(SID_BMagBreaker))
	{
		.wtype_a = ITYPE_BOW,
		.wtype_b = ITYPE_ANIMA,
		.sid = SID_BMagBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
	{
		.wtype_a = ITYPE_BOW,
		.wtype_b = ITYPE_LIGHT,
		.sid = SID_BMagBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
	{
		.wtype_a = ITYPE_BOW,
		.wtype_b = ITYPE_DARK,
		.sid = SID_BMagBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
	{
		.wtype_a = ITYPE_SWORD,
		.wtype_b = ITYPE_ANIMA,
		.sid = SID_BMagBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
	{
		.wtype_a = ITYPE_SWORD,
		.wtype_b = ITYPE_LIGHT,
		.sid = SID_BMagBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
	{
		.wtype_a = ITYPE_SWORD,
		.wtype_b = ITYPE_DARK,
		.sid = SID_BMagBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
	{
		.wtype_a = ITYPE_AXE,
		.wtype_b = ITYPE_ANIMA,
		.sid = SID_BMagBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
	{
		.wtype_a = ITYPE_AXE,
		.wtype_b = ITYPE_LIGHT,
		.sid = SID_BMagBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
	{
		.wtype_a = ITYPE_AXE,
		.wtype_b = ITYPE_DARK,
		.sid = SID_BMagBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
	{
		.wtype_a = ITYPE_LANCE,
		.wtype_b = ITYPE_ANIMA,
		.sid = SID_BMagBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
	{
		.wtype_a = ITYPE_LANCE,
		.wtype_b = ITYPE_LIGHT,
		.sid = SID_BMagBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
	{
		.wtype_a = ITYPE_LANCE,
		.wtype_b = ITYPE_DARK,
		.sid = SID_BMagBreaker,
		.is_buff = true,
		.bonus_hit = 20,
		.bonus_avoid = 20
	},
#endif

	{0}
};

const struct WeaponTriangleItemConf gWeaponTriangleItemConf[0x100] = {

};
