#ifndef STAVALFI_CPP_EX2_MAP_CELL_H
#define STAVALFI_CPP_EX2_MAP_CELL_H

#include "CollectableItem.h"
#include "SolidItem.h"
#include "Soldier.h"
#include "MapModifier.h"
#include "MapReader.h"
#include <vector>

class MapCell : public MapModifier, public MapReader {

    const signed int y, x;

    // represent a map = 2d matrix.
    std::vector<std::shared_ptr<Soldier>> soldiers;

    // represent a map = 2d matrix.
    std::vector<std::shared_ptr<Soldier>> collectableItems;

    // represent a map = 2d matrix.
    std::vector<std::shared_ptr<const SolidItem>> solidItems;

public:

    MapCell(signed int y, signed int x);

    void removeSoldier(const Soldier &soldier) override;

    void removeCollectableItem(const CollectableItem &soldier) override;

    void removeSolidItem(const SolidItem &soldier) override;

    void addSoldier(Soldier &soldier) override;

    void addCollectableItem(CollectableItem &soldier) override;

    void addSolidItem(const SolidItem &solidItem) override;

    std::shared_ptr<Soldier> getSoldier(int y, int x) const;

    std::shared_ptr<CollectableItem> getCollectableItem(int y, int x) const;

    std::shared_ptr<const SolidItem> getSolidItem(int y, int x) const;

    /**
     * @param soldier
     * @param distance
     * @return all the enemies of this soldier around him.
     */
    const std::vector<std::shared_ptr<Soldier>> getEnemiesAround(const Soldier &soldier, int distance) const override;

    /**
     * @param soldier
     * @param distance
     * @return all the allies of this soldier around him
     * (without this soldier).
     */
    const std::vector<std::shared_ptr<Soldier>> getAlliesAround(const Soldier &soldier, int distance) const override;

    /**
     * @param point2d
     * @param distance
     * @return all collectable items around this location
     * (without including anything from the given location).
     */
    const std::vector<std::shared_ptr<CollectableItem>>
    getCollectableItemsAround(const Point2d &point2d, int distance) const override;

    /**
     * @param point2d
     * @param distance
     * @return all solid items around this location
     * (without including anything from the given location).
     */
    const std::vector<std::shared_ptr<const SolidItem>>
    getSolidItemsAround(const Point2d &point2d, int distance) const override;
};


#endif //STAVALFI_CPP_EX2_MAP_H
