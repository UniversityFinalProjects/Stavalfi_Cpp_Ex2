#include <MapObject.h>
#include <cassert>

MapObject::MapObject(const std::string &id, const Point2d &location)
        : id(id), location(location) {}

const Point2d &MapObject::getLocation() const {
    return this->location;
}

void MapObject::setLocation(double y, double x) {
    this->location.setX(x);
    this->location.setY(y);
}

MapObject::~MapObject() = default;

const std::string &MapObject::getId() const {
    return id;
}

void MapObject::setLocation(const Point2d &location) {
    this->setLocation(location.getY(), location.getX());
}
