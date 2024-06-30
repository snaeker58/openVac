#include "MotorDrive.h"

MotorDrive::MotorDrive(int drivePin1, int drivePin2) : _drivePin1(drivePin1), _drivePin2(drivePin2) {
    pinMode(_drivePin1, OUTPUT);
    pinMode(_drivePin2, OUTPUT);
}

void MotorDrive::forward() {
    digitalWrite(_drivePin2, LOW);
    digitalWrite(_drivePin1, HIGH);
}

void MotorDrive::backward() {
    digitalWrite(_drivePin1, LOW);
    digitalWrite(_drivePin2, HIGH);
}

void MotorDrive::stop() {
    digitalWrite(_drivePin1, LOW);
    digitalWrite(_drivePin2, LOW);
}
