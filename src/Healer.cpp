#include "Healer.h"
#include "ApplySoldierStrategies.h"
#include <cassert>

void Healer::play(ApplySoldierStrategies &applySoldierStrategies) {
    applySoldierStrategies.playWithSoldier(*this);
}

Healer::Healer(const std::string &id, const Point2d &location, const std::string &playerId,
               short lifePoints, short walkingSpeed, std::shared_ptr<Weapon> weapon)
        : Soldier(id, location, playerId, lifePoints, walkingSpeed, weapon) {
    assert(weapon != nullptr);
}

Healer::~Healer() {

}