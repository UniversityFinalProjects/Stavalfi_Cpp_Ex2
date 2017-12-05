#include "Missile.h"

#define MISSILE_STRENGTH 100
#define MISSILE_BULLET_AMOUNT_AT_ONCE 1

Missile::Missile(const std::string& id, const Point2d &location,bool inUse)
        : HeavyWeapon(id, location,inUse, MISSILE_STRENGTH, MISSILE_BULLET_AMOUNT_AT_ONCE) {}
