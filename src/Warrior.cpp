#include "Warrior.h"
#include "ApplySoldierStrategies.h"

Warrior::Warrior(const std::string &soldierId,
                 const std::string &playerId,
                 const Point2d &location,
                 short lifePoints,
                 short walkingSpeed,
                 short runningSpeed,
                 short runningSpeedLifePointsCost,
                 std::vector<Point2d> &soldierDirections)
        : Soldier(soldierId, playerId, location, lifePoints, walkingSpeed, runningSpeed,
                  runningSpeedLifePointsCost, soldierDirections) {}

void Warrior::play(const ApplySoldierStrategies &applySoldierStrategies) {
    applySoldierStrategies.applySoldierStrategies(*this);
}

void Warrior::setWeapon(const std::shared_ptr<Weapon> &weapon) {
    this->Soldier::weapon = weapon;
    this->getWeapon()->setLocation(this->getLocation());
}

Warrior::~Warrior() {

}