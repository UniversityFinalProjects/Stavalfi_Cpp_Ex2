#include "SniperWarrior.h"

#include <cstdlib>

#define SNIPER_WALKING_SPEED 1
#define SNIPER_LIFE_POINTS 1

SniperWarrior::SniperWarrior(const std::string& id, const Point2d &location, const std::string &playerId)
        : Warrior(id, location, playerId, SNIPER_LIFE_POINTS, SNIPER_WALKING_SPEED) {}

bool SniperWarrior::willAttackSucceed(int distance) {
    short number = (rand() % distance + 1);
    return number != 1;
}