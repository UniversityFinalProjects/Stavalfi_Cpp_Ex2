#include "CollectableItem.h"

CollectableItem::CollectableItem(const std::string &id,
                                 const Point2d &location,
                                 bool isCollected)
        : Item(id, location), isCollected(isCollected) {}

bool CollectableItem::isIsCollected() const {
    return isCollected;
}

void CollectableItem::setIsCollected(bool isCollected) {
    CollectableItem::isCollected = isCollected;
}

CollectableItem::~CollectableItem() = default;
