#ifndef STAVALFI_CPP_EX2_INPUT_INTERFACE_H
#define STAVALFI_CPP_EX2_INPUT_INTERFACE_H


#include "CurrentGameState.h"

class InputInterface {
    CurrentGameState &currentGameState;

public:

    InputInterface(CurrentGameState &currentGameState);

    virtual void printPlayers() const = 0;

    virtual void printMap() const = 0;

    virtual ~InputInterface() = 0;
};


#endif //STAVALFI_CPP_EX2_INPUT_INTERFACE_H
