#ifndef STAVALFI_CPP_EX2_WARRIOR_H
#define STAVALFI_CPP_EX2_WARRIOR_H


#include <string.h>
#include "Soldier.h"

class Warrior : public Soldier {
public:

    Warrior(const std::string &playerId,
            const Point2d &location,
            short lifePoints,
            short walkingSpeed,
            const std::list<Point2d> &soldierDirections);

    void setWeapon(const std::shared_ptr<Weapon> &weapon);

    void play(ApplySoldierStrategies &applySoldierStrategies) override;

    virtual ~Warrior() = 0;
};


#endif //STAVALFI_CPP_EX2_WARRIOR_H
