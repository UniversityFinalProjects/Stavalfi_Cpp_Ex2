#include "GameInitializer.h"
#include <Game.h>

std::shared_ptr<const GameController>
GameInitializer::initializeGame(const ConfigurationReader &configurationReader,
                                const std::shared_ptr<const Reporter> &reporter) {

    ConfigurationReader::MapSize mapSize = configurationReader.getMapSize();

    std::list<std::shared_ptr<Player>> players = configurationReader.getPlayers();
    const std::string &beginnerPlayerId = (*players.begin())->getPlayerId();

    return std::shared_ptr<const GameController>(new Game(
            mapSize.getMapHigh(),
            mapSize.getMapWidth(),
            players,
            configurationReader.getArmorsInMap(),
            configurationReader.getWeaponsInMap(),
            configurationReader.getSolidItemsInMap(),
            reporter));
}

GameInitializer &GameInitializer::getInstance() {
    static GameInitializer gameInitializer;
    return gameInitializer;
}
