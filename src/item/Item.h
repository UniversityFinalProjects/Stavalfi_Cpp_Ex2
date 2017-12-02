#ifndef STAVALFI_CPP_EX2_ITEM_H
#define STAVALFI_CPP_EX2_ITEM_H


#include "../MapObject.h"

class Item : MapObject {
public:
    explicit Item(const Point2d &location);

    ~Item() override = 0;

};


#endif //STAVALFI_CPP_EX2_ITEM_H
