#include "SniperWarrior.h"

#include <cstdlib>

#define SNIPER_WALKING_SPEED 1
#define SNIPER_LIFE_POINTS 1
#define SNIPER_RUNNING_SPEED 1
#define SNIPER_RUNNING_SPEED_LIFE_POINTS_COST 0

SniperWarrior::SniperWarrior(const std::string &soldierId,
                             const std::string &playerId,
                             const Point2d &location,
                             const std::list<Point2d> &soldierDirections)
        : Warrior(soldierId, playerId, location, SNIPER_LIFE_POINTS, SNIPER_WALKING_SPEED, SNIPER_RUNNING_SPEED,
                  SNIPER_RUNNING_SPEED_LIFE_POINTS_COST, soldierDirections) {}

bool SniperWarrior::willAttackSucceed(int distance) {
    short number = (rand() % distance + 1);
    return number != 1;
}