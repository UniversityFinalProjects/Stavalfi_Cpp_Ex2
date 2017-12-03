#include "Item.h"

Item::Item(const std::string& id, const Point2d &location)
        : MapObject(id, location) {}
Item::~Item() = default;
