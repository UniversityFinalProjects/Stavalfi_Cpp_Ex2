#ifndef STAVALFI_CPP_EX2_MISSILE_H
#define STAVALFI_CPP_EX2_MISSILE_H


#include "HeavyWeapon.h"

class Missile : public HeavyWeapon {
public:
    explicit Missile(const std::string& id,const Point2d &location,bool inUse);

};


#endif //STAVALFI_CPP_EX2_MISSILE_H
