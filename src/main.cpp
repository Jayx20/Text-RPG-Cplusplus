#include <iostream>
#include <string>

#include "variables.h"
#include "enemy.h"

int main() {
    typedef Enemies::Enemy Enemy;

    Enemy e;

    printf(e.info().c_str());

    std::cin.get();

    return 0;
}