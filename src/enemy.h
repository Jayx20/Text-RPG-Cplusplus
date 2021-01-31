#pragma once
#include <string>
#include <vector>

namespace Enemies {
    struct Type {
        std::string name;
        std::string description;
        int maxHP;
        int ATK;
    };
    struct Modifier {
        std::string name;
        std::string description;
        int HP;
        int ATK;
    };

    class Enemy {
        private:
            std::string type;
            std::string prefix;
            std::string description;
            int maxHP;
            int HP;
            int ATK;
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
    extern std::vector<Modifier> prefixMap;
}