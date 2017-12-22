#ifndef STAVALFI_CPP_EX2_SOLDIER_H
#define STAVALFI_CPP_EX2_SOLDIER_H

#include <string.h>
#include <list>
#include <memory>
#include "Weapon.h"
#include "Armor.h"
#include "SoldierDirections.h"

class Reporter;

#define AMOUNT_OF_ALLOWED_ARMORS 2

class ApplySoldierStrategies;

class Soldier : public MapObject {
public:
    Soldier(const std::string &soldierId,
            const std::string &playerId,
            const Point2d &location,
            short lifePoints,
            short walkingSpeed,
            short runningSpeed,
            short runningSpeedLifePointsCost,
            std::vector<Point2d> &soldierDirections,
            std::shared_ptr<Weapon> weapon = nullptr);

    void report(const Reporter &reporter) const override;

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

    virtual void play(const ApplySoldierStrategies &applySoldierStrategies) = 0;

    bool isEnemy(const Soldier &soldier) const;

    const std::shared_ptr<Weapon> &getWeapon() const;

    const std::string &getPlayerId() const;

    short getLifePoints() const;

    const short getWalkingDistance() const;

    const short getRunningDistance() const;

    const short getRunningDistanceLifePointsCost() const;

    /**
     * throw away an old armor and get this one.
     * or add this armor also.
     * @param armor
     */
    void changeArmor(std::shared_ptr<Armor> armor);

    const std::list<std::shared_ptr<Armor>> getArmors() const;


    void setLocation(double y, double x) override;

    const SoldierDirections &getSoldierDirections() const;

    virtual ~Soldier();

private:
    const std::string &playerId;
    short lifePoints;
    const short walkingDistance;
    const short runningDistance;
    const short runningDistanceLifePointsCost;

    SoldierDirections soldierDirections;

    std::array<std::shared_ptr<Armor>, AMOUNT_OF_ALLOWED_ARMORS> armors;
protected:
    std::shared_ptr<Weapon> weapon;
};


#endif //STAVALFI_CPP_EX2_SOLDIER_H
