// To complete the VEXcode V5 Text project upgrade process, please follow the
// steps below.
// I COMMITED THIS
// 1. You can use the Robot Configuration window to recreate your V5 devices
//   - including any motors, sensors, 3-wire devices, and controllers.
// 
// 2. All previous code located in main.cpp has now been commented out. You
//   will need to migrate this code to the new "int main" structure created
//   below and keep in mind any new device names you may have set from the
//   Robot Configuration window. 
// 
// If you would like to go back to your original project, a complete backup
// of your original (pre-upgraded) project was created in a backup folder
// inside of this project's folder.

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
}

// // ---- START VEXCODE CONFIGURED DEVICES ----
// // Robot Configuration:
// // [Name]               [Type]        [Port(s)]
// // ---- END VEXCODE CONFIGURED DEVICES ----
// /*----------------------------------------------------------------------------*/
// /*                                                                            */
// /*    Module:       main.cpp                                                  */
// /*    Author:       VEX                                                       */
// /*    Created:      Thu Sep 26 2019                                           */
// /*    Description:  Competition Template                                      */
// /*                                                                            */
// /*----------------------------------------------------------------------------*/
// 
// // ---- START VEXCODE CONFIGURED DEVICES ----
// // Robot Configuration:
// // [Name]               [Type]        [Port(s)]
// // Controller1          controller                    
// // FrontLeft            motor         1               
// // BackLeft             motor         2               
// // FrontRight           motor         9               
// // BackRight            motor         10              
// // WallBoi              motor         3               
// // WallBoi2             motor         4               
// // ---- END VEXCODE CONFIGURED DEVICES ----
// 
// #include "vex.h"
// 
// using namespace vex;
// 
// // A global instance of competition
// competition Competition;
// 
// // define your global instances of motors and other devices here
// 
// /*---------------------------------------------------------------------------*/
// /*                          Pre-Autonomous Functions                         */
// /*                                                                           */
// /*  You may want to perform some actions before the competition starts.      */
// /*  Do them in the following function.  You must return from this function   */
// /*  or the autonomous and usercontrol tasks will not be started.  This       */
// /*  function is only called once after the V5 has been powered on and        */
// /*  not every time that the robot is disabled.                               */
// /*---------------------------------------------------------------------------*/
// 
// void pre_auton(void) {
//   // Initializing Robot Configuration. DO NOT REMOVE!
//   vexcodeInit();
// 
//   // All activities that occur before the competition starts
//   // Example: clearing encoders, setting servo positions, ...
// }
// 
// /*---------------------------------------------------------------------------*/
// /*                                                                           */
// /*                              Autonomous Task                              */
// /*                                                                           */
// /*  This task is used to control your robot during the autonomous phase of   */
// /*  a VEX Competition.                                                       */
// /*                                                                           */
// /*  You must modify the code to add your own robot specific commands here.   */
// /*---------------------------------------------------------------------------*/
// 
// void autonomous(void) {
// 
// 
// BackLeft.spinFor(5,turns);
// FrontLeft.spinFor(5,turns);
// BackRight.spinFor(5,turns);
// FrontRight.spinFor(5,turns);
// 
// vex::task::sleep(1000);
// 
// BackLeft.spinFor(-5,turns);
// FrontLeft.spinFor(-5,turns);
// BackRight.spinFor(-5,turns);
// FrontRight.spinFor(-5,turns);
// 
// 
// 
// 
//   // ..........................................................................
//   // Insert autonomous user code here.
//   // ..........................................................................
// }
// 
// /*---------------------------------------------------------------------------*/
// /*                                                                           */
// /*                              User Control Task                            */
// /*                                                                           */
// /*  This task is used to control your robot during the user control phase of */
// /*  a VEX Competition.                                                       */
// /*                                                                           */
// /*  You must modify the code to add your own robot specific commands here.   */
// /*---------------------------------------------------------------------------*/
// 
// void usercontrol(void) {
//   // User control code here, inside the loop, nightmare nightmare nightmare nightmarere nightmare nightmare nightmare nightmare nightmare nightmare nightmare nightmare nightmare nightmare nightmare nightmare nightmare nightmare nightmare nightmare nightmare nightmare nightmare 
//   while (1) {
// 
//   FrontLeft.spin(forward, Controller1.Axis3.value()*.5, percent);
//   FrontRight.spin(forward, Controller1.Axis2.value()*1, percent);
//   BackLeft.spin(forward, Controller1.Axis3.value()*1, percent);
//   BackRight.spin(forward, Controller1.Axis2.value()*.5, percent);
//   WallBoi.spin(forward, Controller1.ButtonL1.pressing()*100, percent);
//   WallBoi2.spin(forward, Controller1.ButtonR1.pressing()*100, percent);
// 
// 
// if (Controller1.ButtonR2.pressing()*100){
// 
// WallBoi2.spin(reverse);
// }
// 
// 
// else{if (Controller1.ButtonL2.pressing()*100){
// 
// WallBoi.spin(reverse);
// 
// 
// }}
// 
// 
//   
// 
//   }
//  
// 
// 
//     // This is the main execution loop for the user control program.
//     // Each time through the loop your program should update motor + servo
//     // values based on feedback from the joysticks.
// 
//     // ........................................................................
//     // Insert user code here. This is where you use the joystick values to
//     // update your motors, etc.
//     // ........................................................................
// 
//     wait(20, msec); // Sleep the task for a short amount of time to
//                     // prevent wasted resources.
//   }
// 
// 
// //
// // Main will set up the competition functions and callbacks.
// //
// int main() {
//   // Set up callbacks for autonomous and driver control periods.
//   Competition.autonomous(autonomous);
//   Competition.drivercontrol(usercontrol);
// 
//   // Run the pre-autonomous function.
//   pre_auton();
// 
//   // Prevent main from exiting with an infinite loop.
//   while (true) {
//     wait(100, msec);
//   }
// }
// 