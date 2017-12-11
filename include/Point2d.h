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
};


#endif //STAVALFI_CPP_EX2_POINT2D_H
