#ifndef STAVALFI_CPP_EX2_GAME_INITIALIZER_H
#define STAVALFI_CPP_EX2_GAME_INITIALIZER_H

#include <memory>
#include "Game.h"
#include "ConfigurationReader.h"

class GameInitializer {
public:
    GameInitializer &getInstance() {
        static GameInitializer gameInitializer;
        return gameInitializer;
    }

    std::shared_ptr<Game> initializeGame(const std::string fileConfigurationLocation);

};


#endif //STAVALFI_CPP_EX2_GAME_INITIALIZER_H
