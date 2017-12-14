#ifndef STAVALFI_CPP_EX2_SOLDIER_H
#define STAVALFI_CPP_EX2_SOLDIER_H

#include <string.h>
#include <vector>
#include "Weapon.h"
#include "Armor.h"

class SoldierActions;

class Soldier : public MapObject {
    const std::string &playerId;
    short lifePoints;
    const short walkingSpeed;
    std::vector<const Armor *> armors;

protected:
    Weapon *weapon;

    /**
     * only the attack method will call this.
     * @param distance
     * @return if the soldier successfuly attacked or missed.
     */
    virtual bool willAttackSucceed(int distance) = 0;

    void setLifePoints(short lifePoints);

    void setWeapon(Weapon *weapon);

public:
    Soldier(const std::string &id, const Point2d &location,
            const std::string &playerId, short lifePoints,
            short walkingSpeed);

    Soldier(const std::string &id, const Point2d &location,
            const std::string &playerId, Weapon *weapon,
            short lifePoints, short walkingSpeed);

    virtual void play(SoldierActions &soldierActions) = 0;

    bool isEnemy(const Soldier &soldier) const;

    Weapon *getWeapon() const;

    const std::string &getPlayerId() const;

    short getLifePoints() const;

    const short getWalkingSpeed() const;

    const std::vector<const Armor *> &getArmors() const;

    virtual ~Soldier();
};


#endif //STAVALFI_CPP_EX2_SOLDIER_H
