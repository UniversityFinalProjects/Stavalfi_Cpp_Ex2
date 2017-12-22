#include "GameInitializer.h"

GameInitializer &GameInitializer::getInstance() {
    static GameInitializer gameInitializer;
    return gameInitializer;
}
