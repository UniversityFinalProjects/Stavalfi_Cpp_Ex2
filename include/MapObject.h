#ifndef STAVALFI_CPP_EX2_MAP_OBJECT_H
#define STAVALFI_CPP_EX2_MAP_OBJECT_H


#include "Point2d.h"
#include "Reportable.h"
#include <string>

class MapObject : public Reportable {
    const std::string id;
    // MapObject object will be located in the heap
    // anyway so there is no need to locate him in
    // different page in the heap because every time we will
    // refer to any MapObject object, it is most likely
    // that we will talk about it's location also.
    Point2d location;

public:
    virtual void setLocation(double y, double x);

    void setLocation(const Point2d &location);

    const std::string &getId() const;

    explicit MapObject(const std::string &id, const Point2d &location);

    const Point2d &getLocation() const;

    virtual ~MapObject() = 0;
};


#endif //STAVALFI_CPP_EX2_MAP_OBJECT_H
