#ifndef STAVALFI_CPP_EX2_ITEM_H
#define STAVALFI_CPP_EX2_ITEM_H


#include <string>
#include "../MapObject.h"

class Item : public MapObject {
public:
    explicit Item(const std::string& id,const Point2d &location);

    ~Item() override = 0;

};


#endif //STAVALFI_CPP_EX2_ITEM_H
