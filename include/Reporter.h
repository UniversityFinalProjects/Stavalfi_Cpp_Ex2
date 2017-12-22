#ifndef STAVALFI_CPP_EX2_REPORTER_H
#define STAVALFI_CPP_EX2_REPORTER_H


#include "Reportable.h"
#include "CurrentGameState.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"

class Reporter {
public:
    virtual void report(const CurrentGameState &gameState) const = 0;

    virtual void report(const HumanPlayer &player) const = 0;

    virtual void report(const ComputerPlayer &player) const = 0;

    virtual void report(const Soldier &soldier) const = 0;

    virtual void report(const Armor &armor) const = 0;

    virtual void report(const Weapon &weapon) const = 0;

    virtual void report(const SolidItem &solidItem) const = 0;

    virtual ~Reporter() = 0;
};


#endif //STAVALFI_CPP_EX2_REPORTER_H
