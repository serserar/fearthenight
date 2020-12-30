/*
 * Copyright 2020 <copyright holder> <email>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef GAMECLASS_H
#define GAMECLASS_H

struct gameent;
struct gamestate;

#define MAXCLASSES 2
static const char * const classnames[1+MAXCLASSES] = { "npc", "undead vampire", "hunter" };

enum gclass
{
  NPC=0, HUNTER=1,UNDEAD_VAMPIRE=2
};

/**
 * @todo write docs
 */
class GameClass
{
public:
    /**
     * @todo write docs
     */
    GameClass ()= delete;
    
    static void apply_class(gamestate& state, int team);
    static void apply_weapons(gamestate& state, int gamemode);
    static void apply_respawn(gamestate& state);
    static int apply_damage(gamestate& state, int damage);
    static const char * get_class(int gameclass);

};

#endif // GAMECLASS_H
