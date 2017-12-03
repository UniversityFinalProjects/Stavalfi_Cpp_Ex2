#ifndef STAVALFI_CPP_EX2_MAP_OBJECT_H
#define STAVALFI_CPP_EX2_MAP_OBJECT_H


#include "Point2d.h"
#include "../Map.h"
#include <string>

class MapObject {
    friend Map;

    const std::string& id;
public:
    const std::string &getId() const;

private:
    Point2d& location;
public:
    explicit MapObject(const std::string& id,const Point2d &location);

    virtual ~MapObject() = 0;

    const Point2d &getLocation() const;

private:
    void setLocation(int x,int y);
};


#endif //STAVALFI_CPP_EX2_MAP_OBJECT_H
