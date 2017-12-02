#ifndef STAVALFI_CPP_EX2_MAP_OBJECT_H
#define STAVALFI_CPP_EX2_MAP_OBJECT_H


#include "Point2d.h"

class MapObject {
    Point2d& location;
public:
    explicit MapObject(const Point2d &location);

    virtual ~MapObject() = 0;

    const Point2d &getLocation() const;

private:
    void setLocation(Point2d &location);
};


#endif //STAVALFI_CPP_EX2_MAP_OBJECT_H
