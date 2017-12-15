#include "Map.h"

Map::Map(int w, int h) : h(h), w(w) {

}

void Map::remove(const Soldier &soldier) {

}

void Map::remove(const Weapon &weapon) {

}

void Map::remove(const Armor &armor) {

}

void Map::remove(const SolidItem &solidItem) {

}

bool Map::tryAdd(std::shared_ptr<Soldier> soldier) {
    return false;
}

bool Map::tryAdd(std::shared_ptr<Weapon> &weapon) {
    return false;
}

bool Map::tryAdd(std::shared_ptr<Armor> &armor) {
    return false;
}

bool Map::tryAdd(std::shared_ptr<const SolidItem> &soldier) {
    return false;
}

std::shared_ptr<Soldier> Map::getSoldier(int y, int x) const {
    return nullptr;
}

std::shared_ptr<Weapon> Map::getWeapon(int y, int x) const {
    return nullptr;
}

std::shared_ptr<Weapon> Map::getArmor(int y, int x) const {
    return nullptr;
}

std::shared_ptr<const SolidItem> Map::getSolidItem(int y, int x) const {
    return nullptr;
}

const std::list<std::shared_ptr<Soldier>> Map::getEnemiesAround(const Soldier &soldier, int distance) const {
    return std::list<std::shared_ptr<Soldier>>();
}

const std::list<std::shared_ptr<Soldier>> Map::getAlliesAround(const Soldier &soldier, int distance) const {
    return std::list<std::shared_ptr<Soldier>>();
}

const std::list<std::shared_ptr<CollectableItem>> Map::getWeaponsAround(const Point2d &point2d, int distance) const {
    return std::list<std::shared_ptr<CollectableItem>>();
}

const std::list<std::shared_ptr<CollectableItem>> Map::getArmorsAround(const Point2d &point2d, int distance) const {
    return std::list<std::shared_ptr<CollectableItem>>();
}

const std::list<std::shared_ptr<const SolidItem>> Map::getSolidItemsAround(const Point2d &point2d, int distance) const {
    return std::list<std::shared_ptr<const SolidItem>>();
}

std::shared_ptr<Soldier> Map::get(int y, int x) const {
    return nullptr;
}
