#ifndef __NEWLIMITS_H
#define __NEWLIMITS_H

// This file contains definitions of new limits introduced to the game.
// As for now these are compile constants, but should be introduced into Settings menu.

const bool PAUSE_WHEN_IN_FOREGROUND = false;
const bool AI_CAN_SURRENDER = false;

const int MONSTER_VARIETY = 8;

const int MAX_COMBAT_LEVEL_THROUGH_TRAINING = 70;
const int KING_INITIAL_COMBAT_LEVEL = 100;
const int MAX_COMBAT_LEVEL = 200;
// This is initial combat level for new kingdoms, not their absolute max level.
const int NEW_KINGDOM_MAX_COMBAT_LEVEL = 100;

#endif //__NEWLIMITS_H