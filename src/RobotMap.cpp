// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of

#include "WPILib.h"//added manually

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
#include "ctre/Phoenix.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<frc::Encoder> RobotMap::driveTrainEncoderRight;
std::shared_ptr<frc::Encoder> RobotMap::driveTrainEncoderLeft;
std::shared_ptr<WPI_TalonSRX> RobotMap::driveTrainDriveLeft;
std::shared_ptr<WPI_TalonSRX> RobotMap::driveTrainDriveRight;
std::shared_ptr<frc::DifferentialDrive> RobotMap::driveTrainTank;
std::shared_ptr<frc::AnalogGyro> RobotMap::driveTrainAnalogGyro1;
std::shared_ptr<frc::SpeedController> RobotMap::liftLift;
std::shared_ptr<frc::DigitalInput> RobotMap::liftBottomSwitch;
std::shared_ptr<frc::DigitalInput> RobotMap::liftTopSwitch;
std::shared_ptr<frc::SpeedController> RobotMap::intakeIntakeLeft;
std::shared_ptr<frc::SpeedController> RobotMap::intakeIntakeRight;
std::shared_ptr<frc::SpeedController> RobotMap::riserRiser;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    frc::LiveWindow *lw = frc::LiveWindow::GetInstance();

    driveTrainEncoderRight.reset(new frc::Encoder(0, 1, true, frc::Encoder::k4X));
    lw->AddSensor("DriveTrain", "EncoderRight", driveTrainEncoderRight);
    driveTrainEncoderRight->SetDistancePerPulse(1.0);
    driveTrainEncoderRight->SetPIDSourceType(frc::PIDSourceType::kDisplacement);
    driveTrainEncoderLeft.reset(new frc::Encoder(2, 3, true, frc::Encoder::k4X));
    lw->AddSensor("DriveTrain", "EncoderLeft", driveTrainEncoderLeft);
    driveTrainEncoderLeft->SetDistancePerPulse(1.0);
    driveTrainEncoderLeft->SetPIDSourceType(frc::PIDSourceType::kDisplacement);
    driveTrainDriveLeft.reset(new WPI_TalonSRX(1));
    
    
    driveTrainDriveRight.reset(new WPI_TalonSRX(2));
    
    
    driveTrainTank.reset(new frc::DifferentialDrive(*driveTrainDriveLeft, *driveTrainDriveRight));
    lw->AddActuator("DriveTrain", "Tank", driveTrainTank);
    driveTrainTank->SetSafetyEnabled(false);
        driveTrainTank->SetExpiration(0.1);
        driveTrainTank->SetMaxOutput(1.0);

    driveTrainAnalogGyro1.reset(new frc::AnalogGyro(0));
    lw->AddSensor("DriveTrain", "AnalogGyro 1", driveTrainAnalogGyro1);
    driveTrainAnalogGyro1->SetSensitivity(0.007);
    liftLift.reset(new frc::Spark(2));
    lw->AddActuator("Lift", "Lift", std::static_pointer_cast<frc::Spark>(liftLift));
    
    liftBottomSwitch.reset(new frc::DigitalInput(5));
    lw->AddSensor("Lift", "BottomSwitch", liftBottomSwitch);
    
    liftTopSwitch.reset(new frc::DigitalInput(4));
    lw->AddSensor("Lift", "TopSwitch", liftTopSwitch);
    
    intakeIntakeLeft.reset(new frc::Spark(0));
    lw->AddActuator("Intake", "IntakeLeft", std::static_pointer_cast<frc::Spark>(intakeIntakeLeft));
    
    intakeIntakeRight.reset(new frc::Spark(1));
    lw->AddActuator("Intake", "IntakeRight", std::static_pointer_cast<frc::Spark>(intakeIntakeRight));
    
    riserRiser.reset(new frc::Spark(4));
    lw->AddActuator("Riser", "Riser", std::static_pointer_cast<frc::Spark>(riserRiser));
    


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
