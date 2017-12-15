#include "MapCell.h"

MapCell::MapCell(signed int y, signed int x) : x(x), y(y) {

}

void MapCell::remove(const Soldier &soldier) {

}

void MapCell::remove(const Weapon &weapon) {

}

void MapCell::remove(const Armor &armor) {

}

void MapCell::remove(const SolidItem &solidItem) {

}

bool MapCell::tryAdd(std::shared_ptr<Soldier> soldier) {
    return false;
}

bool MapCell::tryAdd(std::shared_ptr<Weapon> &weapon) {
    return false;
}

bool MapCell::tryAdd(std::shared_ptr<Armor> &armor) {
    return false;
}

bool MapCell::tryAdd(std::shared_ptr<const SolidItem> &soldier) {
    return false;
}

std::shared_ptr<Soldier> MapCell::getSoldier(int y, int x) const {
    return nullptr;
}

std::shared_ptr<Weapon> MapCell::getWeapon(int y, int x) const {
    return nullptr;
}

std::shared_ptr<Weapon> MapCell::getArmor(int y, int x) const {
    return nullptr;
}

std::shared_ptr<const SolidItem> MapCell::getSolidItem(int y, int x) const {
    return nullptr;
}

const std::list<std::shared_ptr<Soldier>> MapCell::getEnemiesAround(const Soldier &soldier, int distance) const {
    return std::list<std::shared_ptr<Soldier>>();
}

const std::list<std::shared_ptr<Soldier>> MapCell::getAlliesAround(const Soldier &soldier, int distance) const {
    return std::list<std::shared_ptr<Soldier>>();
}

const std::list<std::shared_ptr<Weapon>>
MapCell::getWeaponsAround(const Point2d &point2d, int distance) const {
    return std::list<std::shared_ptr<Weapon>>();
}

const std::list<std::shared_ptr<Armor>> MapCell::getArmorsAround(const Point2d &point2d, int distance) const {
    return std::list<std::shared_ptr<Armor>>();
}

const std::list<std::shared_ptr<const SolidItem>>
MapCell::getSolidItemsAround(const Point2d &point2d, int distance) const {
    return std::list<std::shared_ptr<const SolidItem>>();
}

std::shared_ptr<Soldier> MapCell::get(int y, int x) const {
    return std::shared_ptr<Soldier>();
}
