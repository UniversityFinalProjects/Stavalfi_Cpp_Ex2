#include "Map.h"

Map::Map(signed int rows, signed int columns)
        : rows(rows), columns(columns), soldiers(rows * columns, nullptr),
          collectableItems(rows * columns, nullptr), solidItems(rows * columns, nullptr) {}

const Soldier *Map::getSoldierInMap(int i, int j) const {
    return this->soldiers[this->rows * i + j];
}

const CollectableItem *Map::getCollectableItemInMap(int i, int j) const {
    return this->collectableItems[this->rows * i + j];
}

const SolidItem *Map::getSolidItemInMap(int i, int j) const {
    return this->solidItems[this->rows * i + j];
}

const MapObject *Map::operator()(int i, int j) const {
    if (getSoldierInMap(i, j) != nullptr)
        return getSoldierInMap(i, j);
    if (getCollectableItemInMap(i, j) != nullptr)
        return getCollectableItemInMap(i, j);
    if (getSolidItemInMap(i, j) != nullptr)
        return getSolidItemInMap(i, j);
    return nullptr;
}

const std::vector<const Soldier *> Map::getEnemiesAround(const Soldier &soldier, int distance) const {
    std::vector<const Soldier *> enemies;
    for (int i = 0; i <= std::min(this->rows - 1, soldier.getLocation().getY() + distance); i++)
        for (int j = 0; j <= std::min(this->columns - 1, soldier.getLocation().getX() + distance); j++)
            if (i != soldier.getLocation().getY() || j != soldier.getLocation().getX()) {
                const Soldier *soldier1 = getSoldierInMap(i, j);
                if (soldier1 != nullptr &&
                    soldier1->getPlayerId() != soldier.getPlayerId())
                    enemies.push_back(soldier1);
            }
    return enemies;
}

const std::vector<Soldier *> Map::getAlliesAround(const Soldier &soldier, int distance) const {
    std::vector<Soldier *> allies;
    for (int i = 0; i <= std::min(this->rows - 1, soldier.getLocation().getY() + distance); i++)
        for (int j = 0; j <= std::min(this->columns - 1, soldier.getLocation().getX() + distance); j++)
            if (i != soldier.getLocation().getY() || j != soldier.getLocation().getX()) {
                Soldier *soldier1 = this->soldiers[this->rows * i + j];
                if (soldier1 != nullptr &&
                    soldier1->getPlayerId() == soldier.getPlayerId())
                    allies.push_back(soldier1);
            }
    return allies;
}

const std::vector<const CollectableItem *> Map::getCollectableItemsAround(const Point2d &point2d, int distance) const {
    std::vector<const CollectableItem *> collectableItems;
    for (int i = 0; i <= std::min(this->rows - 1, point2d.getY() + distance); i++)
        for (int j = 0; j <= std::min(this->columns - 1, point2d.getX() + distance); j++)
            if (i != point2d.getY() || j != point2d.getX()) {
                const CollectableItem *collectableItem = getCollectableItemInMap(i, j);
                if (collectableItem != nullptr)
                    collectableItems.push_back(collectableItem);
            }
    return collectableItems;
}

const std::vector<const SolidItem *> Map::getSolidItemsAround(const Point2d &point2d, int distance) const {
    std::vector<const SolidItem *> solidItems;
    for (int i = 0; i <= std::min(this->rows - 1, point2d.getY() + distance); i++)
        for (int j = 0; j <= std::min(this->columns - 1, point2d.getX() + distance); j++)
            if (i != point2d.getY() || j != point2d.getX()) {
                const SolidItem *solidItem = getSolidItemInMap(i, j);
                if (solidItem != nullptr)
                    solidItems.push_back(solidItem);
            }
    return solidItems;
}

void Map::setSoldierLocationInMap(Soldier &soldier, int x, int y) const {
    soldier.setLocation(x,y);
}

void Map::setCollectableItemLocationInMap(const CollectableItem &soldier, int x, int y) const {

}

void Map::setSolidItemLocationInMap(const SolidItem &soldier, int x, int y) const {

}

void Map::addSoldierToMap(Soldier &soldier) const {

}

void Map::addCollectableItemToMap(const CollectableItem &soldier) const {

}

void Map::addSolidItemToMap(const SolidItem &soldier) const {

}
