#ifndef STAVALFI_CPP_EX2_HEALER_H
#define STAVALFI_CPP_EX2_HEALER_H

#include "Soldier.h"
#include "HealerWeapon.h"

class Healer : public Soldier {
public:


    Healer(const std::string &soldierId,
           const std::string &playerId,
           const Point2d &location,
           short lifePoints,
           short walkingSpeed,
           std::vector<Point2d> &soldierDirections,
           const std::shared_ptr<Weapon> &weapon);

    void play(const ApplySoldierStrategies &applySoldierStrategies) override;

    virtual ~Healer() = 0;
};

#endif //STAVALFI_CPP_EX2_HEALER_H
