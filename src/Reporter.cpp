#include "Reporter.h"

Reporter::~Reporter() = default;

void Reporter::report(const Reportable &reportable) const {
    reportable.report(*this);
}
