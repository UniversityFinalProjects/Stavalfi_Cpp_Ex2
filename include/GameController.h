#ifndef STAVALFI_CPP_EX2_GAMECONTROLER_H
#define STAVALFI_CPP_EX2_GAMECONTROLER_H


#include <CurrentGameState.h>

class GameController : public CurrentGameState {
public:
    virtual void start() = 0;

    virtual ~GameController() = 0;
};


#endif //STAVALFI_CPP_EX2_GAMECONTROLER_H
