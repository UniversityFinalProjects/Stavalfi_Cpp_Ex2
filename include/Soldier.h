#ifndef STAVALFI_CPP_EX2_SOLDIER_H
#define STAVALFI_CPP_EX2_SOLDIER_H

#include <string.h>
#include <list>
#include "Weapon.h"
#include "Armor.h"
#include <memory>

#define AMOUNT_OF_ALLOWED_ARMORS 2

class ApplySoldierStrategies;

class Soldier : public MapObject {
    const std::string &playerId;
    short lifePoints;
    const short walkingSpeed;

    /**
     * Specify a pre-configured directions for this soldier.
     * It will be used only in the MoveStrategy's drived classes.
     */
    class SoldierDirections {
        const std::list<Point2d> directions;
        std::list<Point2d>::const_iterator currentDirection;
    public:
        SoldierDirections(const std::list<Point2d> &directions);

        std::unique_ptr<Point2d> getNextDirection();

        bool areDirectionsEnabled();
    };

    SoldierDirections soldierDirections;

    // we must keep shared_ptr to armors because if
    // at the end of the game, all the armors will
    // be deleted before this class then when we call
    // this object's constructor, we will create segmentation
    // fault when referring to those armors.
    std::array<std::shared_ptr<Armor>, AMOUNT_OF_ALLOWED_ARMORS> armors;
protected:
    std::shared_ptr<Weapon> weapon;

public:

    /**
     * only the attack method will call this.
     * rand a random number between 1 and distance
     * and check if the random number is between 1
     * and the change of succeeding attacking.
     * @param distance
     * @return if the soldier successfuly attacked or missed.
     */
    virtual bool willAttackSucceed(int distance) = 0;

    void setLifePoints(short lifePoints);

    Soldier(const std::string &soldierId,
            const std::string &playerId,
            const Point2d &location,
            short lifePoints,
            short walkingSpeed,
            const std::list<Point2d> &soldierDirections,
            std::shared_ptr<Weapon> weapon = nullptr);

    virtual void play(ApplySoldierStrategies &applySoldierStrategies) = 0;

    bool isEnemy(const Soldier &soldier) const;

    const std::shared_ptr<Weapon> &getWeapon() const;

    const std::string &getPlayerId() const;

    short getLifePoints() const;

    const short getWalkingSpeed() const;

    /**
     * throw away an old armor and get this one.
     * or add this armor also.
     * @param armor
     */
    void changeArmor(std::shared_ptr<Armor> armor);

    const std::array<std::shared_ptr<Armor>, AMOUNT_OF_ALLOWED_ARMORS> &getArmors() const;

    virtual ~Soldier();
};


#endif //STAVALFI_CPP_EX2_SOLDIER_H
