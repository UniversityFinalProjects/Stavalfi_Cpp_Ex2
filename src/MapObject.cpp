#include "MapObject.h"

MapObject::MapObject(const Point2d &location) : location(*(new Point2d(location))) {}

const Point2d &MapObject::getLocation() const {
    return this->location;
}

void MapObject::setLocation(Point2d &location) {
    this->location = location;
}

MapObject::~MapObject() {
    delete (&this->location);
}
