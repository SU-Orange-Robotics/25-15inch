#include "vex.h"
#include "drive.h"
#include "robot-config.h"

using namespace vex;

competition Competition;

motor LeftMotorA(PORT4, gearSetting::ratio18_1, true);
motor LeftMotorB(PORT5, gearSetting::ratio18_1, false);
motor LeftMotorC(PORT6, gearSetting::ratio18_1, true);
motor RightMotorA(PORT1, gearSetting::ratio18_1, false);
motor RightMotorB(PORT2, gearSetting::ratio18_1, true);
motor RightMotorC(PORT3, gearSetting::ratio18_1, false);

motor Intake(PORT14, gearSetting::ratio6_1, false);
motor Chainlift(PORT11, gearSetting::ratio18_1, false);
motor MogoMech1(PORT12, gearSetting::ratio36_1, false);
motor MogoMech2(PORT13, gearSetting::ratio36_1, true);

optical ColorSensor(NULL);

brain Brain;
controller Controller1(controllerType::primary);

Drive drive;