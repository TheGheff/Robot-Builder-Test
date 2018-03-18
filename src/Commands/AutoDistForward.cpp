// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "AutoDistForward.h"
#include <string.h>
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

AutoDistForward::AutoDistForward(double Distance_Inches, double Start_Delay): frc::Command() {
    m_Distance_Inches = Distance_Inches;
    m_Start_Delay = Start_Delay;
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void AutoDistForward::Initialize() {
	SetTimeout(10);
	RobotMap::driveTrainEncoderLeft->Reset();
	RobotMap::driveTrainEncoderRight->Reset();
}

// Called repeatedly when this Command is scheduled to run
void AutoDistForward::Execute() {


	m_Dist_Traveled_Left = RobotMap::driveTrainEncoderLeft->GetDistance();
	m_Dist_Traveled_Right = RobotMap::driveTrainEncoderRight->GetDistance();

	Robot::driveTrain->driveStraight(.2, .2, m_Dist_Traveled_Left, m_Dist_Traveled_Right );
		//Robot::driveTrain->drivePrecisionGamepad(.5,.5);

}

// Make this return true when this Command no longer needs to run execute()
bool AutoDistForward::IsFinished() {

	m_Dist_Traveled_Left = RobotMap::driveTrainEncoderLeft->GetDistance();
	m_Dist_Traveled_Right = RobotMap::driveTrainEncoderRight->GetDistance();


//if ((m_Dist_Traveled_Left > m_Distance_Inches))// || (m_Dist_Traveled_Right > m_Distance_Inches))
//{//
		return ((m_Dist_Traveled_Left >= m_Distance_Inches)  || (m_Dist_Traveled_Right >= m_Distance_Inches));// || (IsTimedOut());

    //return false;
}

// Called once after isFinished returns true
void AutoDistForward::End() {
	//m_Dist_Traveled_Left = 0;
	//m_Dist_Traveled_Right = 0;
	//RobotMap::driveTrainEncoderLeft->Reset();
	//RobotMap::driveTrainEncoderRight->Reset();
	Robot::driveTrain->drivePrecisionGamepad(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDistForward::Interrupted() {
		End();
}
