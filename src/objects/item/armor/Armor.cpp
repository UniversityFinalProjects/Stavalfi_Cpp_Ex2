#include "Armor.h"

Armor::Armor(const std::string& id,const Point2d &location,bool inUse, double ArmorStrength)
        : Item(id,location,inUse), ArmorStrength(ArmorStrength) {}

double Armor::getArmorStrength() const {
    return ArmorStrength;
}

Armor::~Armor() = default;
