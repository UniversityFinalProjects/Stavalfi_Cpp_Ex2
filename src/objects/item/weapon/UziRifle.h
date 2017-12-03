#ifndef STAVALFI_CPP_EX2_UZI_RIFLE_H
#define STAVALFI_CPP_EX2_UZI_RIFLE_H


#include "LightWeapon.h"

class UziRifle : public LightWeapon {
public:
    explicit UziRifle(const std::string& id,const Point2d &location,bool inUse);
};


#endif //STAVALFI_CPP_EX2_UZI_RIFLE_H
