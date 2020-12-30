#ifndef __GAME_MODES_H__
#define __GAME_MODES_H__

enum
{
    M_TEAM       = 1<<0,
    M_CTF        = 1<<1,
    M_OVERTIME   = 1<<2,
    M_EDIT       = 1<<3,
    M_DEMO       = 1<<4,
    M_LOCAL      = 1<<5,
    M_LOBBY      = 1<<6,
    M_RAIL       = 1<<7,
    M_PULSE      = 1<<8
};

static struct gamemodeinfo
{
    const char *name, *prettyname;
    int flags;
    const char *info;
} gamemodes[] =
{
    { "demo", "Demo", M_DEMO | M_LOCAL, NULL},
    { "edit", "Edit", M_EDIT, "Cooperative Editing:\nEdit maps with multiple players simultaneously." },
    { "rdm", "rDM", M_LOBBY | M_RAIL, "Railgun Deathmatch:\nFrag everyone with railguns to score points." },
    { "pdm", "pDM", M_LOBBY | M_PULSE, "Pulse Rifle Deathmatch:\nFrag everyone with pulse rifles to score points." },
    { "rtdm", "rTDM", M_TEAM | M_RAIL, "Railgun Team Deathmatch:\nFrag \fs\f3the enemy team\fr with railguns to score points for \fs\f1your team\fr." },
    { "ptdm", "pTDM", M_TEAM | M_PULSE, "Pulse Rifle Team Deathmatch:\nFrag \fs\f3the enemy team\fr with pulse rifles to score points for \fs\f1your team\fr." },
    { "rctf", "rCTF", M_CTF | M_TEAM | M_RAIL, "Railgun Capture The Flag:\nCapture \fs\f3the enemy flag\fr and bring it back to \fs\f1your flag\fr to score points for \fs\f1your team\fr." },
    { "pctf", "pCTF", M_CTF | M_TEAM | M_PULSE, "Pulse Rifle Capture The Flag:\nCapture \fs\f3the enemy flag\fr and bring it back to \fs\f1your flag\fr to score points for \fs\f1your team\fr." },
};

#define STARTGAMEMODE (-1)
#define NUMGAMEMODES ((int)(sizeof(gamemodes)/sizeof(gamemodes[0])))

#define m_valid(mode)          ((mode) >= STARTGAMEMODE && (mode) < STARTGAMEMODE + NUMGAMEMODES)
#define m_check(mode, flag)    (m_valid(mode) && gamemodes[(mode) - STARTGAMEMODE].flags&(flag))
#define m_checknot(mode, flag) (m_valid(mode) && !(gamemodes[(mode) - STARTGAMEMODE].flags&(flag)))
#define m_checkall(mode, flag) (m_valid(mode) && (gamemodes[(mode) - STARTGAMEMODE].flags&(flag)) == (flag))

#define m_ctf          (m_check(gamemode, M_CTF))
#define m_teammode     (m_check(gamemode, M_TEAM))
#define m_overtime     (m_check(gamemode, M_OVERTIME))
#define isteam(a,b)    (m_teammode && a==b)
#define m_rail         (m_check(gamemode, M_RAIL))
#define m_pulse        (m_check(gamemode, M_PULSE))

#define m_demo         (m_check(gamemode, M_DEMO))
#define m_edit         (m_check(gamemode, M_EDIT))
#define m_lobby        (m_check(gamemode, M_LOBBY))
#define m_timed        (m_checknot(gamemode, M_DEMO|M_EDIT|M_LOCAL))
#define m_botmode      (m_checknot(gamemode, M_DEMO|M_LOCAL))
#define m_mp(mode)     (m_checknot(mode, M_LOCAL))

#endif