#ifndef STAVALFI_CPP_EX2_WEAPON_H
#define STAVALFI_CPP_EX2_WEAPON_H

#include "../CollectableItem.h"

class Weapon : public CollectableItem {
    const short weaponStrength;
    const short bulletAmountAtOnce;
public:
    short getWeaponStrength() const;

    short getBulletAmountAtOnce() const;

public:
    Weapon(const Point2d &location, short weaponStrength, short bulletAmountAtOnce);

    ~Weapon() override = 0;
};


#endif //STAVALFI_CPP_EX2_WEAPON_H
