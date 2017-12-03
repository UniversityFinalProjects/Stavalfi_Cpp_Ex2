#ifndef STAVALFI_CPP_EX2_HEALER_WEAPON_H
#define STAVALFI_CPP_EX2_HEALER_WEAPON_H


#include "Weapon.h"

class HealerWeapon: public Weapon {
public:
    HealerWeapon(const std::string& id,const Point2d &location,bool inUse);

};


#endif //STAVALFI_CPP_EX2_HEALER_WEAPON_H
