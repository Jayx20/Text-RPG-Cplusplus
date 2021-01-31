#include <iostream>
#include <string>

#include "variables.h"
#include "enemy.h"
#include "player.h"
#include "battle.h"

typedef Enemies::Enemy Enemy;

void wait() {
    printf("...");
    std::cin.get();
}

// TODO: use std::cout and std::cin instead of printf lol

int main() {

    printf("Welcome to good game best game.\n");

    while (true) {
        Player player;
        Enemy enemy;

        printf(("You encounter a(n) "+enemy.info()+"\n").c_str());
        wait();
        
        BattleResult battleResult = battle(player, enemy);

        if (battleResult == BattleResult::FLED || battleResult == BattleResult::LOST) {
            printf("You FAIL.\n");
        }
        else { //only other possibility is you won
            printf("Good job.\n");
        }
        wait();
    }

    return 0;
}