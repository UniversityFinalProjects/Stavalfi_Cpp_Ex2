#include "Soldier.h"
#include <cassert>

Soldier::Soldier(const std::string &id, const Point2d &location,
                 const std::string &playerId,
                 short lifePoints, short walkingSpeed,
                 std::shared_ptr<Weapon> weapon) :
        MapObject(id, location), playerId(playerId),
        lifePoints(lifePoints), walkingSpeed(walkingSpeed),
        armors(2, nullptr), weapon(weapon) {}

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

bool Soldier::changeArmor(std::shared_ptr<const Armor> armor) {
    return false;
}

const std::shared_ptr<Weapon> &Soldier::getWeapon() const {
    return weapon;
}

const std::list<std::shared_ptr<const Armor>> &Soldier::getArmors() const {
    return armors;
}
