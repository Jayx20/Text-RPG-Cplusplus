#include <iostream>
#include <string>

#include "variables.h"
#include "enemy.h"

int main() {
    typedef Enemies::Enemy Enemy;

    printf("Welcome to good game best game.\n");

    while (true) {
        Enemy e;

        printf((e.info()+"\n").c_str());

        std::cin.get(); 
    }

    return 0;
}