#include "MapCell.h"
#include <cassert>

MapCell::MapCell(signed int y, signed int x) : x(x), y(y) {

}

void MapCell::remove(const Soldier &soldier) {
    assert(this->y <= soldier.getLocation().getY() && soldier.getLocation().getY() <= this->y + 1 &&
           this->x <= soldier.getLocation().getX() && soldier.getLocation().getX() <= this->x + 1);

    std::shared_ptr<Soldier> *soldier_p = getSoldier_ptr(soldier.getLocation().getY(),
                                                         soldier.getLocation().getX());
    assert(soldier_p != nullptr);

    this->soldiers.remove(*soldier_p);

}

void MapCell::remove(const Weapon &weapon) {
    assert(this->y <= weapon.getLocation().getY() && weapon.getLocation().getY() <= this->y + 1 &&
           this->x <= weapon.getLocation().getX() && weapon.getLocation().getX() <= this->x + 1);

    std::shared_ptr<Weapon> *weapon_p = getWeapon_ptr(weapon.getLocation().getY(),
                                                      weapon.getLocation().getX());
    assert(weapon_p != nullptr);

    this->weapons.remove(*weapon_p);
}

void MapCell::remove(const Armor &armor) {
    assert(this->y <= armor.getLocation().getY() && armor.getLocation().getY() <= this->y + 1 &&
           this->x <= armor.getLocation().getX() && armor.getLocation().getX() <= this->x + 1);

    std::shared_ptr<Armor> *armor_p = getArmor_ptr(armor.getLocation().getY(),
                                                   armor.getLocation().getX());
    assert(armor_p != nullptr);

    this->armors.remove(*armor_p);
}

bool MapCell::tryAdd(std::shared_ptr<Soldier> soldier) {
    assert(soldier != nullptr);

    std::shared_ptr<Soldier> *soldier_p = getSoldier_ptr(soldier->getLocation().getY(),
                                                         soldier->getLocation().getX());
    if (soldier_p != nullptr)
        return false;

    this->soldiers.push_back(soldier);
    return true;
}

bool MapCell::tryAdd(std::shared_ptr<Weapon> &weapon) {
    assert(weapon != nullptr);

    std::shared_ptr<Weapon> *weapon_p = getWeapon_ptr(weapon->getLocation().getY(),
                                                      weapon->getLocation().getX());
    if (weapon_p != nullptr)
        return false;

    this->weapons.push_back(weapon);
    return true;
}

bool MapCell::tryAdd(std::shared_ptr<Armor> &armor) {
    assert(armor != nullptr);

    std::shared_ptr<Armor> *armor_p = getArmor_ptr(armor->getLocation().getY(),
                                                   armor->getLocation().getX());
    if (armor_p != nullptr)
        return false;

    this->armors.push_back(armor);
    return true;
}

bool MapCell::tryAdd(std::shared_ptr<const SolidItem> &solidItem) {
    assert(solidItem != nullptr);

    std::shared_ptr<const SolidItem> *solidItem_p = getSolidItem_ptr(solidItem->getLocation().getY(),
                                                                     solidItem->getLocation().getX());
    if (solidItem_p != nullptr)
        return false;

    this->solidItems.push_back(solidItem);
    return true;
}

std::shared_ptr<Soldier> MapCell::getSoldier(double y, double x) const {
    assert(this->y <= y && y <= this->y + 1 &&
           this->x <= x && x <= this->x + 1);

    std::shared_ptr<Soldier> *solidItem_p = getSoldier_ptr(y, x);
    if (solidItem_p == nullptr)
        return nullptr;

    return *solidItem_p;
}

std::shared_ptr<Weapon> MapCell::getWeapon(double y, double x) const {
    assert(this->y <= y && y <= this->y + 1 &&
           this->x <= x && x <= this->x + 1);

    std::shared_ptr<Weapon> *weapon_p = getWeapon_ptr(y, x);
    if (weapon_p == nullptr)
        return nullptr;

    return *weapon_p;
}

std::shared_ptr<Armor> MapCell::getArmor(double y, double x) const {
    assert(this->y <= y && y <= this->y + 1 &&
           this->x <= x && x <= this->x + 1);

    std::shared_ptr<Armor> *armor_p = getArmor_ptr(y, x);
    if (armor_p == nullptr)
        return nullptr;

    return *armor_p;
}

