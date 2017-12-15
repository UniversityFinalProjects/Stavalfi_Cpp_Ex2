#include "MapCell.h"

MapCell::MapCell(signed int y, signed int x) : x(x), y(y) {

}

void MapCell::remove(const Soldier &soldier) {

}

void MapCell::remove(const CollectableItem &soldier) {

}

void MapCell::remove(const SolidItem &soldier) {

}

bool MapCell::tryAdd(Soldier &soldier) {
    return false;
}

bool MapCell::tryAdd(CollectableItem &soldier) {
    return false;
}

bool MapCell::tryAdd(const SolidItem &solidItem) {
    return false;
}

std::shared_ptr<Soldier> MapCell::getSoldier(int y, int x) const {
    return std::shared_ptr<Soldier>();
}

std::shared_ptr<CollectableItem> MapCell::getCollectableItem(int y, int x) const {
    return std::shared_ptr<CollectableItem>();
}

std::shared_ptr<const SolidItem> MapCell::getSolidItem(int y, int x) const {
    return std::shared_ptr<const SolidItem>();
}

const std::list<std::shared_ptr<Soldier>> MapCell::getEnemiesAround(const Soldier &soldier, int distance) const {
    return std::list<std::shared_ptr<Soldier>>();
}

const std::list<std::shared_ptr<Soldier>> MapCell::getAlliesAround(const Soldier &soldier, int distance) const {
    return std::list<std::shared_ptr<Soldier>>();
}

const std::list<std::shared_ptr<CollectableItem>>
MapCell::getCollectableItemsAround(const Point2d &point2d, int distance) const {
    return std::list<std::shared_ptr<CollectableItem>>();
}

const std::list<std::shared_ptr<const SolidItem>>
MapCell::getSolidItemsAround(const Point2d &point2d, int distance) const {
    return std::list<std::shared_ptr<const SolidItem>>();
}
