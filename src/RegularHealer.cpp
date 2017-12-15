#include "RegularHealer.h"
#include <cassert>

#define REGULAR_HEALER_WALKING_SPEED 4
#define REGULAR_HEALER_LIFE_AMOUNT 120

RegularHealer::RegularHealer(const std::string &id, const Point2d &location,
                             const std::string &playerId, std::shared_ptr<Weapon> weapon)
        : Healer(id, location, playerId,
                 REGULAR_HEALER_LIFE_AMOUNT, REGULAR_HEALER_WALKING_SPEED,
                 weapon) {
    assert(weapon != nullptr);
}

bool RegularHealer::willAttackSucceed(int distance) {
    return true;
}