std::shared_ptr<const SolidItem> MapCell::getSolidItem(double y, double x) const {
    assert(this->y <= y && y <= this->y + 1 &&
           this->x <= x && x <= this->x + 1);

    std::shared_ptr<const SolidItem> *solidItem_p = getSolidItem_ptr(y, x);
    if (solidItem_p == nullptr)
        return nullptr;

    return *solidItem_p;
}

const std::list<std::shared_ptr<Soldier>>
MapCell::getEnemiesAround(const Soldier &soldier, double distance) const {
    assert(distance >= 0);

    std::list<std::shared_ptr<Soldier>> enemiesAround;

    for (auto soldier_p:this->soldiers)
        if (soldier.getLocation().distance(soldier_p->getLocation()) <= distance && soldier.isEnemy(*soldier_p))
            enemiesAround.push_back(soldier_p);

    return enemiesAround;
}

const std::list<std::shared_ptr<Soldier>>
MapCell::getAlliesAround(const Soldier &soldier, double distance) const {
    assert(distance >= 0);

    std::list<std::shared_ptr<Soldier>> alliesAround;

    for (auto soldier_p:this->soldiers)
        if (soldier.getLocation().distance(soldier_p->getLocation()) <= distance && !soldier.isEnemy(*soldier_p))
            alliesAround.push_back(soldier_p);

    return alliesAround;
}

const std::list<std::shared_ptr<Weapon>>
MapCell::getWeaponsAround(const Point2d &point2d, double distance) const {
    assert(distance >= 0);

    std::list<std::shared_ptr<Weapon>> weaponsAround;

    for (auto weapon_p:this->weapons)
        if (point2d.distance(weapon_p->getLocation()) <= distance)
            weaponsAround.push_back(weapon_p);

    return weaponsAround;
}

const std::list<std::shared_ptr<Armor>> MapCell::getArmorsAround(const Point2d &point2d, double distance) const {
    assert(distance >= 0);

    std::list<std::shared_ptr<Armor>> armorsAround;

    for (auto armor_p:this->armors)
        if (point2d.distance(armor_p->getLocation()) <= distance)
            armorsAround.push_back(armor_p);

    return armorsAround;
}

const std::list<std::shared_ptr<const SolidItem>>
MapCell::getSolidItemsAround(const Point2d &point2d, double distance) const {
    assert(distance >= 0);

    std::list<std::shared_ptr<const SolidItem>> solidItemsAround;

    for (auto solidItem_p:this->solidItems)
        if (point2d.distance(solidItem_p->getLocation()) <= distance)
            solidItemsAround.push_back(solidItem_p);

    return solidItemsAround;
}

std::shared_ptr<Soldier> *MapCell::getSoldier_ptr(double y, double x) const {
    for (auto soldier_p:this->soldiers)
        if (soldier_p->getLocation().getY() == y &&
            soldier_p->getLocation().getX() == x) {
            return &soldier_p;
        }
    return nullptr;
}

std::shared_ptr<Weapon> *MapCell::getWeapon_ptr(double y, double x) const {
    for (auto weapon_p:this->weapons)
        if (weapon_p->getLocation().getY() == y &&
            weapon_p->getLocation().getX() == x) {
            return &weapon_p;
        }
    return nullptr;
}

std::shared_ptr<Armor> *MapCell::getArmor_ptr(double y, double x) const {
    for (auto armor_p:this->armors)
        if (armor_p->getLocation().getY() == y &&
            armor_p->getLocation().getX() == x) {
            return &armor_p;
        }
    return nullptr;
}

std::shared_ptr<const SolidItem> *MapCell::getSolidItem_ptr(double y, double x) const {
    for (auto solidItem_p:this->solidItems)
        if (solidItem_p->getLocation().getY() == y &&
            solidItem_p->getLocation().getX() == x) {
            return &solidItem_p;
        }
    return nullptr;
}

bool MapCell::isFree(double y, double x) const {
    assert(this->y <= y && y <= this->y + 1 &&
           this->x <= x && x <= this->x + 1);

    return getSoldier(y, x) || getWeapon(y, x) || getArmor(y, x) || getSolidItem(y, x);
}
