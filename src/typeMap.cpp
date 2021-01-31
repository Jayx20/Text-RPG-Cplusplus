#include <vector>
#include "enemy.h"

namespace Enemies {
    std::vector<Type> typeMap = {
        // name, description, maxHP, ATK
        {"Chungus", "A balanced enemy that looks like bugs bunny.", 120, 25},
        {"Troll Face", "A floating troll face that puts all its energy into attack.", 40, 45}
    };
}