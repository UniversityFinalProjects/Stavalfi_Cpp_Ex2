#ifndef STAVALFI_CPP_EX2_BODY_ARMOR_H
#define STAVALFI_CPP_EX2_BODY_ARMOR_H


#include "Armor.h"

class BodyArmor: public Armor {
public:
    explicit BodyArmor(const std::string& id,const Point2d &location,bool inUse);

};


#endif //STAVALFI_CPP_EX2_BODY_ARMOR_H
