#pragma once
#include <string>
#include <vector>

namespace Enemies {
    struct Type {
        std::string name;
        std::string description;
        int maxHealth;
        int attack;
    };
    struct Modifier {
        std::string name;
        std::string description;
        float healthFactor;
        float attackFactor;
    };

    /**
     * @brief An enemy, for the player to battle and gain XP from.
     * 
     */
    class Enemy {
        public:
            std::string type;
            std::string prefix;
            std::string description;
            int maxHealth;
            int health;
            int attack;

            /**
             * @brief Construct a random Enemy by getting a random type and prefix.
             */
            Enemy();

            /**
             * @brief Returns information about the enemy, the prefix and name on one line, and its stats after a newline.
             * @return std::string 
             */
            std::string info();

            /**
             * @brief Returns the prefixed name of the enemy
             * @return std::string 
             */
            std::string getName() { return prefix + type; }

            /**
             * @brief Determines the XP gained from the enemy based on its stats. The amount of XP is partially random.
             * 
             * @return int - the amount of XP gained
             */
            int getXPWorth();
    };

    extern std::vector<Type> typeMap;
    extern std::vector<Modifier> modifierMap;
}