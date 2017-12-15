#include "Map.h"

Map::Map(int w, int h) : h(h), w(w) {

}

void Map::remove(const CollectableItem &soldier) {

}

void Map::remove(const SolidItem &soldier) {

}

bool Map::tryAdd(Soldier &soldier) {
    return false;
}

bool Map::tryAdd(const CollectableItem &soldier) {
    return false;
}

bool Map::tryAdd(const SolidItem &soldier) {
    return false;
}

std::shared_ptr<Soldier> Map::getSoldier(int y, int x) const {
    return std::shared_ptr<Soldier>();
}

std::shared_ptr<CollectableItem> Map::getCollectableItem(int y, int x) const {
    return std::shared_ptr<CollectableItem>();
}

std::shared_ptr<const SolidItem> Map::getSolidItem(int y, int x) const {
    return std::shared_ptr<const SolidItem>();
}

const std::list<std::shared_ptr<Soldier >> Map::getEnemiesAround(const Soldier &soldier, int distance) const {
    return std::list<std::shared_ptr<Soldier>>();
}

const std::list<std::shared_ptr<Soldier >> Map::getAlliesAround(const Soldier &soldier, int distance) const {
    return std::list<std::shared_ptr<Soldier>>();
}

const std::list<std::shared_ptr<CollectableItem >>
Map::getCollectableItemsAround(const Point2d &point2d, int distance) const {
    return std::list<std::shared_ptr<CollectableItem>>();
}

const std::list<std::shared_ptr<const SolidItem >>
Map::getSolidItemsAround(const Point2d &point2d, int distance) const {
    return std::list<std::shared_ptr<const SolidItem>>();
}
