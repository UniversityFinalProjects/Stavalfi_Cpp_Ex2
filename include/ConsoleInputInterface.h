#ifndef STAVALFI_CPP_EX2_CONSOLE_INPUT_INTERFACE_H
#define STAVALFI_CPP_EX2_CONSOLE_INPUT_INTERFACE_H


#include "InputInterface.h"

class ConsoleInputInterface : public InputInterface {
public:
    explicit ConsoleInputInterface(CurrentGameState &currentGameState);

    void printPlayers() const override;

    void printMap() const override;

    ~ConsoleInputInterface() override;
};


#endif //STAVALFI_CPP_EX2_CONSOLE_INPUT_INTERFACE_H
