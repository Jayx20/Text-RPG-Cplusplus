#include "enemy.h"

namespace Enemies {
    Enemy::Enemy() {
        //temp
        Type type = typeMap[0];
        this->type = type.name;
        this->prefix = "TESTING";
        this->description = type.description;
        this->maxHP = type.maxHP;
        this->HP = type.maxHP;
        this->ATK = type.ATK;
    }

    std::string Enemy::info() {
        return
           prefix + " " + type + " " + description + "\n" +
           std::to_string(HP) + "/" + std::to_string(maxHP) + " " + std::to_string(ATK);
    }
}