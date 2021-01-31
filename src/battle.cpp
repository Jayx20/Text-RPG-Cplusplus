#include <iostream>
#include <random>
#include "battle.h"

void wait();

static std::default_random_engine random;
static std::uniform_real_distribution<double> distribution(0.5, 1.5);

double attackModifier() {
    //TODO: dynamic attack system
    return distribution(random);
}

BattleResult battle(Player& player, Enemy& enemy) {
    player.health = player.maxHealth;
    enemy.health  = enemy.maxHealth;

    while(true) {
        printf(("Player: " +std::to_string(player.health) + "\n").c_str());
        //healthbar\n
        printf(("Enemy: " + std::to_string(enemy.health)  + "\n").c_str());
        //healthbar\n

        printf("Enter to fight. (R)un to flee from the battle.\n");
        bool validInput = false;
        bool flee = false;
        bool failedFlee = false;
        
        do {
            char input[2];
            std::cin.clear();
            fgets(input, 2, stdin);
            // we only take in, and only care about the first character
            char playerInput = input[0];
            if (playerInput == 'r' || playerInput == 'R') {
                //TODO: fail to flee
                flee = true;
                validInput = true;
            }
            else if (playerInput = '\n')
                validInput = true;
            else
                printf("Please press enter (fight) or input 'r' to run.\n");
        } while (!validInput);

        if (flee) {
            return BattleResult::FLED;
        }

        // TODO: dynamic attack system
        if (!failedFlee) {
            int playerDamage = round(player.attack * attackModifier());
            std::cout << "You deal " << playerDamage << " damage to the enemy " << enemy.type << "!" << std::endl;
            enemy.health -= playerDamage;
            wait();
            if (enemy.health <= 0) {
                std::cout << "You win!!" << std::endl;
                return BattleResult::WON;
            }
        }

        int enemyDamage = round(enemy.attack * distribution(random)); //* random between 0.5 and 1.5
        std::cout << "The enemy deals " << enemyDamage << " damage to you." << std::endl;
        player.health -= enemyDamage;
        wait();
        if(player.health <= 0) {
            std::cout << "You died..." << std::endl;
            return BattleResult::LOST;
        }

    }
}