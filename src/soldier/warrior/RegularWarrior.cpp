#include "RegularWarrior.h"

#include <cstdlib>

#define REGULAR_WARRIOR_WALKING_SPEED 1
#define REGULAR_WARRIOR_LIFE_POINTS 1

RegularWarrior::RegularWarrior(const Point2d &location, const std::string &playerId)
        : Warrior(location, playerId, REGULAR_WARRIOR_WALKING_SPEED, REGULAR_WARRIOR_LIFE_POINTS) {}

bool RegularWarrior::willAttackSucceed(int distance) {
    short number = (rand() % distance + 1);
    return number == 1;
}