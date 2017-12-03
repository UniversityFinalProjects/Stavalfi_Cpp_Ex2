#ifndef STAVALFI_CPP_EX2_REGULAR_SOLID_ITEM_H
#define STAVALFI_CPP_EX2_REGULAR_SOLID_ITEM_H


#include "../SolidItem.h"

class RegularSolidItem : public SolidItem {
public:
    explicit RegularSolidItem(const std::string& id,const Point2d &location);
};


#endif //STAVALFI_CPP_EX2_REGULAR_SOLID_ITEM_H
