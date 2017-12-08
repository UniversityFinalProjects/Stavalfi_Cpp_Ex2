#include <MapCell.h>

MapCell::MapCell(signed int y, signed int x)
        : x(x), y(y) {}

void MapCell::removeSoldier(Soldier &soldier) {

}

void MapCell::removeCollectableItem(const CollectableItem &soldier) {

}

void MapCell::removeSolidItem(const SolidItem &soldier) {

}

void MapCell::addSoldier(Soldier &soldier) {

}

void MapCell::addCollectableItem(const CollectableItem &soldier) {

}

void MapCell::addSolidItem(const SolidItem &soldier) {

}

std::shared_ptr<Soldier> MapCell::getSoldier(int y, int x) const {
    return std::shared_ptr<Soldier>();
}

std::shared_ptr<CollectableItem> MapCell::getCollectableItem(int y, int x) const {
    return std::shared_ptr<CollectableItem>();
}

std::shared_ptr<SolidItem> MapCell::getSolidItem(int y, int x) const {
    return std::shared_ptr<SolidItem>();
}

const std::vector<std::shared_ptr<Soldier>> MapCell::getEnemiesAround(const Soldier &soldier, int distance) const {
    return std::vector<std::shared_ptr<Soldier>>();
}

const std::vector<std::shared_ptr<Soldier>> MapCell::getAlliesAround(const Soldier &soldier, int distance) const {
    return std::vector<std::shared_ptr<Soldier>>();
}

const std::vector<std::shared_ptr<CollectableItem>>
MapCell::getCollectableItemsAround(const Point2d &point2d, int distance) const {
    return std::vector<std::shared_ptr<CollectableItem>>();
}

const std::vector<std::shared_ptr<SolidItem>> MapCell::getSolidItemsAround(const Point2d &point2d, int distance) const {
    return std::vector<std::shared_ptr<SolidItem>>();
}

