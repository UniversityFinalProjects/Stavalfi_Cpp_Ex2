#ifndef STAVALFI_CPP_EX2_HEAVY_WEAPON_H
#define STAVALFI_CPP_EX2_HEAVY_WEAPON_H


#include "Weapon.h"

class HeavyWeapon : public Weapon {
public:
    HeavyWeapon(const std::string& id,const Point2d &location,bool inUse, short weaponStrength, short bulletAmountAtOnce);

    ~HeavyWeapon() override = 0;

};


#endif //STAVALFI_CPP_EX2_HEAVY_WEAPON_H
