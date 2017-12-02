#include "Point2d.h"

Point2d::Point2d(int x, int y) : x(x), y(y) {}

int Point2d::getX() const {
    return x;
}

void Point2d::setX(int x) {
    Point2d::x = x;
}

int Point2d::getY() const {
    return y;
}

void Point2d::setY(int y) {
    Point2d::y = y;
}
