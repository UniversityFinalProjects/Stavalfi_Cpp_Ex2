#ifndef STAVALFI_CPP_EX2_POINT2D_H
#define STAVALFI_CPP_EX2_POINT2D_H


class Point2d {
    int x;
    int y;

public:
    Point2d(int x, int y);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);
};


#endif //STAVALFI_CPP_EX2_POINT2D_H
