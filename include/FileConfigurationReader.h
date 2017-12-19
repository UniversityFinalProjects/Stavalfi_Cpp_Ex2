#ifndef STAVALFI_CPP_EX2_FILE_CONFIGURATION_READER_H
#define STAVALFI_CPP_EX2_FILE_CONFIGURATION_READER_H

#include "ConfigurationReader.h"
#include "PlayerFactory.h"
#include <fstream>
#include <map>

class FileConfigurationReader : public ConfigurationReader {

    std::map<const std::string, const PlayerType> soldierTypes;

    std::shared_ptr<Player>
    getPlayer(const std::shared_ptr<const MapReader> &map, std::ifstream &reader,
              std::size_t SoldiersAmountForPlayer) const;

    std::shared_ptr<Soldier> getSoldier(std::ifstream &reader) const;

public:

    FileConfigurationReader(const std::string &fileConfigurationLocation);

    MapSize getMapSize() const override;

    std::list<std::shared_ptr<Player>> getPlayers(const std::shared_ptr<const MapReader> &map) const override;

    std::list<std::shared_ptr<Armor>> getArmorsInMap() const override;

    std::list<std::shared_ptr<Weapon>> getWeaponsInMap() const override;

    std::list<std::shared_ptr<const SolidItem>> getSolidItemsInMap() const override;

    ~FileConfigurationReader() override = default;
};


#endif //STAVALFI_CPP_EX2_FILE_CONFIGURATION_READER_H
