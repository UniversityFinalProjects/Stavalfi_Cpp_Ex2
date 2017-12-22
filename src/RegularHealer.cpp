#include "RegularHealer.h"
#include <cassert>

#define REGULAR_HEALER_WALKING_SPEED 4
#define REGULAR_HEALER_LIFE_AMOUNT 120

RegularHealer::RegularHealer(const std::string &soldierId,
                             const std::string &playerId,
                             const Point2d &location,
                             std::vector<Point2d> &soldierDirections,
                             std::shared_ptr<Weapon> weapon)
        : Healer(soldierId,
                 playerId,
                 location,
                 REGULAR_HEALER_LIFE_AMOUNT,
                 REGULAR_HEALER_WALKING_SPEED,
                 soldierDirections,
                 weapon) {
    assert(weapon != nullptr);
}

/**
 * By the definition of this game,
 * a healer alwase succeed to attack.
 * @param distance
 * @return
 */
bool RegularHealer::willAttackSucceed(int distance) {
    assert(weapon != nullptr);
    return true;
}

