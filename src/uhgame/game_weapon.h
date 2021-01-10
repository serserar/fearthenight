#ifndef __GAME_WEAPON_H__
#define __GAME_WEAPON_H__

#include "game_sound.h"


enum { GUN_RAIL = 0, GUN_PULSE, GUN_MG , GUN_SHOTGUN, GUN_FIST, GUN_CLAW, GUN_BITE, NUMGUNS };
enum { ACT_IDLE = 0, ACT_SHOOT, ACT_MELEE, ACT_BITE, ACT_FEED, NUMACTS };
enum { ATK_RAIL_SHOOT = 0, ATK_RAIL_MELEE, ATK_PULSE_SHOOT, ATK_PULSE_MELEE,
 ATK_MG_SHOOT, ATK_MG_MELEE,ATK_SHOTGUN_SHOOT, ATK_SHOTGUN_MELEE, ATK_FIST_MELEE, ATK_CLAW_MELEE, ATK_BITE_MELEE,
  NUMATKS };

#define validgun(n) ((n) >= 0 && (n) < NUMGUNS)
#define validact(n) ((n) >= 0 && (n) < NUMACTS)
#define validatk(n) ((n) >= 0 && (n) < NUMATKS)

static const struct attackinfo { int gun, action, anim, vwepanim, hudanim, sound, hudsound, attackdelay, damage, spread, margin, projspeed, kickamount, range, rays, hitpush, exprad, ttl, use; } attacks[NUMATKS] =
{
    { GUN_RAIL, ACT_SHOOT, ANIM_SHOOT, ANIM_VWEP_SHOOT, ANIM_GUN_SHOOT, S_RAIL1,  S_RAIL2, 1300, 100, 0, 0,    0, 30, 2048, 1, 5000,  0, 0, 0 },
    { GUN_RAIL,  ACT_MELEE, ANIM_MELEE, ANIM_VWEP_MELEE, ANIM_GUN_MELEE, S_MELEE,  S_MELEE,  500, 50, 0, 2,    0,  0,   14, 1,    0,  0, 0, 0 },
    { GUN_PULSE, ACT_SHOOT, ANIM_SHOOT, ANIM_VWEP_SHOOT, ANIM_GUN_SHOOT, S_PULSE1, S_PULSE2, 700, 100, 0, 1, 1000, 30, 1024, 1, 5000, 15, 0, 0 },
    { GUN_PULSE, ACT_MELEE, ANIM_MELEE, ANIM_VWEP_MELEE, ANIM_GUN_MELEE, S_MELEE,  S_MELEE,  500, 50, 0, 2,    0,  0,   14, 1,    0,  0, 0, 0 },
    { GUN_MG,ACT_SHOOT, ANIM_SHOOT, ANIM_VWEP_SHOOT, ANIM_GUN_SHOOT, S_RAIL1, S_RAIL2, 200, 50, 0, 0,    0, 30, 2048, 1, 5000,  0, 0, 0 },
    { GUN_MG, ACT_MELEE, ANIM_MELEE, ANIM_VWEP_MELEE, ANIM_GUN_MELEE, S_MELEE,  S_MELEE,  500, 50, 0, 2,    0,  0,   14, 1,    0,  0, 0, 0 },
    { GUN_SHOTGUN, ACT_SHOOT, ANIM_SHOOT, ANIM_VWEP_SHOOT, ANIM_GUN_SHOOT, S_PULSE1, S_PULSE2, 500, 100, 0, 0,    0, 30, 2048, 1, 5000,  0, 0, 0  },
    { GUN_SHOTGUN, ACT_MELEE, ANIM_MELEE, ANIM_VWEP_MELEE, ANIM_GUN_MELEE, S_MELEE,  S_MELEE,  500, 50, 0, 2,    0,  0,   14, 1,    0,  0, 0, 0 },
    { GUN_FIST, ACT_MELEE, ANIM_MELEE, ANIM_VWEP_MELEE, ANIM_GUN_MELEE, S_MELEE,  S_MELEE,  200, 20, 0, 2,    0,  0,   14, 1,    0,  0, 0, 0 },
    { GUN_CLAW, ACT_MELEE, ANIM_MELEE, ANIM_VWEP_MELEE, ANIM_GUN_MELEE, S_MELEE,  S_MELEE,  100, 80, 0, 2,    0,  0,   25, 1,    0,  0, 0, 0 },
    { GUN_BITE, ACT_MELEE, ANIM_MELEE, ANIM_VWEP_MELEE, ANIM_GUN_MELEE, S_MELEE,  S_MELEE,  100, 95, 0, 2,    0,  0,   5, 1,    0,  0, 0, 0 }
};

static const struct guninfo { const char *name, *file, *vwep; int attacks[NUMACTS]; } guns[NUMGUNS] =
{
    { "railgun", "railgun", "worldgun/railgun", { -1, ATK_RAIL_SHOOT, ATK_RAIL_MELEE }, },
    { "pulse rifle", "pulserifle", "worldgun/pulserifle", { -1, ATK_PULSE_SHOOT, ATK_PULSE_MELEE } },
    { "mggun", "railgun", "worldgun/railgun", { -1, ATK_MG_SHOOT, ATK_MG_MELEE }, },
    { "shotgungun", "railgun", "worldgun/pulserifle", { -1, ATK_SHOTGUN_SHOOT, ATK_SHOTGUN_MELEE }, },
    { "fist", "fist", "worldgun/pulserifle", { -1, ATK_FIST_MELEE, ATK_FIST_MELEE } },
    { "claw", "claw", NULL, { -1, ATK_CLAW_MELEE, ATK_CLAW_MELEE }},
    { "bite", "bite", NULL, { -1, ATK_BITE_MELEE, ATK_BITE_MELEE }}
};

#endif