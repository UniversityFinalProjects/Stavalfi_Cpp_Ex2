#include <cassert>
#include <MapObject.h>

MapObject::MapObject(const std::string& id, const Point2d &location)
        : id(id), location(*(new Point2d(location))) {}

const Point2d &MapObject::getLocation() const {
    return this->location;
}

void MapObject::setLocation(int y,int x) {
    assert(x>=0 && y>=0);
    this->location.setX(x);
    this->location.setY(y);
}

MapObject::~MapObject() {
    delete (&this->location);
}

const std::string &MapObject::getId() const {
    return id;
}
