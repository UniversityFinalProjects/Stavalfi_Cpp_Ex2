#ifndef STAVALFI_CPP_EX2_GAME_INITIALIZER_H
#define STAVALFI_CPP_EX2_GAME_INITIALIZER_H

#include <memory>
#include "GameController.h"
#include "ConfigurationReader.h"

class GameInitializer {
public:
    GameInitializer &getInstance();

    std::shared_ptr<const GameController>
    initializeGame(const ConfigurationReader &configurationReader,
                   const std::shared_ptr<const Reporter> &reporter);

};


#endif //STAVALFI_CPP_EX2_GAME_INITIALIZER_H
