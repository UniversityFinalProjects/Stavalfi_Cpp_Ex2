#include "Soldier.h"

Soldier::Soldier(const std::string &playerId,
                 const Point2d &location,
                 short lifePoints,
                 short walkingSpeed,
                 const std::list<Point2d> &soldierDirections,
                 std::shared_ptr<Weapon> weapon)
        : MapObject(playerId, location),
          playerId(playerId),
          lifePoints(lifePoints),
          walkingSpeed(walkingSpeed),
          armors(2, nullptr),
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

const short Soldier::getWalkingSpeed() const {
    return this->walkingSpeed;
}

Soldier::~Soldier() {
}

bool Soldier::changeArmor(std::shared_ptr<Armor> armor) {
    return false;
}

const std::shared_ptr<Weapon> &Soldier::getWeapon() const {
    return weapon;
}

const std::list<std::shared_ptr<Armor>> &Soldier::getArmors() const {
    return armors;
}

Soldier::SoldierDirections::SoldierDirections(const std::list<Point2d> &directions)
        : directions(directions), currentDirection(this->directions.cbegin()) {}

std::unique_ptr<Point2d> Soldier::SoldierDirections::getNextDirection() {
    if (this->currentDirection != this->directions.cend()) {
        const std::list<Point2d>::const_iterator currentDirection = this->currentDirection;
        this->currentDirection++;
        return std::unique_ptr<Point2d>(new Point2d(*currentDirection));
    }
    return std::unique_ptr<Point2d>(nullptr);
}

bool Soldier::SoldierDirections::areDirectionsEnabled() {
    return this->directions.size() == 0;
}
