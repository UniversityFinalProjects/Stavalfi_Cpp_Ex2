#ifndef STAVALFI_CPP_EX2_WARRIOR_H
#define STAVALFI_CPP_EX2_WARRIOR_H


#include "../../item/weapon/Weapon.h"
#include "../Soldier.h"

class Warrior : public Soldier {
public:

    Warrior(const Point2d &location, const std::string &playerId, short lifePoints, short walkingSpeed);

    void setWeapon(Weapon *weapon);
};


#endif //STAVALFI_CPP_EX2_WARRIOR_H
