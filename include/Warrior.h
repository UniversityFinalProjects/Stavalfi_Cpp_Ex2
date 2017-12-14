#ifndef STAVALFI_CPP_EX2_WARRIOR_H
#define STAVALFI_CPP_EX2_WARRIOR_H


#include <string.h>
#include "Soldier.h"

class Warrior : public Soldier {
public:

    Warrior(const std::string &id, const Point2d &location,
            const std::string &playerId, short lifePoints,
            short walkingSpeed);

    void setWeapon(Weapon *weapon);

    void play(SoldierActions &soldierActions) override;
};


#endif //STAVALFI_CPP_EX2_WARRIOR_H
