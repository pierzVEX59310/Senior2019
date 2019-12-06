/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Simon Kroll                                               */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition for XDrive                                    */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor1               motor         5               
// Motor2               motor         2               
// Motor3               motor         9               
// Motor4               motor         10              
// LeftArm              motor         3               
// RightArm             motor         4               
// ---- END VEXCODE CONFIGURED DEVICES ----
//----- DRIVETRAIN CONFIGURATION ----
/*+--------------------------------------------------+
|5(1)/--------\ 3                                    |
|    |        |                                      |
|    |        |                                      |
|    |        |                                      |
|  2 \--------/ 4                                    |
|                                                    |
|                                                    |
+----------------------------------------------------+
*/
#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;


void xDrive(motor frontLeft, motor rearLeft, motor frontRight, motor rearRight, controller input,
            int setValue = 10) {
  frontLeft.setVelocity((input.Axis3.position(percent) +
                  (input.ButtonL1.pressing() ? -setValue : 0) +
                  (input.ButtonR1.pressing() ? setValue : 0)),
                 percent);
  rearLeft.setVelocity((input.Axis3.position(percent) +
                  (input.ButtonL1.pressing() ? setValue : 0) +
                  (input.ButtonR1.pressing() ? -setValue : 0)),
                 percent);
  frontRight.setVelocity((input.Axis2.position(percent) +
                  (input.ButtonL1.pressing() ? setValue : 0) +
                  (input.ButtonR1.pressing() ? -setValue : 0)),
                 percent);
  rearRight.setVelocity((input.Axis2.position(percent) +
                  (input.ButtonL1.pressing() ? -setValue : 0) +
                  (input.ButtonR1.pressing() ? setValue : 0)),
                 percent);
  frontLeft.spin(forward);
  rearLeft.spin(forward);
  frontRight.spin(forward);
  rearRight.spin(forward);
}

void setxDrive(motor frontLeft, motor rearLeft, motor frontRight, motor rearRight, int speed, int duration){
  frontLeft.setVelocity(speed, percent);
  rearLeft.setVelocity(speed, percent);
  frontRight.setVelocity(speed, percent);
  rearLeft.setVelocity(speed, percent);
  frontLeft.spin(forward);
  rearLeft.spin(forward);
  frontRight.spin(forward);
  rearRight.spin(forward);
  int time = Brain.Timer.value();
  while (Brain.Timer.value() - time < duration);
  frontLeft.stop();
  rearLeft.stop();
  frontRight.stop();
  rearRight.stop();
}

void setArms(int value) {
  RightArm.setVelocity(value, percent);
  LeftArm.setVelocity(value, percent);
  RightArm.spin(forward);
  LeftArm.spin(forward);
}

void pre_auton(void) { vexcodeInit(); }

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  setxDrive(Motor1,Motor2,Motor3,Motor4, 50, 3);
  setxDrive(Motor1,Motor2,Motor3,Motor4, -50, 3);
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {
  while (1) {
    xDrive(Motor1, Motor2, Motor3, Motor4, Controller1, 15);
    if (Controller1.ButtonLeft.pressing() &&
        !Controller1.ButtonRight.pressing())
      setArms(50);
    else if (Controller1.ButtonRight.pressing() &&
             !Controller1.ButtonLeft.pressing())
      setArms(-50);
    else
      setArms(0);

    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}

int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
