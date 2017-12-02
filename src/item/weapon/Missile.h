#ifndef STAVALFI_CPP_EX2_MISSILE_H
#define STAVALFI_CPP_EX2_MISSILE_H


#include "HeavyWeapon.h"

class Missile : public HeavyWeapon {
public:
    explicit Missile(const Point2d &location);

};


#endif //STAVALFI_CPP_EX2_MISSILE_H
