#include "Weapon.h"

Weapon::Weapon(const Point2d &location, short weaponStrength, short bulletAmountAtOnce)
        : CollectableItem(location), weaponStrength(weaponStrength), bulletAmountAtOnce(bulletAmountAtOnce) {}

short Weapon::getWeaponStrength() const {
    return weaponStrength;
}

short Weapon::getBulletAmountAtOnce() const {
    return bulletAmountAtOnce;
}

Weapon::~Weapon() = default;
