#include "M16Rifle.h"

#define MISSILE_STRENGTH 100
#define MISSILE_BULLET_AMOUNT_AT_ONCE 1

M16Rifle::M16Rifle(const Point2d &location)
        : LightWeapon(location,MISSILE_STRENGTH,MISSILE_BULLET_AMOUNT_AT_ONCE) {}
