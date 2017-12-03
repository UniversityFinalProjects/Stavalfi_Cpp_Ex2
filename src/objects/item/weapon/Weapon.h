#ifndef STAVALFI_CPP_EX2_WEAPON_H
#define STAVALFI_CPP_EX2_WEAPON_H

#include <string>
#include "../CollectableItem.h"
#include "../../Point2d.h"

class Weapon : public CollectableItem {
    const short weaponStrength;
    const short bulletAmountAtOnce;

public:
    Weapon(const std::string& id,const Point2d &location,bool inUse, short weaponStrength, short bulletAmountAtOnce);

    short getWeaponStrength() const;

    short getBulletAmountAtOnce() const;

    ~Weapon() override = 0;
};


#endif //STAVALFI_CPP_EX2_WEAPON_H
