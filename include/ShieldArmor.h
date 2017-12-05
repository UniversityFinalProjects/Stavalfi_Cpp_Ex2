#ifndef STAVALFI_CPP_EX2_SHIELD_ARMOR_H
#define STAVALFI_CPP_EX2_SHIELD_ARMOR_H


#include "Armor.h"

class ShieldArmor : public Armor {
public:
    explicit ShieldArmor(const std::string& id, const Point2d &location,bool inUse);

};


#endif //STAVALFI_CPP_EX2_SHIELD_ARMOR_H
