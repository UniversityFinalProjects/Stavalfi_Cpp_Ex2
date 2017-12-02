#ifndef STAVALFI_CPP_EX2_ARMOR_H
#define STAVALFI_CPP_EX2_ARMOR_H


#include "../Item.h"

class Armor : public Item {
    const double ArmorStrength;
public:
    ~Armor() override = 0;

    Armor(const Point2d &location, double ArmorStrength);

    double getArmorStrength() const;
};


#endif //STAVALFI_CPP_EX2_ARMOR_H
