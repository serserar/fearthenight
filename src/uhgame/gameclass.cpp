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

#include "gameclass.h"
#include "game.h"

/**
 * @brief Apply class values life, speed, jumpspeed, gravity depends the 
 * selected team.
 * 
 * @param ent current gameent
 * @param team int with the team
 */
void GameClass::apply_class(gameent &ent, int team)
{
    switch (team)
    {
        case 1:
            ent.gameclass = HUNTER;
            ent.health = 100;
            ent.maxhealth = 100;
            ent.maxspeed = 100;
            ent.jumpspeed = 125.f;
            ent.gravity = 200.f;
            break;
        case 2:
            ent.gameclass = UNDEAD_VAMPIRE;
            ent.health = 120;
            ent.maxhealth = 120;
            ent.maxspeed = 120; 
            ent.jumpspeed = 250.f;
            ent.gravity = 100.f;
            break;
    };
}

void GameClass::apply_class(gamestate &state, int team)
{
    switch (team)
    {
        case 1:
            state.gameclass = HUNTER;
            state.health = 100;
            state.maxhealth = 100;
            break;
        case 2:
            state.gameclass = UNDEAD_VAMPIRE;
            state.health = 120;
            state.maxhealth = 120;
            break;
    };
}

/**
 * @brief 
 * Apply weapons to player class
 * @param state current gamestate (player or bot)
 * @param gamemode current gamemode
 */
void GameClass::apply_weapons(gamestate &state, int gamemode)
{
    switch (state.gameclass)
    {
        case HUNTER:
            if (m_rail)
            {
                // gunselect = GUN_RAIL;
                // ammo[GUN_RAIL] = 1;
                state.gunselect = GUN_MG;
                state.ammo[GUN_MG] = 1;
            }
            else if (m_pulse)
            {
                state.gunselect = GUN_PULSE;
                state.ammo[GUN_PULSE] = 1;
            }
            else if (m_edit)
            {
                state.gunselect = GUN_RAIL;
                loopi(NUMGUNS) state.ammo[i] = 1;
            }

            break;
        case UNDEAD_VAMPIRE:
            state.gunselect = GUN_CLAW;
            loopi(NUMGUNS) state.ammo[i] = 1;
            break;
    };
}

void GameClass::apply_respawn(gamestate &state)
{
    switch (state.gameclass)
    {
        case HUNTER:
            state.health = 100;
            state.maxhealth = 100;
            break;
        case UNDEAD_VAMPIRE:
            state.health = 100;
            state.maxhealth = 100;
            break;
    };
}

/**
 * @brief Apply damage logic to different classes
 * 
 * @param state current gamestate (player or bot)
 * @param damage  int with damage
 * @return int with the finally applied damage
 */
int GameClass::apply_damage(gamestate &state, int damage)
{
    switch (state.gameclass)
    {
        case HUNTER:
            state.health -= damage;
            break;
        case UNDEAD_VAMPIRE:
            damage = damage / 2;
            state.health -= damage;
            break;
        default:
            state.health -= damage;
            break;
    };
    return damage;
}

const char *GameClass::get_class(int gameclass)
{
    if (gameclass > 2)
    {
        gameclass = 0;
    }
    return classnames[gameclass];
}
