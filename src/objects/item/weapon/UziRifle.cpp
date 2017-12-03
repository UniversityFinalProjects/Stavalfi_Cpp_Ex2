#include "UziRifle.h"

#define MISSILE_STRENGTH 40
#define MISSILE_BULLET_AMOUNT_AT_ONCE 3

UziRifle::UziRifle(const std::string& id, const Point2d &location,bool inUse)
        : LightWeapon(id, location,inUse, MISSILE_STRENGTH, MISSILE_BULLET_AMOUNT_AT_ONCE) {}
