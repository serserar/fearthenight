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


void GameClass::apply_class(gamestate& state, int team)
{
    switch(team){
        
        case 1:
            state.gameclass = HUNTER;
            state.health = 100;
            state.maxhealth = 100;
            break;
        case 2:
            state.gameclass = UNDEAD_VAMPIRE;
            state.health = 100;
            state.maxhealth = 100;
            break;
    };
}

void GameClass::apply_respawn(gamestate& state)
{
    switch(state.gameclass){

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

int GameClass::apply_damage(gamestate& state,int damage){

    switch(state.gameclass){
        case HUNTER:
            state.health -= damage;
            break;
        case UNDEAD_VAMPIRE:
            damage = damage/2;
            state.health -= damage;
            break;
        default:
            state.health -= damage;
            break;    
    };
    return damage;
}
 

const char* GameClass::get_class(int gameclass)
{
    if(gameclass > 2){
        gameclass = 0;
    }
    return classnames[gameclass];
}

