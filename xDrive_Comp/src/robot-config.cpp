#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor Motor1 = motor(PORT5, ratio18_1, false);
motor Motor2 = motor(PORT2, ratio18_1, false);
motor Motor3 = motor(PORT9, ratio18_1, true);
motor Motor4 = motor(PORT10, ratio18_1, true);
motor LeftArm = motor(PORT3, ratio18_1, false);
motor RightArm = motor(PORT4, ratio18_1, true);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}