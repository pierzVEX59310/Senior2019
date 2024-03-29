#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor FrontLeft = motor(PORT1, ratio18_1, false);
motor BackLeft = motor(PORT2, ratio18_1, false);
motor FrontRight = motor(PORT9, ratio18_1, true);
motor BackRight = motor(PORT10, ratio18_1, true);
motor WallBoi = motor(PORT3, ratio18_1, true);
motor WallBoi2 = motor(PORT4, ratio18_1, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}