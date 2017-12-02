#ifndef STAVALFI_CPP_EX2_REGULAR_HEALER_H
#define STAVALFI_CPP_EX2_REGULAR_HEALER_H


#include "../Soldier.h"
#include "Healer.h"

class RegularHealer : public Healer {
public:
    RegularHealer(const Point2d &location, const std::string &playerId);

    bool willAttackSucceed(int distance) override;
};


#endif //STAVALFI_CPP_EX2_REGULAR_HEALER_H
