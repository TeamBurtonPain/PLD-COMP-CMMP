#include "CommonTypes.h"

void sumErrors(errorReturns &e, errorReturns e2)
{
    e.errors += e2.errors;
    e.warnings += e2.warnings;
}