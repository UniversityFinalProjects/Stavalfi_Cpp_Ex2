#include "Map.h"
#include <cassert>
#include <cmath>

Map::Map(signed int high, signed int width) : high(high), width(width), map(high * width, nullptr) {
    for (signed int y = 0; y < this->high; y++)
        for (signed int x = 0; x < this->width; x++)
            this->map[y * this->width + x] = std::shared_ptr<MapReaderModifier>(new MapCell(y, x));
}

void Map::remove(const Soldier &soldier) {
    assert(isLocationInsideThisMap(soldier.getLocation()));

    getCellByLocation(soldier.getLocation())->remove(soldier);
}

void Map::remove(const Weapon &weapon) {
    assert(isLocationInsideThisMap(weapon.getLocation()));

    getCellByLocation(weapon.getLocation())->remove(weapon);
}

void Map::remove(const Armor &armor) {
    assert(isLocationInsideThisMap(armor.getLocation()));

    getCellByLocation(armor.getLocation())->remove(armor);
}

bool Map::tryAdd(std::shared_ptr<Soldier> soldier) {
    Soldier &soldier1 = *soldier;
    if (soldier1.getLocation().getX() == 90 && soldier1.getLocation().getY() == 112) {
        int x = 1;
        x++;
    }
    assert(isLocationInsideThisMap(soldier->getLocation()));

    return getCellByLocation(soldier->getLocation())->tryAdd(soldier);
}

bool Map::tryAdd(std::shared_ptr<Weapon> &weapon) {
    assert(isLocationInsideThisMap(weapon->getLocation()));

    return getCellByLocation(weapon->getLocation())->tryAdd(weapon);
}

bool Map::tryAdd(std::shared_ptr<Armor> &armor) {
    assert(isLocationInsideThisMap(armor->getLocation()));

    return getCellByLocation(armor->getLocation())->tryAdd(armor);
}

bool Map::tryAdd(std::shared_ptr<const SolidItem> &solidItem) {
    assert(isLocationInsideThisMap(solidItem->getLocation()));

    // check if the entire solid item is inside the entire map.
    assert(solidItem->getLocation().getY() + solidItem->getHigh() < this->getMapHigh() &&
           solidItem->getLocation().getX() + solidItem->getWidth() < this->getMapWidth());

    // fill this solidItem inside all relevant mapCells.
    const Point2d start(std::floor(solidItem->getLocation().getY()),
                        std::floor(solidItem->getLocation().getX()));

    for (double y = start.getY(); y <= start.getY() + solidItem->getHigh(); y++)
        for (double x = start.getX(); x <= start.getX() + solidItem->getWidth(); x++)
            if (!getCellByLocation(y, x)->tryAdd(solidItem))
                return false;
    return true;
}

std::shared_ptr<Soldier> Map::getSoldier(double y, double x) const {
    assert(isLocationInsideThisMap(y, x));

    return getCellByLocation(y, x)->getSoldier(y, x);
}

std::shared_ptr<Weapon> Map::getWeapon(double y, double x) const {
    assert(isLocationInsideThisMap(y, x));

    return getCellByLocation(y, x)->getWeapon(y, x);
}

std::shared_ptr<Armor> Map::getArmor(double y, double x) const {
    assert(isLocationInsideThisMap(y, x));

    return getCellByLocation(y, x)->getArmor(y, x);
}

std::shared_ptr<const SolidItem> Map::getSolidItem(double y, double x) const {
    assert(isLocationInsideThisMap(y, x));

    return getCellByLocation(y, x)->getSolidItem(y, x);
}

const std::list<std::shared_ptr<Soldier>> Map::getEnemiesAround(const Soldier &soldier, double distance) const {
    Point2d start(std::max(0, (signed int) (soldier.getLocation().getY() - distance - 1)),
                  std::max(0, (signed int) (soldier.getLocation().getX() - distance - 1)));
    Point2d end(std::min(this->high - 1, (signed int) (soldier.getLocation().getY() - distance - 1)),
                std::min(this->width - 1, (signed int) (soldier.getLocation().getX() - distance - 1)));

    std::list<std::shared_ptr<Soldier>> result;

    // insert all `temp` lists to one `result` list
    for (int y = start.getY(); y <= end.getY(); y++)
        for (int x = start.getX(); x <= end.getX(); x++) {
            std::list<std::shared_ptr<Soldier>> temp = getCellByLocation(y, x)->getEnemiesAround(soldier, distance);
            result.insert(result.end(), temp.begin(), temp.end());
        }

    return result;
}

