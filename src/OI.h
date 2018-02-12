// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	
	
	
	
	
	
	
	
	
	
	
	std::shared_ptr<frc::Joystick> joystick;
	std::shared_ptr<frc::JoystickButton> jLiftDown;
	std::shared_ptr<frc::JoystickButton> jLiftUp;
	std::shared_ptr<frc::JoystickButton> jShoot;
	std::shared_ptr<frc::JoystickButton> jGobble;
	std::shared_ptr<frc::JoystickButton> jSpit;
	std::shared_ptr<frc::JoystickButton> jGrab;
	std::shared_ptr<frc::Joystick> gamepad;
	std::shared_ptr<frc::JoystickButton> shoot;
	std::shared_ptr<frc::JoystickButton> gobble;
	std::shared_ptr<frc::JoystickButton> spit;
	std::shared_ptr<frc::JoystickButton> grab;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	OI();

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	std::shared_ptr<frc::Joystick> getGamepad();
	std::shared_ptr<frc::Joystick> getJoystick();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
};

#endif
