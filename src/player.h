#pragma once

static const int DEFAULT_HEALTH = 100;
static const int DEFAULT_ATTACK =  25;

/**
 * @brief The player character. Has level, xp, maxHealth, health, and attack. All integers.
 */
class Player {
    public:
    int maxHealth = DEFAULT_HEALTH;
    int health = 0;
    int attack = DEFAULT_ATTACK;
    int level = 1;
    int xp = 0;
};