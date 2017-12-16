#include "Map.h"

Map::Map(int w, int h) : h(h), w(w) {

}

void Map::remove(const Soldier &soldier) {

}

void Map::remove(const Weapon &weapon) {

}

void Map::remove(const Armor &armor) {

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

std::shared_ptr<Soldier> Map::getSoldier(double y, double x) const {
    return nullptr;
}

std::shared_ptr<Weapon> Map::getWeapon(double y, double x) const {
    return nullptr;
}

std::shared_ptr<Armor> Map::getArmor(double y, double x) const {
    return nullptr;
}

std::shared_ptr<const SolidItem> Map::getSolidItem(double y, double x) const {
    return nullptr;
}

const std::list<std::shared_ptr<Soldier>> Map::getEnemiesAround(const Soldier &soldier, double distance) const {
    return std::list<std::shared_ptr<Soldier>>();
}

const std::list<std::shared_ptr<Soldier>> Map::getAlliesAround(const Soldier &soldier, double distance) const {
    return std::list<std::shared_ptr<Soldier>>();
}

const std::list<std::shared_ptr<Weapon>> Map::getWeaponsAround(const Point2d &point2d, double distance) const {
    return std::list<std::shared_ptr<Weapon>>();
}

const std::list<std::shared_ptr<Armor>> Map::getArmorsAround(const Point2d &point2d, double distance) const {
    return std::list<std::shared_ptr<Armor>>();
}

const std::list<std::shared_ptr<const SolidItem>>
Map::getSolidItemsAround(const Point2d &point2d, double distance) const {
    return std::list<std::shared_ptr<const SolidItem>>();
}

bool Map::isFree(double y, double x) const {
    return false;
}
