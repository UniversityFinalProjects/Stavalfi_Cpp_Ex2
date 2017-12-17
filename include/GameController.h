#ifndef STAVALFI_CPP_EX2_GAME_CONTROLER_H
#define STAVALFI_CPP_EX2_GAME_CONTROLER_H


#include <CurrentGameState.h>

class GameController : public CurrentGameState {
public:
    virtual void start() const = 0;

    virtual ~GameController() = 0;
};


#endif //STAVALFI_CPP_EX2_GAME_CONTROLER_H
