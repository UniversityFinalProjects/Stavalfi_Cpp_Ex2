#ifndef STAVALFI_CPP_EX2_REPORTABLE_H
#define STAVALFI_CPP_EX2_REPORTABLE_H


class Reporter;

class Reportable {
public:
    virtual void report(const Reporter &reporter) const = 0;

    virtual ~Reportable() = 0;
};


#endif //STAVALFI_CPP_EX2_REPORTABLE_H
