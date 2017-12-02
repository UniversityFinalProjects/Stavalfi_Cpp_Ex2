#include "HeavyWeapon.h"

HeavyWeapon::HeavyWeapon(const Point2d &location, short weaponStrength, short bulletAmountAtOnce) : Weapon(
        location, weaponStrength, bulletAmountAtOnce) {}

HeavyWeapon::~HeavyWeapon() = default;
