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
    return sqrt(pow(this->getX() - location.getX(), 2) + pow(this->getY() - location.getY(), 2));
}