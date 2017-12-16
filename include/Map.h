#ifndef STAVALFI_CPP_EX2_MAP_H
#define STAVALFI_CPP_EX2_MAP_H

#include "MapCell.h"
#include "MapReaderModifier.h"
#include <vector>

class Map : public MapReaderModifier {
    // why not <MapCell& or * or smart_ptr> - because
    // vector return MapCell& anyway.
    // Also each MapCell object is located in the heap also.
    std::vector<MapCell> map;
    const signed int w, h;
public:
    Map(int w, int h);

    ~Map() override = default;

    void remove(const Soldier &soldier) override;

    void remove(const Weapon &weapon) override;

    void remove(const Armor &armor) override;

    bool tryAdd(std::shared_ptr<Soldier> soldier) override;

    bool tryAdd(std::shared_ptr<Weapon> &weapon) override;

    bool tryAdd(std::shared_ptr<Armor> &armor) override;

    bool tryAdd(std::shared_ptr<const SolidItem> &soldier) override;

    bool isFree(double y, double x) const override;

    std::shared_ptr<Soldier> getSoldier(double y, double x) const override;

    std::shared_ptr<Weapon> getWeapon(double y, double x) const override;

    std::shared_ptr<Armor> getArmor(double y, double x) const override;

    std::shared_ptr<const SolidItem> getSolidItem(double y, double x) const override;

    const std::list<std::shared_ptr<Soldier>> getEnemiesAround(const Soldier &soldier, double distance) const override;

    const std::list<std::shared_ptr<Soldier>> getAlliesAround(const Soldier &soldier, double distance) const override;

    const std::list<std::shared_ptr<Weapon>>
    getWeaponsAround(const Point2d &point2d, double distance) const override;

    const std::list<std::shared_ptr<Armor>>
    getArmorsAround(const Point2d &point2d, double distance) const override;

    const std::list<std::shared_ptr<const SolidItem>>
    getSolidItemsAround(const Point2d &point2d, double distance) const override;
};


#endif //STAVALFI_CPP_EX2_MAP_H
