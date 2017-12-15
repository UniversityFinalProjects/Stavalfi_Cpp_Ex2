#include "Warrior.h"
#include "ApplySoldierStrategies.h"

Warrior::Warrior(const std::string &id, const Point2d &location,
                 const std::string &playerId, short lifePoints,
                 short walkingSpeed)
        : Soldier(id, location, playerId, lifePoints, walkingSpeed) {}

void Warrior::play(ApplySoldierStrategies &applySoldierStrategies) {
    applySoldierStrategies.playWithSoldier(*this);
}

void Warrior::setWeapon(const std::shared_ptr<Weapon> &weapon) {
    this->Soldier::weapon = weapon;
}

Warrior::~Warrior() {

}
