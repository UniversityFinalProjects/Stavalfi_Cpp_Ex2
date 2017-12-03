#include "Warrior.h"

Warrior::Warrior(const std::string &id, const Point2d &location,
                 const std::string &playerId, short lifePoints,
                 short walkingSpeed)
        : Soldier(id, location, playerId, lifePoints, walkingSpeed) {}

void Warrior::setWeapon(Weapon *weapon) {
    this->weapon = weapon;
}
