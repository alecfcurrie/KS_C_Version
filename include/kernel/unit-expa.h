#pragma once

#include "common-chax.h"

/**
 * We use unit->_u3A and unit->_u3B
 * These 16 bits is saved in suspand data
 */

enum unit_expa_sus_bitfile_idx {
	UES_BIT_LEGENDARY_SKILL_USED,
	UES_BIT_LEGENDARY_SKILL_ACTIVE,
	UES_BIT_GUARDBEAR_SKILL_USED,
	UES_BIT_TSZUKU_SKILL_USED,
	UES_BIT_TELEPOTRATION_SKILL_USED,
	UES_BIT_ACTED,
	UNIT_EXPA_SUS_BIT6,
	UNIT_EXPA_SUS_BIT7,
	UES_BIT_MAX
};

void SetBitUES(struct Unit *unit, int bit);
void ClearBitUES(struct Unit *unit, int bit);
bool CheckBitUES(struct Unit *unit, int bit);

void ResetUnitsExpaSus(void);

/**
 * Demo unit expa
 */
struct DemoUnitExpa {
	u8 _pad_[4];
};

extern struct DemoUnitExpa sDemoUnitExpaAlly[CONFIG_UNIT_AMT_ALLY];
extern struct DemoUnitExpa sDemoUnitExpaEnemy[CONFIG_UNIT_AMT_ENEMY + 1];
extern struct DemoUnitExpa sDemoUnitExpaNpc[CONFIG_UNIT_AMT_NPC];
extern struct DemoUnitExpa sDemoUnitExpaBattle[2];
extern struct DemoUnitExpa *const sDemoUnitExpaPool[0x100];
extern struct DemoUnitExpa *const *const gpDemoUnitExpaPool;

struct DemoUnitExpa *GetDemoUnitExpa(struct Unit *unit);
