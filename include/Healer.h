#ifndef STAVALFI_CPP_EX2_HEALER_H
#define STAVALFI_CPP_EX2_HEALER_H

#include "Soldier.h"
#include "HealerWeapon.h"

class Healer : public Soldier {
public:
    Healer(const std::string &id, const Point2d &location, const std::string &playerId,
           short lifePoints, short walkingSpeed, Weapon &weapon);

    void play(SoldierActions &soldierActions) override;
};

#endif //STAVALFI_CPP_EX2_HEALER_H
