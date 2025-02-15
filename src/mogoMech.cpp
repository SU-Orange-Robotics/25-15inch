#include "vex.h"
#include "robot-config.h"
#include "mogoMech.h"

using namespace vex;

void mogoDown() {
    MogoMech1.spin(directionType::fwd, mechPow, percentUnits::pct);
    MogoMech2.spin(directionType::fwd, mechPow, percentUnits::pct);
}

void mogoUp() {
    MogoMech1.spin(directionType::rev, mechPow, percentUnits::pct);
    MogoMech2.spin(directionType::rev, mechPow, percentUnits::pct);
}

void mogoStop() {
    MogoMech1.stop(brakeType::hold);
    MogoMech2.stop(brakeType::hold);
}