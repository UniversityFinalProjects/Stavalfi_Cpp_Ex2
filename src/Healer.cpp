#include "Healer.h"
#include "ApplySoldierStrategies.h"
#include <cassert>

void Healer::play(ApplySoldierStrategies &applySoldierStrategies) {
    applySoldierStrategies.playWithSoldier(*this);
}

Healer::~Healer() {

}

Healer::Healer(const std::string &playerId, const Point2d &location, short lifePoints, short walkingSpeed,
               const std::list<Point2d> &soldierDirections, const std::shared_ptr<Weapon> &weapon) : Soldier(
        playerId, location, lifePoints, walkingSpeed, soldierDirections, weapon) {
    assert(weapon != nullptr);
}
