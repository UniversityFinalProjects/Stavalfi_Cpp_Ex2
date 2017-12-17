#include "Healer.h"
#include "ApplySoldierStrategies.h"
#include <cassert>

#define RUNNING_SPEED_LIFE_POINTS_COST 0

void Healer::play(ApplySoldierStrategies &applySoldierStrategies) {
    applySoldierStrategies.playWithSoldier(*this);
}

Healer::~Healer() {

}

Healer::Healer(const std::string &soldierId,
               const std::string &playerId,
               const Point2d &location,
               short lifePoints,
               short walkingSpeed,
               const std::list<Point2d> &soldierDirections,
               const std::shared_ptr<Weapon> &weapon)
        : Soldier(soldierId, playerId, location, lifePoints, walkingSpeed, walkingSpeed, RUNNING_SPEED_LIFE_POINTS_COST,
                  soldierDirections, weapon) {
    assert(weapon != nullptr);
}
