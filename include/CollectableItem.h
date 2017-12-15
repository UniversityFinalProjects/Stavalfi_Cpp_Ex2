#ifndef STAVALFI_CPP_EX2_COLLECTABLE_ITEM_H
#define STAVALFI_CPP_EX2_COLLECTABLE_ITEM_H


#include <string.h>
#include "Item.h"

class CollectableItem : public Item {
    bool isCollected;

public:
    explicit CollectableItem(const std::string &id,
                             const Point2d &location, bool isCollected);

    bool isIsCollected() const;

    void setIsCollected(bool isCollected);

    ~CollectableItem() override = 0;

};

#endif //STAVALFI_CPP_EX2_COLLECTABLE_ITEM_H
