#ifndef STAVALFI_CPP_EX2_HEALER_H
#define STAVALFI_CPP_EX2_HEALER_H

#include "../Soldier.h"

class Healer: public Soldier {
public:
    Healer(const Point2d &location, const std::string &playerId,
           short lifePoints, short walkingSpeed);

};

#endif //STAVALFI_CPP_EX2_HEALER_H
