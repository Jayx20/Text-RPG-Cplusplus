#include <vector>
#include "enemy.h"

namespace Enemies {
    //TODO: make modifiers depend on the player level, or area or something. May need to add a new field to Modifier for this.
    /**
     * @brief Where all of the possible modifiers are stored. Can change.
     * 
     */
    std::vector<Modifier> modifierMap = {
        //name, description, healthFactor, attackFactor
        {"Tiny","tiny and vulnerable.", .5, .5},
        {"Old","old and weak.", .75, .5},
        {"Small","a little smaller than average.", .75, .75},
        {"Nimble","small, but can pack a punch.", .5, 1.2},
        {"Average","quite average.", 1, 1},
        {"Slow","quite slow, but has a bit more health.", 1.25, .75},
        {"Big","a bit bigger than average.", 1.2, 1.2},
        {"Wizard","has some powerful attacks, but average health.", 1, 1.5},
        {"Strange","has very low health, but watch out...", .3, 2},
        // huge, two-headed, monstrous, titanic
    };
}