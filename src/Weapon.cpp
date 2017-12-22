#include "Weapon.h"
#include "ApplySoldierStrategies.h"
#include "Reporter.h"

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

void Weapon::report(const Reporter &reporter) const {
    reporter.report(*this);
}

Weapon::~Weapon() = default;
