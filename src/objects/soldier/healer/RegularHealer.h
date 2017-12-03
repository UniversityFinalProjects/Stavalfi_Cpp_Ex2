#ifndef STAVALFI_CPP_EX2_REGULAR_HEALER_H
#define STAVALFI_CPP_EX2_REGULAR_HEALER_H


#include "../Soldier.h"
#include "Healer.h"

class RegularHealer : public Healer {
public:
    RegularHealer(const std::string& id, const Point2d &location, const std::string &playerId, Weapon &weapon);

    bool willAttackSucceed(int distance) override;
};


#endif //STAVALFI_CPP_EX2_REGULAR_HEALER_H
