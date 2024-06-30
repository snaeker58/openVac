#ifndef MotorDrive_h
#define MotorDrive_h

#include <Arduino.h>

class MotorDrive {
public:
    MotorDrive(int pin1, int pin2);
    void forward();
    void backward();
    void stop();
private:
    int _drivePin1;
    int _drivePin2;
};

#endif
