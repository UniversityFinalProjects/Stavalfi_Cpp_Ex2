#ifndef STAVALFI_CPP_EX2_REGULAR_WARRIOR_H
#define STAVALFI_CPP_EX2_REGULAR_WARRIOR_H


#include "Warrior.h"

class RegularWarrior : public Warrior {
public:
    RegularWarrior(const std::string &soldierId,
                   const std::string& playerId,
                   const Point2d &location,
                   std::vector<Point2d> &soldierDirections);

    bool willAttackSucceed(int distance) override;
};


#endif //STAVALFI_CPP_EX2_REGULAR_WARRIOR_H
