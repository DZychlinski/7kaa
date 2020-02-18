#ifndef __NEWLIMITS_H
#define __NEWLIMITS_H

// This file contains definitions of new limits introduced to the game.
// As for now these are compile constants, but should be introduced into Settings menu.

const bool AI_CAN_SURRENDER = false;
const bool AI_COMMANDS_PLAYER_NATION = false;

const int MONSTER_VARIETY = 8;

const int MAX_COMBAT_LEVEL_THROUGH_TRAINING = 70;
const int KING_INITIAL_COMBAT_LEVEL = 100;
const int MAX_COMBAT_LEVEL = 200;
// This is initial combat level for new kingdoms, not their absolute max level.
const int NEW_KINGDOM_MAX_COMBAT_LEVEL = 100;

const int MAP_ORIGINAL_SIZE = 200;
const int MAP_SMALL_SIZE = 400;
const int MAP_MEDIUM_SIZE = 600;
const int MAP_BIG_SIZE = 800;
const int MAP_LARGE_SIZE = 1000;

const int ACTIVE_MAP_SIZE = MAP_SMALL_SIZE;

#endif //__NEWLIMITS_H