#include "Armor.h"
#include "Reporter.h"

Armor::Armor(const std::string &id, const Point2d &location, bool inUse, double ArmorStrength)
        : CollectableItem(id, location, inUse), ArmorStrength(ArmorStrength) {}

double Armor::getArmorStrength() const {
    return ArmorStrength;
}

void Armor::report(const Reporter &reporter) const {
    reporter.report(*this);
}

Armor::~Armor() = default;
