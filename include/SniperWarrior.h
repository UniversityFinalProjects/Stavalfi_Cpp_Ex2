#ifndef STAVALFI_CPP_EX2_SNIPER_WARRIOR_H
#define STAVALFI_CPP_EX2_SNIPER_WARRIOR_H


#include "Warrior.h"

class SniperWarrior: public Warrior {
public:
    SniperWarrior(const std::string &soldierId,
                  const std::string& playerId,
                  const Point2d &location,
                  const std::list<Point2d> &soldierDirections);

    bool willAttackSucceed(int distance) override;
};


#endif //STAVALFI_CPP_EX2_SNIPER_WARRIOR_H
