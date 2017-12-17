#ifndef STAVALFI_CPP_EX2_POINT2D_H
#define STAVALFI_CPP_EX2_POINT2D_H


class Point2d {
    double x;
    double y;

public:
    Point2d(double y, double x);

    double getX() const;

    void setX(double x);

    double getY() const;

    void setY(double y);

    double distance(double y, double x) const;

    double distance(const Point2d &location) const;

    bool equeals(double y, double x) const;

    bool operator==(const Point2d &location);
};


#endif //STAVALFI_CPP_EX2_POINT2D_H
