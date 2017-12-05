#include "M16Rifle.h"

#define MISSILE_STRENGTH 100
#define MISSILE_BULLET_AMOUNT_AT_ONCE 1

M16Rifle::M16Rifle(const std::string& id,const Point2d &location,bool inUse)
        : LightWeapon(id,location,inUse,MISSILE_STRENGTH,MISSILE_BULLET_AMOUNT_AT_ONCE) {}
