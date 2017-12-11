#ifndef STAVALFI_CPP_EX2_SOLDIER_H
#define STAVALFI_CPP_EX2_SOLDIER_H

#include <string>
#include <vector>
#include "Weapon.h"
#include "Armor.h"

class Soldier : public MapObject {
    const std::string &playerId;
    short lifePoints;
    const short walkingSpeed;
    std::vector<const Armor *> armors;

protected:
    Weapon *weapon;

public:
    Soldier(const std::string& id,const Point2d &location,
            const std::string &playerId, short lifePoints,
            short walkingSpeed);

    Soldier(const std::string& id,const Point2d &location,
            const std::string &playerId, Weapon *weapon,
            short lifePoints, short walkingSpeed);

    bool isEnemy(const Soldier &soldier) const;

    virtual bool willAttackSucceed(int distance) = 0;

    Weapon *getWeapon() const;

    const std::string &getPlayerId() const;

    short getLifePoints() const;

    void setLifePoints(short lifePoints);

    const short getWalkingSpeed() const;

    const std::vector<const Armor *> &getArmors() const;

    virtual ~Soldier();
};


#endif //STAVALFI_CPP_EX2_SOLDIER_H
