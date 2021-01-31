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

    class Enemy {
        private:
            std::string type;
            std::string prefix;
            std::string description;
            int maxHealth;
            int health;
            int attack;
        public:
            /**
             * @brief Construct a random Enemy by getting a random type and prefix.
             */
            Enemy();

            /**
             * @brief Returns information about the enemy, the prefix and name on one lines, and its stats after a newline.
             * @return std::string 
             */
            std::string info();
    };

    extern std::vector<Type> typeMap;
    extern std::vector<Modifier> modifierMap;
}