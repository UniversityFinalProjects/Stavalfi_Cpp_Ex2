#ifndef STAVALFI_CPP_EX2_WARRIOR_H
#define STAVALFI_CPP_EX2_WARRIOR_H


#include <string.h>
#include "Soldier.h"

class Warrior : public Soldier {
public:

    Warrior(const std::string &id, const Point2d &location,
            const std::string &playerId, short lifePoints,
            short walkingSpeed);

    void setWeapon(const std::shared_ptr<Weapon> &weapon);

    void play(ApplySoldierStrategies &applySoldierStrategies) override;

    virtual ~Warrior() = 0;
};


#endif //STAVALFI_CPP_EX2_WARRIOR_H
