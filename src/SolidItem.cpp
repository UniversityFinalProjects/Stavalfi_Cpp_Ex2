#include "SolidItem.h"

SolidItem::SolidItem(const std::string &id, const Point2d &location, const short high, const short width)
        : Item(id, location), high(high), width(width) {}

bool SolidItem::isPointInside(double y, double x) const {
    return this->getLocation().getY() <= y && y <= this->getLocation().getY() + this->high &&
           this->getLocation().getX() <= x && x <= this->getLocation().getX() + this->width;
}

bool SolidItem::isPointInside(const Point2d &location) const {
    return isPointInside(location.getY(), location.getX());
}

const short SolidItem::getHigh() const {
    return high;
}

const short SolidItem::getWidth() const {
    return width;
}
