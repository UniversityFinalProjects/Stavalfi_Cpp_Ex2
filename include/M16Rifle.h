#ifndef STAVALFI_CPP_EX2_M16_RIFLE_H
#define STAVALFI_CPP_EX2_M16_RIFLE_H


#include "LightWeapon.h"

class M16Rifle : public LightWeapon {
public:
    explicit M16Rifle(const std::string& id,const Point2d &location,bool inUse);

};


#endif //STAVALFI_CPP_EX2_M16_RIFLE_H
