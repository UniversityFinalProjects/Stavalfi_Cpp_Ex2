#include "BodyArmor.h"

#define BODY_ARMOR_STRENGTH 0.8

BodyArmor::BodyArmor(const std::string& id,const Point2d &location,bool inUse)
        : Armor(id,location,inUse, BODY_ARMOR_STRENGTH) {}
