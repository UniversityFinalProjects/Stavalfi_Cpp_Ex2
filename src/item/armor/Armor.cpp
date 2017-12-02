#include "Armor.h"

Armor::Armor(const Point2d &location, double ArmorStrength)
        : Item(location), ArmorStrength(ArmorStrength) {}

double Armor::getArmorStrength() const {
    return ArmorStrength;
}

Armor::~Armor() = default;
