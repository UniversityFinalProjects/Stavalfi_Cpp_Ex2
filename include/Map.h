#ifndef STAVALFI_CPP_EX2_MAP_H
#define STAVALFI_CPP_EX2_MAP_H


#include "MapModifier.h"
#include "MapReader.h"
#include "MapCell.h"
#include <vector>

class Map : public MapModifier, public MapReader {
    std::vector<MapCell> map;
    const signed int w, h;

public:
    Map(int w, int h);

    // void removeSoldier(Soldier &soldier) override;

    void removeCollectableItem(const CollectableItem &soldier) override;

    void removeSolidItem(const SolidItem &soldier) override;

    // void addSoldier(Soldier &soldier) override;

    void addCollectableItem(const CollectableItem &soldier);

    void addSolidItem(const SolidItem &soldier);

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
