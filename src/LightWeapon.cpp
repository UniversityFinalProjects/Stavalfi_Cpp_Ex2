#include "LightWeapon.h"

LightWeapon::LightWeapon(const std::string& id,const Point2d &location,bool inUse, short weaponStrength,
                         short bulletAmountAtOnce)
        : Weapon(id,location,inUse, weaponStrength, bulletAmountAtOnce) {}

LightWeapon::~LightWeapon() = default;