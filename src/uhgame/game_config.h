#ifndef __GAME_CONFIG_H__
#define __GAME_CONFIG_H__

#define UNDEADHUNTER_SERVER_PORT 46668//42000
#define UNDEADHUNTER_LANINFO_PORT 46667//41998
#define UNDEADHUNTER_MASTER_PORT 46666//41999
#define PROTOCOL_VERSION 2              // bump when protocol changes
#define DEMO_VERSION 1                  // bump when demo format changes
#define DEMO_MAGIC "UNDEAD_HUNTER_DEMO\0\0"

struct demoheader
{
    char magic[16];
    int version, protocol;
};

#endif