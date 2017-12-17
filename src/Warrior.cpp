#include "Warrior.h"
#include "ApplySoldierStrategies.h"

Warrior::Warrior(const std::string &soldierId,
                 const std::string &playerId,
                 const Point2d &location,
                 short lifePoints,
                 short walkingSpeed,
                 short runningSpeed,
                 short runningSpeedLifePointsCost,
                 const std::list<Point2d> &soldierDirections)
        : Soldier(soldierId, playerId, location, lifePoints, walkingSpeed, runningSpeed,
                  runningSpeedLifePointsCost, soldierDirections) {}

void Warrior::play(ApplySoldierStrategies &applySoldierStrategies) {
    applySoldierStrategies.playWithSoldier(*this);
}

void Warrior::setWeapon(const std::shared_ptr<Weapon> &weapon) {
    this->Soldier::weapon = weapon;
}

Warrior::~Warrior() {

}