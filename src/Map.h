#ifndef STAVALFI_CPP_EX2_MAP_H
#define STAVALFI_CPP_EX2_MAP_H

#include <vector>
#include "objects/item/CollectableItem.h"
#include "objects/item/SolidItem.h"
#include "objects/soldier/Soldier.h"

/**
 * Map is represented through out 3 2d arrays.
 * For every i,j , only one array can hold a pointer in i,j which
 * is not equal to nullptr.
 */
class Map {

    const signed int rows, columns;

    // represent a map = 2d matrix.
    std::vector<Soldier *> soldiers;

    // represent a map = 2d matrix.
    std::vector<CollectableItem *> collectableItems;

    // represent a map = 2d matrix.
    std::vector<const SolidItem *> solidItems;

    Soldier *getSoldierInMap(int i, int j) const;

    CollectableItem *getCollectableItemInMap(int i, int j) const;

    const SolidItem *getSolidItemInMap(int i, int j) const;

public:

    Map(signed int rows, signed int columns);

    const MapObject *operator()(int i, int j) const;

    void setSoldierLocationInMap(Soldier &soldier, int x, int y) const;

    void setCollectableItemLocationInMap(const CollectableItem &soldier, int x, int y) const;

    void setSolidItemLocationInMap(const SolidItem &soldier, int x, int y) const;

    void addSoldierToMap(Soldier &soldier) const;

    void addCollectableItemToMap(const CollectableItem &soldier) const;

    void addSolidItemToMap(const SolidItem &soldier) const;

    /**
     * @param soldier
     * @param distance
     * @return all the enemies of this soldier around him.
     */
    const std::vector<const Soldier *> getEnemiesAround(const Soldier &soldier, int distance) const;

    /**
     * @param soldier
     * @param distance
     * @return all the allies of this soldier around him
     * (without this soldier).
     */
    const std::vector<const Soldier *> getAlliesAround(const Soldier &soldier, int distance) const;

    /**
     * @param point2d
     * @param distance
     * @return all collectable items around this location
     * (without including anything from the given location).
     */
    const std::vector<const CollectableItem *> getCollectableItemsAround(const Point2d &point2d, int distance) const;

    /**
     * @param point2d
     * @param distance
     * @return all solid items around this location
     * (without including anything from the given location).
     */
    const std::vector<const SolidItem *> getSolidItemsAround(const Point2d &point2d, int distance) const;

};


#endif //STAVALFI_CPP_EX2_MAP_H
