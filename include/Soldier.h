#ifndef STAVALFI_CPP_EX2_SOLDIER_H
#define STAVALFI_CPP_EX2_SOLDIER_H

#include <string.h>
#include <list>
#include "Weapon.h"
#include "Armor.h"
#include <memory>

class ApplySoldierStrategies;

class Soldier : public MapObject {
    const std::string &playerId;
    short lifePoints;
    const short walkingSpeed;
    // we must keep shared_ptr to armors because if
    // at the end of the game, all the armors will
    // be deleted befor this class then when we call
    // this object's constructor, we will get segmentation
    // fault when referring to those armors.
    std::list<std::shared_ptr<const Armor>> armors;
protected:
    std::shared_ptr<Weapon> weapon;

public:
    /**
     * only the attack method will call this.
     * @param distance
     * @return if the soldier successfuly attacked or missed.
     */
    virtual bool willAttackSucceed(int distance) = 0;

    void setLifePoints(short lifePoints);

    Soldier(const std::string &id, const Point2d &location,
            const std::string &playerId, short lifePoints,
            short walkingSpeed, std::shared_ptr<Weapon> weapon = nullptr);

    virtual void play(ApplySoldierStrategies &applySoldierStrategies) = 0;

    bool isEnemy(const Soldier &soldier) const;

    const std::shared_ptr<Weapon> &getWeapon() const;

    const std::string &getPlayerId() const;

    short getLifePoints() const;

    const short getWalkingSpeed() const;

    /**
     * check if it is better to throw away an old armor and
     * get this one. or add this armor also.
     * @param armor
     * @return true if the soldier added this armor, else return false.
     */
    bool changeArmor(std::shared_ptr<const Armor> armor);

    const std::list<std::shared_ptr<const Armor>> &getArmors() const;

    virtual ~Soldier();
};


#endif //STAVALFI_CPP_EX2_SOLDIER_H
