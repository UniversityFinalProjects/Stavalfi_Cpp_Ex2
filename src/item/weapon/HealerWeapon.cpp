#include "HealerWeapon.h"

#define HEALER_STRENGTH 10
#define HEALER_BULLET_AMOUNT_AT_ONCE 1

HealerWeapon::HealerWeapon(const Point2d &location)
        : Weapon(location, HEALER_STRENGTH, HEALER_BULLET_AMOUNT_AT_ONCE) {}
