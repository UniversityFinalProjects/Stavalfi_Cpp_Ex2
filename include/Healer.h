#ifndef STAVALFI_CPP_EX2_HEALER_H
#define STAVALFI_CPP_EX2_HEALER_H

#include "Soldier.h"
#include "HealerWeapon.h"

class Healer : public Soldier {
public:
    Healer(const std::string &id, const Point2d &location, const std::string &playerId,
           short lifePoints, short walkingSpeed,std::shared_ptr<Weapon> weapon);

    void play(ApplySoldierStrategies &applySoldierStrategies) override;

    virtual ~Healer() = 0;
};

#endif //STAVALFI_CPP_EX2_HEALER_H
