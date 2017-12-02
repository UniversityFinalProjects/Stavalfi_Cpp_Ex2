#include "LightWeapon.h"

LightWeapon::LightWeapon(const Point2d &location, short weaponStrength, short bulletAmountAtOnce) : Weapon(
        location, weaponStrength, bulletAmountAtOnce) {}

LightWeapon::~LightWeapon() = default;