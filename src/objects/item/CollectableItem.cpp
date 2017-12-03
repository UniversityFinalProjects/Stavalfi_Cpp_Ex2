#include "CollectableItem.h"

CollectableItem::CollectableItem(const std::string& id,const Point2d &location,bool inUse)
        : Item(id,location),inUse(inUse) {}

bool CollectableItem::isInUse() const {
    return inUse;
}

void CollectableItem::setInUse(bool inUse) {
    CollectableItem::inUse = inUse;
}

CollectableItem::~CollectableItem() = default;
