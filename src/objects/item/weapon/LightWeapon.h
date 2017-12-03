#ifndef STAVALFI_CPP_EX2_LIGHT_WEAPON_H
#define STAVALFI_CPP_EX2_LIGHT_WEAPON_H


#include "Weapon.h"

class LightWeapon : public Weapon {
public:
    LightWeapon(const std::string& id,const Point2d &location,bool inUse, short weaponStrength, short bulletAmountAtOnce);

    ~LightWeapon() override = 0;

};


#endif //STAVALFI_CPP_EX2_LIGHT_WEAPON_H
