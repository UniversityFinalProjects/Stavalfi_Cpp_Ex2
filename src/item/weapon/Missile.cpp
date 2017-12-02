#include "Missile.h"

#define MISSILE_STRENGTH 100
#define MISSILE_BULLET_AMOUNT_AT_ONCE 1

Missile::Missile(const Point2d &location) : HeavyWeapon(
        location, MISSILE_STRENGTH, MISSILE_BULLET_AMOUNT_AT_ONCE) {}
