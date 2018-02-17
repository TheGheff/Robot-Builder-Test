// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutoDelayDrive.h"
#include "Commands/AutoDistForward.h"
#include "Commands/AutoForward.h"
#include "Commands/AutoRotate.h"
#include "Commands/DriveWithGamepad.h"
#include "Commands/GobbleBlock.h"
#include "Commands/GrabBlock.h"
#include "Commands/LiftDown.h"
#include "Commands/LiftRun.h"
#include "Commands/LiftStop.h"
#include "Commands/LiftUp.h"
#include "Commands/ShootBlock.h"
#include "Commands/SpitBlock.h"
#include "Commands/StopIntake.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    nonDriveGamepad.reset(new frc::Joystick(2));
    
    nD_LiftDOWN.reset(new frc::JoystickButton(nonDriveGamepad.get(), 5));
    nD_LiftDOWN->WhileHeld(new LiftDown());
    nD_LiftUP.reset(new frc::JoystickButton(nonDriveGamepad.get(), 6));
    nD_LiftUP->WhileHeld(new LiftUp());
    nD_Grab.reset(new frc::JoystickButton(nonDriveGamepad.get(), 1));
    nD_Grab->WhileHeld(new GrabBlock());
    joystick.reset(new frc::Joystick(1));
    
    jLiftDown.reset(new frc::JoystickButton(joystick.get(), 7));
    jLiftDown->WhileHeld(new LiftDown());
    jLiftUp.reset(new frc::JoystickButton(joystick.get(), 8));
    jLiftUp->WhileHeld(new LiftUp());
    jShoot.reset(new frc::JoystickButton(joystick.get(), 6));
    jShoot->WhileHeld(new ShootBlock());
    jGobble.reset(new frc::JoystickButton(joystick.get(), 4));
    jGobble->WhileHeld(new GobbleBlock());
    jSpit.reset(new frc::JoystickButton(joystick.get(), 5));
    jSpit->WhileHeld(new SpitBlock());
    jGrab.reset(new frc::JoystickButton(joystick.get(), 3));
    jGrab->WhileHeld(new GrabBlock());
    gamepad.reset(new frc::Joystick(0));
    
    shoot.reset(new frc::JoystickButton(gamepad.get(), 4));
    shoot->WhileHeld(new ShootBlock());
    gobble.reset(new frc::JoystickButton(gamepad.get(), 3));
    gobble->WhileHeld(new GobbleBlock());
    spit.reset(new frc::JoystickButton(gamepad.get(), 2));
    spit->WhileHeld(new SpitBlock());
    grab.reset(new frc::JoystickButton(gamepad.get(), 1));
    grab->WhileHeld(new GrabBlock());

    // SmartDashboard Buttons
    frc::SmartDashboard::PutData("AutoDelayDrive", new AutoDelayDrive());
    frc::SmartDashboard::PutData("AutoRotate", new AutoRotate());
    frc::SmartDashboard::PutData("AutoDistForward: MinDrive", new AutoDistForward(72, 0, 0));
    frc::SmartDashboard::PutData("LiftRun", new LiftRun());
    frc::SmartDashboard::PutData("LiftDown", new LiftDown());
    frc::SmartDashboard::PutData("LiftUp", new LiftUp());
    frc::SmartDashboard::PutData("ShootBlock", new ShootBlock());
    frc::SmartDashboard::PutData("GobbleBlock", new GobbleBlock());
    frc::SmartDashboard::PutData("SpitBlock", new SpitBlock());
    frc::SmartDashboard::PutData("GrabBlock", new GrabBlock());
    frc::SmartDashboard::PutData("AutoForward", new AutoForward());
    frc::SmartDashboard::PutData("DriveWithGamepad: Stationary", new DriveWithGamepad(0, 0));

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<frc::Joystick> OI::getGamepad() {
   return gamepad;
}

std::shared_ptr<frc::Joystick> OI::getJoystick() {
   return joystick;
}

std::shared_ptr<frc::Joystick> OI::getNonDriveGamepad() {
   return nonDriveGamepad;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
