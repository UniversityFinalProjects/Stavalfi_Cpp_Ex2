#ifndef STAVALFI_CPP_EX2_CONSOLE_REPORTER_H
#define STAVALFI_CPP_EX2_CONSOLE_REPORTER_H


#include "Reporter.h"
#include "CurrentGameState.h"

class ConsoleReporter : public Reporter {
    void reportPlayer(const Player &player) const;

public:
    void report(const CurrentGameState &gameState) const override;

    void report(const HumanPlayer &player) const override;

    void report(const ComputerPlayer &player) const override;

    void report(const Soldier &soldier) const override;

    void report(const Armor &armor) const override;

    void report(const Weapon &weapon) const override;

    void report(const SolidItem &solidItem) const override;

    ~ConsoleReporter() override = default;
};


#endif //STAVALFI_CPP_EX2_CONSOLE_REPORTER_H
