#include <cassert>
#include "Soldier.h"

Soldier::Soldier(const std::string& id,const Point2d &location, const std::string &playerId,
                 short lifePoints, short walkingSpeed) :
        MapObject(id,location), playerId(playerId), weapon(nullptr),
        lifePoints(lifePoints), walkingSpeed(walkingSpeed),
        armors(2, nullptr) {}


Soldier::Soldier(const std::string& id,const Point2d &location, const std::string &playerId, Weapon *weapon, short lifePoints,
                 short walkingSpeed)
        : MapObject(id,location), playerId(playerId), weapon(weapon),
          lifePoints(lifePoints), walkingSpeed(walkingSpeed),
          armors(2, nullptr) {
    assert(weapon != nullptr);
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

const std::vector<const Armor *> &Soldier::getArmors() const {
    return this->armors;
}

Soldier::~Soldier() {
    delete (this->weapon);
    for (auto &armor:this->armors)
        delete (armor);
}

void Soldier::setWeapon(Weapon *weapon) {
    Soldier::weapon = weapon;
}
