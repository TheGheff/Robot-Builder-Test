// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "AutoRightSideForward.h"
#include "AutoSpit.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

AutoRightSideForward::AutoRightSideForward(double DistanceForward, double StartDelay): frc::Command() {
    m_DistanceForward = DistanceForward;
    m_StartDelay = StartDelay;
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void AutoRightSideForward::Initialize() {
	SetTimeout(m_StartDelay);
}

// Called repeatedly when this Command is scheduled to run
void AutoRightSideForward::Execute() {

	if (!l_alreadyRunOnce)
	{
		Addsequential(new AutoLift(.1));
		AddSequential(new AutoDistForward(132, 0));
		std::string gameData;
		gameData = frc::DriverStation::GetInstance().GetGameSpecificMessage();



		if(gameData.length > 0)
		  {
			  if(gameData[0] == 'L')
			  {
				  //spit block
				  AddSequential(new AutoSpit());
			  }
			  else
			  { //Stop

			  }
		   }
		m_alreadyRunOnce = true;
	}


}

// Make this return true when this Command no longer needs to run execute()
bool AutoRightSideForward::IsFinished() {
    return IsTimedOut();
}

// Called once after isFinished returns true
void AutoRightSideForward::End() {
	//Lift up
		Robot::lift->StopLift();

		m_alreadyRunOnce = false;

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoRightSideForward::Interrupted() {

}
