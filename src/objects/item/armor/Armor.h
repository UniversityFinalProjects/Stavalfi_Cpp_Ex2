#ifndef STAVALFI_CPP_EX2_ARMOR_H
#define STAVALFI_CPP_EX2_ARMOR_H


#include "../Item.h"

class Armor : public Item {
    const double ArmorStrength;
public:
    Armor(const std::string& id, const Point2d &location,bool inUse, double ArmorStrength);

    double getArmorStrength() const;

    ~Armor() override = 0;
};


#endif //STAVALFI_CPP_EX2_ARMOR_H
