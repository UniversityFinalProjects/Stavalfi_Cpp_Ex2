#include "Weapon.h"
#include "SoldierActions.h"

Weapon::Weapon(const std::string &id, const Point2d &location, bool inUse, short weaponStrength,
               short bulletAmountAtOnce)
        : CollectableItem(id, location, inUse), weaponStrength(weaponStrength),
          bulletAmountAtOnce(bulletAmountAtOnce) {}

short Weapon::getWeaponStrength() const {
    return weaponStrength;
}

short Weapon::getBulletAmountAtOnce() const {
    return bulletAmountAtOnce;
}

Weapon::~Weapon() = default;
