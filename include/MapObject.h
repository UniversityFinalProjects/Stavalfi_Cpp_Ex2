#ifndef STAVALFI_CPP_EX2_MAP_OBJECT_H
#define STAVALFI_CPP_EX2_MAP_OBJECT_H


#include "Point2d.h"
#include <string>

class MapObject {
    const std::string &id;
    Point2d &location;

protected:
    void setLocation(int y, int x);
public:
    const std::string &getId() const;

    explicit MapObject(const std::string &id, const Point2d &location);

    const Point2d &getLocation() const;

    virtual ~MapObject() = 0;
};


#endif //STAVALFI_CPP_EX2_MAP_OBJECT_H
