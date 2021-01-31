#include "enemy.h"
#include <random>
#include <chrono>


namespace Enemies {

    Enemy::Enemy() {
        std::default_random_engine rand;
        //get a seed from system time
        rand.seed(std::chrono::system_clock::now().time_since_epoch().count());
        //set up random number generators
        std::uniform_int_distribution<int> randType(0,typeMap.size()-1);
        std::uniform_int_distribution<int> randMod(0,modifierMap.size()-1);
        
        //get random type and modifier
        Type type = typeMap[randType(rand)];
        Modifier modifier = modifierMap[randMod(rand)];

        this->type = type.name;
        this->prefix = modifier.name;
        this->description = type.description + " This one is " + modifier.description;
        this->maxHealth = round(type.maxHealth * modifier.healthFactor);
        this->attack = round(type.attack * modifier.attackFactor);
        this->health = this->maxHealth;
    }

    std::string Enemy::info() {
        return
           prefix + " " + type + "; " + description + "\n" +
           "HP: " + std::to_string(health) + "/" + std::to_string(maxHealth) + " ATK:" + std::to_string(attack);
    }
}