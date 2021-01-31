#include <vector>
#include "enemy.h"

namespace Enemies {
    /**
     * @brief Where all of the possible enemies are stored. Can change.
     * 
     */
    std::vector<Type> typeMap = {
        // name, description, maxHP, ATK
        {"Chungus", "A balanced enemy that looks like bugs bunny.", 120, 25},
        {"Troll Face", "A floating troll face that puts all its energy into attack.", 40, 45},
        {"Poop Golem","A bulky enemy made from poop.", 150, 18},
        {"Skeleton","A skeleton. It is made of bones", 100, 30},
        {"Monky","A monky, likmes to climb on things and eat bananas.", 80, 35},
        {"Fall Guy","A pink humanoid figure, loves to play party games.", 110, 25},
        {"Goat","A goat.", 82, 35},
        {"Doge","A funny dog, specifically a shiba inu.", 95, 32},
        {"Knight","A knight with strong armor.", 120, 20},
        {"Shrek","The most powerful enemy. It is advised that you run.", 150, 50},
    };
}