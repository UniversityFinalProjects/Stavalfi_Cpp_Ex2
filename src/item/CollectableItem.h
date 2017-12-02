#ifndef STAVALFI_CPP_EX2_COLLECTABLE_ITEM_H
#define STAVALFI_CPP_EX2_COLLECTABLE_ITEM_H


#include "Item.h"

class CollectableItem: public Item {
public:
    explicit CollectableItem(const Point2d &location);

    ~CollectableItem() override = 0;

};


#endif //STAVALFI_CPP_EX2_COLLECTABLE_ITEM_H
