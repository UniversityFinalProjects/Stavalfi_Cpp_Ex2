#include "Soldier.h"
#include <cassert>
#include "Reporter.h"

Soldier::Soldier(const std::string &soldierId,
                 const std::string &playerId,
                 const Point2d &location,
                 short lifePoints,
                 short walkingSpeed,
                 short runningSpeed,
                 short runningSpeedLifePointsCost,
                 const std::list<Point2d> &soldierDirections,
                 std::shared_ptr<Weapon> weapon)
        : MapObject(soldierId, location),
          playerId(playerId),
          lifePoints(lifePoints),
          walkingDistance(walkingSpeed),
          runningDistance(runningSpeed),
          runningDistanceLifePointsCost(runningSpeedLifePointsCost),
          weapon(weapon),
          soldierDirections(soldierDirections) {

}

bool Soldier::isEnemy(const Soldier &soldier) const {
    return this->playerId != soldier.playerId;
}

const std::string &Soldier::getPlayerId() const {
    return this->playerId;
}

short Soldier::getLifePoints() const {
    return this->lifePoints;
}

void Soldier::setLifePoints(short lifePoints) {
    this->lifePoints = lifePoints;
}

const short Soldier::getWalkingDistance() const {
    return this->walkingDistance;
}

Soldier::~Soldier() = default;

void Soldier::changeArmor(std::shared_ptr<Armor> armor) {
    assert(armor != nullptr && this->armors.size() > 0);

    for (auto armor_p:this->armors)
        if (armor_p == nullptr) {
            armor_p = armor;
            return;
        }
    std::shared_ptr<Armor> *worst_armor = &this->armors[0];
    for (int i = 0; i < this->armors.size(); i++)
        if (this->armors[i]->getArmorStrength() < (*worst_armor)->getArmorStrength())
            worst_armor = &this->armors[i];
    *worst_armor = armor;
}

const std::shared_ptr<Weapon> &Soldier::getWeapon() const {
    return weapon;
}

const std::list<std::shared_ptr<Armor>> Soldier::getArmors() const {
    std::list<std::shared_ptr<Armor>> armors;
    for (auto &armor:this->armors)
        if (armor != nullptr)
            armors.push_back(armor);
    return armors;
}

std::unique_ptr<Point2d> Soldier::getNextPreDefinedDirection() const {
    assert(this->soldierDirections.arePreDefinedDirectionsEnabled());
    return this->soldierDirections.getNextPreDefinedDirection();
}

bool Soldier::arePreDefinedDirectionsEnabled() const {
    return this->soldierDirections.arePreDefinedDirectionsEnabled();
}

const short Soldier::getRunningDistance() const {
    return runningDistance;
}

const short Soldier::getRunningDistanceLifePointsCost() const {
    return runningDistanceLifePointsCost;
}

std::unique_ptr<Point2d> Soldier::getPreDefinedCurrentDirection() const {
    return this->soldierDirections.getCurrentPreDefinedDirection();
}

const std::list<Point2d> Soldier::getPreDefinedDirections() const {
    return this->soldierDirections.getPreDefinedDirections();
}

void Soldier::report(const Reporter &reporter) const {
    reporter.report(*this);
}

Soldier::SoldierPreDefinedDirections::SoldierPreDefinedDirections(const std::list<Point2d> &directions)
        : directions(directions), currentDirection(new std::list<Point2d>::const_iterator(this->directions.cbegin())) {}

std::unique_ptr<Point2d> Soldier::SoldierPreDefinedDirections::getNextPreDefinedDirection() const {
    assert(arePreDefinedDirectionsEnabled());
    if (*this->currentDirection != this->directions.cend()) {
        const std::list<Point2d>::const_iterator currentDirection = *this->currentDirection;
        (*this->currentDirection)++;
        return std::unique_ptr<Point2d>(new Point2d(*currentDirection));
    }
    return std::unique_ptr<Point2d>(nullptr);
}

bool Soldier::SoldierPreDefinedDirections::arePreDefinedDirectionsEnabled() const {
    return this->directions.size() != 0;
}

std::unique_ptr<Point2d> Soldier::SoldierPreDefinedDirections::getCurrentPreDefinedDirection() const {
    if (*this->currentDirection != this->directions.cend()) {
        const Point2d &currentDirection = *(*this->currentDirection);
        return std::unique_ptr<Point2d>(new Point2d(currentDirection));
    }
    return std::unique_ptr<Point2d>(nullptr);
}

const std::list<Point2d> Soldier::SoldierPreDefinedDirections::getPreDefinedDirections() const {
    std::list<Point2d> copy;
    for (auto &direction:this->directions)
        copy.push_back(direction);
    return copy;
}
