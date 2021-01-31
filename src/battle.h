#pragma once

#include "player.h"
#include "enemy.h"

typedef Enemies::Enemy Enemy;

enum BattleResult {
    WON,
    LOST,
    FLED
};

/**
 * @brief Runs the battle loop, player fights the enemy.
 * @param player reference
 * @param enemy reference
 * @return BattleResult - WON, LOST or FLED 
 */
BattleResult battle(Player& player, Enemy& enemy);