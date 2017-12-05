#include "SolidItem.h"

SolidItem::SolidItem(const std::string& id,const Point2d &location, const short length, const short width)
        : Item(id,location), length(length), width(width) {}
