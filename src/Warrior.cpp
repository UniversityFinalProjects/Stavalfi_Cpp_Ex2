#include "Warrior.h"
#include "ApplySoldierStrategies.h"

Warrior::Warrior(const std::string &playerId, const Point2d &location, short lifePoints,
                 short walkingSpeed,
                 const std::list<Point2d> &soldierDirections)
        : Soldier(playerId, location, lifePoints, walkingSpeed, soldierDirections) {}

void Warrior::play(ApplySoldierStrategies &applySoldierStrategies) {
    applySoldierStrategies.playWithSoldier(*this);
}

void Warrior::setWeapon(const std::shared_ptr<Weapon> &weapon) {
    this->Soldier::weapon = weapon;
}

Warrior::~Warrior() {

}
