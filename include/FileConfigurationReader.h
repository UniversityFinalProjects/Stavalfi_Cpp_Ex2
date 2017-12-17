#ifndef STAVALFI_CPP_EX2_FILE_CONFIGURATION_READER_H
#define STAVALFI_CPP_EX2_FILE_CONFIGURATION_READER_H


#include "ConfigurationReader.h"

class FileConfigurationReader : public ConfigurationReader {

    FileConfigurationReader &operator=(FileConfigurationReader &) = delete;

public:

    FileConfigurationReader(const std::string &fileConfigurationLocation);

    MapSize getMapSize() const override;

    std::list<std::shared_ptr<Player>> getPlayers() const override;

    std::list<std::shared_ptr<Armor>> getArmorsInMap() const override;

    std::list<std::shared_ptr<Weapon>> getWeaponsInMap() const override;

    std::list<std::shared_ptr<const SolidItem>> getSolidItemsInMap() const override;

    ~FileConfigurationReader() override = default;
};


#endif //STAVALFI_CPP_EX2_FILE_CONFIGURATION_READER_H