const std::list<std::shared_ptr<Soldier>> Map::getAlliesAround(const Soldier &soldier, double distance) const {
    Point2d start(std::max(0, (signed int) (soldier.getLocation().getY() - distance - 1)),
                  std::max(0, (signed int) (soldier.getLocation().getX() - distance - 1)));
    Point2d end(std::min(this->high - 1, (signed int) (soldier.getLocation().getY() - distance - 1)),
                std::min(this->width - 1, (signed int) (soldier.getLocation().getX() - distance - 1)));

    std::list<std::shared_ptr<Soldier>> result;

    // insert all `temp` lists to one `result` list
    for (int y = start.getY(); y <= end.getY(); y++)
        for (int x = start.getX(); x <= end.getX(); x++) {
            std::list<std::shared_ptr<Soldier>> temp = getCellByLocation(y, x)->getAlliesAround(soldier, distance);
            result.insert(result.end(), temp.begin(), temp.end());
        }

    return result;
}

const std::list<std::shared_ptr<Weapon>> Map::getWeaponsAround(const Point2d &point2d, double distance) const {
    Point2d start(std::max(0, (signed int) (point2d.getY() - distance - 1)),
                  std::max(0, (signed int) (point2d.getX() - distance - 1)));
    Point2d end(std::min(this->high - 1, (signed int) (point2d.getY() - distance - 1)),
                std::min(this->width - 1, (signed int) (point2d.getX() - distance - 1)));

    std::list<std::shared_ptr<Weapon>> result;

    // insert all `temp` lists to one `result` list
    for (int y = start.getY(); y <= end.getY(); y++)
        for (int x = start.getX(); x <= end.getX(); x++) {
            std::list<std::shared_ptr<Weapon>> temp = getCellByLocation(y, x)->getWeaponsAround(point2d, distance);
            result.insert(result.end(), temp.begin(), temp.end());
        }

    return result;
}

const std::list<std::shared_ptr<Armor>> Map::getArmorsAround(const Point2d &point2d, double distance) const {
    Point2d start(std::max(0, (signed int) (point2d.getY() - distance - 1)),
                  std::max(0, (signed int) (point2d.getX() - distance - 1)));
    Point2d end(std::min(this->high - 1, (signed int) (point2d.getY() - distance - 1)),
                std::min(this->width - 1, (signed int) (point2d.getX() - distance - 1)));

    std::list<std::shared_ptr<Armor>> result;

    // insert all `temp` lists to one `result` list
    for (int y = start.getY(); y <= end.getY(); y++)
        for (int x = start.getX(); x <= end.getX(); x++) {
            std::list<std::shared_ptr<Armor>> temp = getCellByLocation(y, x)->getArmorsAround(point2d, distance);
            result.insert(result.end(), temp.begin(), temp.end());
        }

    return result;
}

const std::list<std::shared_ptr<const SolidItem>>
Map::getSolidItemsAround(const Point2d &point2d, double distance) const {
    Point2d start(std::max(0, (signed int) (point2d.getY() - distance - 1)),
                  std::max(0, (signed int) (point2d.getX() - distance - 1)));
    Point2d end(std::min(this->high - 1, (signed int) (point2d.getY() - distance - 1)),
                std::min(this->width - 1, (signed int) (point2d.getX() - distance - 1)));

    std::list<std::shared_ptr<const SolidItem>> result;

    // insert all `temp` lists to one `result` list
    for (int y = start.getY(); y <= end.getY(); y++)
        for (int x = start.getX(); x <= end.getX(); x++) {
            std::list<std::shared_ptr<const SolidItem>> temp = getCellByLocation(y, x)->getSolidItemsAround(point2d,
                                                                                                            distance);
            result.insert(result.end(), temp.begin(), temp.end());
        }

    return result;
}

bool Map::isFree(double y, double x) const {
    assert(isLocationInsideThisMap(y, x));

    return getSoldier(y, x) || getWeapon(y, x) || getArmor(y, x) || getSolidItem(y, x);
}

bool Map::isLocationInsideThisMap(double y, double x) const {
    return 0 <= y && y < this->high - 1 &&
           0 <= x && x < this->width - 1;
}

bool Map::isLocationInsideThisMap(const Point2d &location) const {
    return isLocationInsideThisMap(location.getY(), location.getX());
}

const std::shared_ptr<MapReaderModifier> &Map::getCellByLocation(double y, double x) const {
    return this->map[this->width * std::floor(y) + std::floor(x)];
}

const std::shared_ptr<MapReaderModifier> &Map::getCellByLocation(const Point2d &location) const {
    return getCellByLocation(location.getY(), location.getX());
}

int Map::getMapHigh() {
    return this->high;
}

int Map::getMapWidth() {
    return this->width;
}
