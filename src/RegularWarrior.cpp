#include "RegularWarrior.h"

#include <cstdlib>

#define REGULAR_WARRIOR_WALKING_DISTANCE 1
#define REGULAR_WARRIOR_LIFE_POINTS 1
#define REGULAR_WARRIOR_RUNNING_DISTANCE 1
#define REGULAR_WARRIOR_RUNNING_DISTANCE_LIFE_POINTS_COST 10

RegularWarrior::RegularWarrior(const std::string &soldierId,
                               const std::string &playerId,
                               const Point2d &location,
                               const std::list<Point2d> &soldierDirections)
        : Warrior(soldierId,
                  playerId,
                  location,
                  REGULAR_WARRIOR_WALKING_DISTANCE,
                  REGULAR_WARRIOR_LIFE_POINTS,
                  REGULAR_WARRIOR_RUNNING_DISTANCE,
                  REGULAR_WARRIOR_RUNNING_DISTANCE_LIFE_POINTS_COST,
                  soldierDirections) {}

bool RegularWarrior::willAttackSucceed(int distance) {
    short number = (rand() % distance + 1);
    return number == 1;
}