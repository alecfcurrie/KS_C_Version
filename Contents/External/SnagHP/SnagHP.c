#include "common-chax.h"

LYN_REPLACE_CHECK(InitObstacleBattleUnit);
void InitObstacleBattleUnit(void) {
    ClearUnit(&gBattleTarget.unit);

    gBattleTarget.unit.index = 0;

    gBattleTarget.unit.pClassData = GetClassData(CLASS_OBSTACLE);

    gBattleTarget.unit.maxHP = GetROMChapterStruct(gPlaySt.chapterIndex)->mapCrackedWallHeath;
    gBattleTarget.unit.curHP = gActionData.trapType; // TODO: better

    gBattleTarget.unit.xPos  = gActionData.xOther;
    gBattleTarget.unit.yPos  = gActionData.yOther;

    switch (gBmMapTerrain[gBattleTarget.unit.yPos][gBattleTarget.unit.xPos]) {

    case TERRAIN_WALL_1B:
        gBattleTarget.unit.pCharacterData = GetCharacterData(CHARACTER_WALL);

        break;

    case TERRAIN_SNAG:
        gBattleTarget.unit.pCharacterData = GetCharacterData(CHARACTER_SNAG);

        break;

    } // switch (gBmMapTerrain[gBattleTarget.unit.yPos][gBattleTarget.unit.xPos])
}

LYN_REPLACE_CHECK(InitMapObstacles);
void InitMapObstacles(void)
{
    int ix, iy;

    for (iy = gBmMapSize.y - 1; iy >= 0; --iy)
    {
        for (ix = gBmMapSize.x - 1; ix >= 0; --ix)
        {
            switch (gBmMapTerrain[iy][ix])
            {

            case TERRAIN_WALL_1B:
                if (gBmMapTerrain[iy-1][ix] == TERRAIN_WALL_1B)
                    continue; // walls are stacked, only the topmost tile gets a trap

                AddTrap(
                    ix, iy, TRAP_OBSTACLE,
                    GetROMChapterStruct(gPlaySt.chapterIndex)->mapCrackedWallHeath);

                break;

            case TERRAIN_SNAG:
                AddTrap(ix, iy, TRAP_OBSTACLE, GetROMChapterStruct(gPlaySt.chapterIndex)->mapCrackedWallHeath);
                break;

            } // switch (gBmMapTerrain[iy][ix])
        }
    }
}