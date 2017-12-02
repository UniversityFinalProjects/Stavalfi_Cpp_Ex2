#include "RegularSolidItem.h"

#define REGULAR_SOLID_ITEM_LENGTH 2
#define REGULAR_SOLID_ITEM_WIDTH 2

RegularSolidItem::RegularSolidItem(const Point2d &location)
        : SolidItem(location,REGULAR_SOLID_ITEM_LENGTH,REGULAR_SOLID_ITEM_WIDTH) {}
