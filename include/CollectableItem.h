#ifndef STAVALFI_CPP_EX2_COLLECTABLE_ITEM_H
#define STAVALFI_CPP_EX2_COLLECTABLE_ITEM_H


#include <string>
#include "Item.h"

class CollectableItem : public Item {
    bool inUse;

public:
    explicit CollectableItem(const std::string &id,
                             const Point2d &location, bool inUse);

    bool isInUse() const;

    void setInUse(bool inUse);

    ~CollectableItem() override = 0;

};

#endif //STAVALFI_CPP_EX2_COLLECTABLE_ITEM_H
