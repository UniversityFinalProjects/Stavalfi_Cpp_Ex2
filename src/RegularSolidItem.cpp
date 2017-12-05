#include "RegularSolidItem.h"

#define REGULAR_SOLID_ITEM_LENGTH 2
#define REGULAR_SOLID_ITEM_WIDTH 2

RegularSolidItem::RegularSolidItem(const std::string& id,const Point2d &location)
        : SolidItem(id,location,REGULAR_SOLID_ITEM_LENGTH,REGULAR_SOLID_ITEM_WIDTH) {}
