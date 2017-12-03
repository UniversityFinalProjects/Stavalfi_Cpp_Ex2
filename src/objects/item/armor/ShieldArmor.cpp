#include "ShieldArmor.h"

#define SHIELD_ARMOR_STRENGTH 0.8

ShieldArmor::ShieldArmor(const std::string& id,const Point2d &location,bool inUse)
        : Armor(id,location,inUse, SHIELD_ARMOR_STRENGTH) {}
