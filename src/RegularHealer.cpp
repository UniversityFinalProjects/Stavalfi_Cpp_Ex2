#include "RegularHealer.h"
#include <cassert>

#define REGULAR_HEALER_WALKING_SPEED 4
#define REGULAR_HEALER_LIFE_AMOUNT 120

RegularHealer::RegularHealer(const std::string &playerId,
                             const Point2d &location,
                             const std::list<Point2d> &soldierDirections,
                             std::shared_ptr<Weapon> weapon)
        : Healer(playerId,
                 location,
                 REGULAR_HEALER_LIFE_AMOUNT,
                 REGULAR_HEALER_WALKING_SPEED,
                 soldierDirections,
                 weapon) {
    assert(weapon != nullptr);
}

bool RegularHealer::willAttackSucceed(int distance) {
    return true;
}

