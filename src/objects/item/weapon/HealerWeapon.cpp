#include "HealerWeapon.h"

#define HEALER_STRENGTH 10
#define HEALER_BULLET_AMOUNT_AT_ONCE 1

HealerWeapon::HealerWeapon(const std::string &id, const Point2d &location, bool inUsed)
        : Weapon(id, location, inUsed, HEALER_STRENGTH, HEALER_BULLET_AMOUNT_AT_ONCE) {}
