#include "BodyArmor.h"

#define BODY_ARMOR_STRENGTH 0.8

BodyArmor::BodyArmor(const Point2d &location)
        : Armor(location, BODY_ARMOR_STRENGTH) {}
