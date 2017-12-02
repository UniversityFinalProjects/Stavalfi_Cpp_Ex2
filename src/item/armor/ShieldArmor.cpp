#include "ShieldArmor.h"

#define SHIELD_ARMOR_STRENGTH 0.8

ShieldArmor::ShieldArmor(const Point2d &location)
        : Armor(location, SHIELD_ARMOR_STRENGTH) {}
