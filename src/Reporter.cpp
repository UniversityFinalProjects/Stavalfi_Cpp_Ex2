#include "Reporter.h"
#include "Reportable.h"
Reporter::~Reporter() {

}

void Reporter::report(const Reportable &reportable) const {
    reportable.report(*this);
}
