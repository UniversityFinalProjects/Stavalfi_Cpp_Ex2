#include "Point2d.h"

Point2d::Point2d(double x, double y) : x(x), y(y) {}

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
