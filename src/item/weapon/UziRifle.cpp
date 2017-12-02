#include "UziRifle.h"

#define MISSILE_STRENGTH 40
#define MISSILE_BULLET_AMOUNT_AT_ONCE 3

UziRifle::UziRifle(const Point2d &location)
        : LightWeapon(location, MISSILE_STRENGTH, MISSILE_BULLET_AMOUNT_AT_ONCE) {}
