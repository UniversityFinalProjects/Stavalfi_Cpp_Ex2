#ifndef STAVALFI_CPP_EX2_SOLID_ITEM_H
#define STAVALFI_CPP_EX2_SOLID_ITEM_H


#include "Item.h"

class SolidItem : public Item {
    const short length;
    const short width;
public:
    SolidItem(const Point2d &location, short length, short width);
};


#endif //STAVALFI_CPP_EX2_SOLID_ITEM_H
