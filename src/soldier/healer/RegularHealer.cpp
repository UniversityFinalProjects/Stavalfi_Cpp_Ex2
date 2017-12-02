#include "RegularHealer.h"

#define REGULAR_HEALER_WALKING_SPEED 4
#define REGULAR_HEALER_LIFE_AMOUNT 120
#define REGULAR_HEALER_ATTACK_POINTS 10

RegularHealer::RegularHealer(const Point2d &location, const std::string &playerId)
        : Healer(location, playerId, REGULAR_HEALER_LIFE_AMOUNT, REGULAR_HEALER_WALKING_SPEED) {}

bool RegularHealer::willAttackSucceed(int distance) {
    return true;
}

