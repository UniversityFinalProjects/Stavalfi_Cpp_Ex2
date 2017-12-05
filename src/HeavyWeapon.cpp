#include "HeavyWeapon.h"

HeavyWeapon::HeavyWeapon(const std::string &id, const Point2d &location, bool inUse, short weaponStrength,
                         short bulletAmountAtOnce)
        : Weapon(id, location, inUse, weaponStrength, bulletAmountAtOnce) {}

HeavyWeapon::~HeavyWeapon() = default;
