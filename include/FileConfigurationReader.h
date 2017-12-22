#ifndef STAVALFI_CPP_EX2_FILE_CONFIGURATION_READER_H
#define STAVALFI_CPP_EX2_FILE_CONFIGURATION_READER_H

#include "ConfigurationReader.h"
#include "PlayerFactory.h"
#include "SoldierFactory.h"
#include "ItemFactory.h"
#include <fstream>
#include <map>
#include <vector>

class FileConfigurationReader : public ConfigurationReader {
public:

    FileConfigurationReader(const std::string &fileGameConfigurationLocation,
                            const std::string &fileSoldierDirectionsLocation);

    MapSize getMapSize() const override;

    std::list<std::shared_ptr<Player>> getPlayers(const std::shared_ptr<const MapReader> &map) const override;

    std::list<std::shared_ptr<Armor>> getArmorsInMap() const override;

    std::list<std::shared_ptr<Weapon>> getWeaponsInMap() const override;

    std::list<std::shared_ptr<const SolidItem>> getSolidItemsInMap() const override;

    ~FileConfigurationReader() override = default;


    // represent all the possible player types and their
    // corresponding enum.
    std::map<const std::string, PlayerType> playerTypes;

    // represent all the possible soldiers types and their
    // corresponding enum.
    std::map<const std::string, SoldierType> soldierTypes;

    // represent all the possible weapons types and their
    // corresponding enum.
    std::map<const std::string, WeaponType> weaponTypes;

    // represent all the possible armors types and their
    // corresponding enum.
    std::map<const std::string, ArmorType> armorTypes;

    // represent all the possible armors types and their
    // corresponding enum.
    std::map<const std::string, SolidItemType> solidItemTypes;

    enum ItemType {
        ARMOR,
        WEAPON,
        SOLID_ITEM
    };

    // represent all the possible armors types and their
    // corresponding enum.
    std::map<const std::string, ItemType> itemType;

    std::shared_ptr<Player>
    getPlayer(const std::shared_ptr<const MapReader> &map, std::ifstream &reader,
              std::size_t SoldiersAmountForPlayer) const;

    const std::list<std::shared_ptr<Soldier>>
    getSoldiersOfPlayer(std::ifstream &reader, const std::string &playerId, std::size_t SoldiersAmountForPlayer,
                        bool soldierDirectionsExist) const;

    std::shared_ptr<Soldier> getSoldier(std::ifstream &reader, const std::string &playerId, size_t soldierIndex,
                                        bool soldierDirectionsExist) const;

    std::list<Point2d> getSoldiersDirections(size_t soldierIndex) const;
};


#endif //STAVALFI_CPP_EX2_FILE_CONFIGURATION_READER_H
