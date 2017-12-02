#ifndef STAVALFI_CPP_EX2_SNIPER_WARRIOR_H
#define STAVALFI_CPP_EX2_SNIPER_WARRIOR_H


#include "Warrior.h"

class SniperWarrior: public Warrior {
public:
    SniperWarrior(const Point2d &location, const std::string &playerId);

    bool willAttackSucceed(int distance) override;
};


#endif //STAVALFI_CPP_EX2_SNIPER_WARRIOR_H
