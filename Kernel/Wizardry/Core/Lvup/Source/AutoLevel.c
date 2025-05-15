#include "common-chax.h"
#include "strmag.h"
#include "lvup.h"
#include "KSDefinitions.h"

#define BASE_AUTOLEVEL_FIXED_OFFSET 49

int GetAutoleveledStatPenalty(int growth, int levels) {
	return (growth * levels) / 100;
}

LYN_REPLACE_CHECK(GetAutoleveledStatIncrease);
int GetAutoleveledStatIncrease(int growth, int levels) {
	return (BASE_AUTOLEVEL_FIXED_OFFSET + (growth * levels)) / 100;
}

void UnitAutolevelCoreConfig(struct Unit *unit, u8 classId, int levelCount, bool isHardModeBonus) {
	if (levelCount) {
		unit->maxHP += GetAutoleveledStatIncrease(unit->pClassData->growthHP,  levelCount);
		unit->pow   += GetAutoleveledStatIncrease(unit->pClassData->growthPow, levelCount);
		unit->skl   += GetAutoleveledStatIncrease(unit->pClassData->growthSkl, levelCount);
		unit->spd   += GetAutoleveledStatIncrease(unit->pClassData->growthSpd, levelCount);
		unit->lck   += GetAutoleveledStatIncrease(unit->pClassData->growthLck, levelCount);
		UNIT_MAG(unit) += GetAutoleveledStatIncrease(gpMagicJInfos[UNIT_CLASS_ID(unit)].growth, levelCount);
		
		if (!isHardModeBonus) {
			unit->def   += GetAutoleveledStatIncrease(unit->pClassData->growthDef, levelCount);
			unit->res   += GetAutoleveledStatIncrease(unit->pClassData->growthRes, levelCount);
		}
	}
}

LYN_REPLACE_CHECK(UnitAutolevelCore);
void UnitAutolevelCore(struct Unit *unit, u8 classId, int levelCount)
{
	UnitAutolevelCoreConfig(unit, classId, levelCount, false);
}


LYN_REPLACE_CHECK(UnitAutolevelPenalty);
void UnitAutolevelPenalty(struct Unit *unit, u8 classId, int levelCount)
{
	unit->maxHP -= GetAutoleveledStatPenalty(unit->pClassData->growthHP, levelCount);
	unit->pow -= GetAutoleveledStatPenalty(unit->pClassData->growthHP / 2, levelCount); // Reduced penalty
	unit->skl -= GetAutoleveledStatPenalty(unit->pClassData->growthHP / 2, levelCount); // Reduced penalty
	unit->spd -= GetAutoleveledStatPenalty(unit->pClassData->growthHP, levelCount);
	unit->def -= GetAutoleveledStatPenalty(unit->pClassData->growthHP, levelCount);
	unit->res -= GetAutoleveledStatPenalty(unit->pClassData->growthHP, levelCount);
	unit->lck   += GetAutoleveledStatIncrease(unit->pClassData->growthLck / 2, levelCount); // Reduced penalty
	UNIT_MAG(unit) -= GetAutoleveledStatPenalty(gpMagicJInfos[UNIT_CLASS_ID(unit)].growth / 2, levelCount); // Reduced penalty

	if (unit->maxHP < 1) {
		unit->maxHP = 1;
	}

	if (unit->pow < 0) {
		unit->pow = 0;
	}

	if (unit->skl < 0) {
		unit->skl = 0;
	}

	if (unit->spd < 0) {
		unit->spd = 0;
	}

	if (unit->def < 0) {
		unit->def = 0;
	}

	if (unit->res < 0) {
		unit->res = 0;
	}

	if (UNIT_MAG(unit) < 0) {
		UNIT_MAG(unit) = 0;
	}
}

LYN_REPLACE_CHECK(UnitApplyBonusLevels);
void UnitApplyBonusLevels(struct Unit* unit, int levelCount) {
    if (levelCount && !UNIT_IS_GORGON_EGG(unit)) {
        if (levelCount > 0)
            UnitAutolevelCoreConfig(unit, unit->pClassData->number, levelCount, true);
        else if (levelCount < 0)
            UnitAutolevelPenalty(unit, unit->pClassData->number, -levelCount);

        UnitCheckStatCaps(unit);

        unit->curHP = GetUnitMaxHp(unit);
    }
}

void UnitAutolevelWExpConfig(struct Unit* unit) {
	int i;
	
	// Lunatic mode base rank
	if (gPlaySt.chapterStateBits & PLAY_FLAG_HARD) {
		for (int i = 0; i <= ITYPE_DARK; i++)
			if (unit->pClassData->baseRanks[i] && (unit->ranks[i] < WPN_EXP_A))
				unit->ranks[i] = WPN_EXP_A;
	// Hard mode base rank
	} else if (!(IS_EASY_MODE)) { 
		for (int i = 0; i <= ITYPE_DARK; i++)
			if (unit->pClassData->baseRanks[i] && (unit->ranks[i] < WPN_EXP_C))
				unit->ranks[i] = WPN_EXP_C;
	}
    for (i = 0; i < GetUnitItemCount(unit); ++i) {
        int wType, item = unit->items[i];
        if (!(GetItemAttributes(item) & IA_REQUIRES_WEXP))
            continue;
        if (GetItemAttributes(item) & IA_WEAPON)
            if (CanUnitUseWeapon(unit, item))
                continue;
        if (GetItemAttributes(item) & IA_STAFF)
            if (CanUnitUseStaff(unit, item))
                continue;
        if (GetItemAttributes(item) & IA_LOCK_ANY)
            continue;
        wType = GetItemType(item);
        if (unit->ranks[wType] == 0)
            item = 0;
		
		int reqRank = GetItemRequiredExp(item);
		if (unit->ranks[wType] < reqRank)
        	unit->ranks[wType] = reqRank;
    }
}

LYN_REPLACE_CHECK(UnitAutolevelWExp);
void UnitAutolevelWExp(struct Unit* unit, const struct UnitDefinition* uDef) {
	if (uDef->autolevel) 
		UnitAutolevelWExpConfig(unit);
}

void BuffWeapons(int old, int new) {
    FOR_UNITS_ONMAP_FACTION(FACTION_RED, unit,
    {
        for(int i = 0; i < UNIT_ITEM_COUNT; i++) {
            int iid = unit->items[i];

            if (iid == ITEM_NONE)
                break;
            
            if (iid == old)
                unit->items[i] = new; // TODO: Scale WRank Appropriately
        };
		UnitAutolevelWExpConfig(unit);
    })
	
}

void BuffWeaponsASMC() {
    BuffWeapons(gEventSlots[1], gEventSlots[2]);
}