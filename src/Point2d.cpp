#include "Point2d.h"
#include <cmath>

Point2d::Point2d(double y, double x) : x(x), y(y) {}

double Point2d::getX() const {
    return x;
}

void Point2d::setX(double x) {
    x = x;
}

double Point2d::getY() const {
    return y;
}

void Point2d::setY(double y) {
    y = y;
}

double Point2d::distance(const Point2d &location) const {
    return distance(location.getY(), location.getX());
}

double Point2d::distance(double y, double x) const {
    return sqrt(pow(this->getX() - x, 2) + pow(this->getY() - y, 2));
}

bool Point2d::operator==(const Point2d &location) {
    return equeals(location.getY(), location.getX());
}

bool Point2d::equeals(double y, double x) const {
    return this->y == y && this->x == x;
}
