#include "Map.h"

Map::Map(int w, int h) : h(h), w(w) {

}

void Map::removeSoldier(Soldier &soldier) {

}

void Map::removeCollectableItem(const CollectableItem &soldier) {

}

void Map::removeSolidItem(const SolidItem &soldier) {

}

void Map::addSoldier(Soldier &soldier) {

}

void Map::addCollectableItem(const CollectableItem &soldier) {

}

void Map::addSolidItem(const SolidItem &soldier) {

}

std::shared_ptr<Soldier> Map::getSoldier(int y, int x) const {
    return std::shared_ptr<Soldier>();
}

std::shared_ptr<CollectableItem> Map::getCollectableItem(int y, int x) const {
    return std::shared_ptr<CollectableItem>();
}

std::shared_ptr<SolidItem> Map::getSolidItem(int y, int x) const {
    return std::shared_ptr<SolidItem>();
}

const std::vector<std::shared_ptr<Soldier>> Map::getEnemiesAround(const Soldier &soldier, int distance) const {
    return std::vector<std::shared_ptr<Soldier>>();
}

const std::vector<std::shared_ptr<Soldier>> Map::getAlliesAround(const Soldier &soldier, int distance) const {
    return std::vector<std::shared_ptr<Soldier>>();
}

const std::vector<std::shared_ptr<CollectableItem>>
Map::getCollectableItemsAround(const Point2d &point2d, int distance) const {
    return std::vector<std::shared_ptr<CollectableItem>>();
}

const std::vector<std::shared_ptr<SolidItem>> Map::getSolidItemsAround(const Point2d &point2d, int distance) const {
    return std::vector<std::shared_ptr<SolidItem>>();
}
