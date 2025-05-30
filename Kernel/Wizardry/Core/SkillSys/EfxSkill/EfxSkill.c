#include "common-chax.h"
#include "skill-system.h"
#include "efx-skill.h"
#include "icon-rework.h"
#include "combat-art.h"
#include "constants/efx-skills.h"

#define LOCAL_TRACE 0

struct ProcEfxSkillRework {
	PROC_HEADER;
	int timer;
	int frame;
	u16 sid;
	struct Anim *anim;
	const u16 *const *imgs;
	const u16 *const *pals;
	const u16 *const *tsas;
	const s16 *frames;
};

STATIC_DECLAR void EfxSkillOnInit(struct ProcEfxSkillRework *proc)
{
	NewEfxSkillBox(proc->anim, 0, GetIconGfx(SKILL_ICON(proc->sid)),
		       proc->sid, EFX_SKILL_BOX_SKILL);
}

STATIC_DECLAR void EfxCombatArtOnInit(struct ProcEfxSkillRework *proc)
{
	NewEfxSkillBox(proc->anim, 0, GetCombatArtIcon(proc->sid), proc->sid,
		       EFX_SKILL_BOX_COMBATART);
}

STATIC_DECLAR void EfxSkillMain(struct ProcEfxSkillRework *proc)
{
	int ret = EfxAdvanceFrameLut((void *)&proc->timer, (void *)&proc->frame,
				     proc->frames);

	if (ret >= 0) {
		int i;

		SpellFx_WriteBgMap(proc->anim, proc->tsas[ret],
				   proc->tsas[ret]);
		SpellFx_RegisterBgGfx(proc->imgs[ret], 0x2000);
		SpellFx_RegisterBgPal(proc->pals[ret], 0x20);

		for (i = 0; i < 0x14; i++) {
			gBG1TilemapBuffer[0x20 * i + 0x1E] =
				gBG1TilemapBuffer[0];
			gBG1TilemapBuffer[0x20 * i + 0x1F] =
				gBG1TilemapBuffer[0];
		}

		SpellFx_SetSomeColorEffect();
	}

	if (ret == -1)
		Proc_Break(proc);
}

STATIC_DECLAR void EfxSkillOnEnd(struct ProcEfxSkillRework *proc)
{
	SpellFx_ClearBG1();
	SetDefaultColorEffects_();
}

STATIC_DECLAR const struct ProcCmd ProcScr_EfxSkill[] = {
	PROC_NAME("EfxSkill"),	       PROC_YIELD,
	PROC_CALL(EfxSkillOnInit),     PROC_REPEAT(EfxSkillMain),
	PROC_CALL(EfxSkillOnEnd),      PROC_SLEEP(0x10),
	PROC_WHILE(EfxSkillBoxExists), PROC_END
};

STATIC_DECLAR const struct ProcCmd ProcScr_EfxCombatArt[] = {
	PROC_NAME("EfxCombatArt"),     PROC_YIELD,
	PROC_CALL(EfxCombatArtOnInit), PROC_REPEAT(EfxSkillMain),
	PROC_CALL(EfxSkillOnEnd),      PROC_SLEEP(0x10),
	PROC_WHILE(EfxSkillBoxExists), PROC_END
};

void NewEfxSkill(struct Anim *anim, int sid)
{
	u16 sfx;
	struct ProcEfxSkillRework *proc;
	const struct EfxAnimConf *conf = gpEfxSkillAnims[sid];

	if (!(COMMON_SKILL_VALID(sid)))
		return;

	if (!IS_ROM_DATA(conf))
		conf = gpEfxSkillVanilla;

	proc = Proc_Start(ProcScr_EfxSkill, PROC_TREE_3);
	proc->timer = 0;
	proc->frame = 0;
	proc->anim = anim;
	proc->sid = sid;

	proc->imgs = conf->imgs;
	proc->pals = conf->pals;
	proc->tsas = conf->tsas;
	proc->frames = conf->frame_confs;

	sfx = conf->sfx;
	if (sfx != 0)
		PlaySFX(sfx, 0x100, anim->xPosition, 0x1);

	if (gEkrDistanceType != EKR_DISTANCE_CLOSE) {
		if (GetAnimPosition(anim) == EKR_POS_L)
			BG_SetPosition(BG_1, 0x28, 0);
		else
			BG_SetPosition(BG_1, 0xE8, 0);
	}
}

void NewEfxCombatArt(struct Anim *anim, int cid)
{
	u16 sfx;
	struct ProcEfxSkillRework *proc;
	const struct EfxAnimConf *conf = gpEfxCombatArtAnims[cid];

	if (!(COMBART_VALID(cid)))
		return;

	if (!IS_ROM_DATA(conf))
		conf = gpEfxSkillCombat;

	proc = Proc_Start(ProcScr_EfxCombatArt, PROC_TREE_3);
	proc->timer = 0;
	proc->frame = 0;
	proc->anim = anim;
	proc->sid = cid;

	proc->imgs = conf->imgs;
	proc->pals = conf->pals;
	proc->tsas = conf->tsas;
	proc->frames = conf->frame_confs;

	sfx = conf->sfx;
	if (sfx != 0)
		PlaySFX(sfx, 0x100, anim->xPosition, 0x1);

	if (gEkrDistanceType != EKR_DISTANCE_CLOSE) {
		if (GetAnimPosition(anim) == EKR_POS_L)
			BG_SetPosition(BG_1, 0x28, 0);
		else
			BG_SetPosition(BG_1, 0xE8, 0);
	}
}

bool EfxSkillExists(void)
{
	return !!Proc_Find(ProcScr_EfxSkill) ||
	       !!Proc_Find(ProcScr_EfxCombatArt);
}
