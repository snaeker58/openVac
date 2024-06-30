#include <MotorDrive.h>

const int drivePin1 = 2;
const int drivePin2 = 3;
MotorDrive motor(drivePin1, drivePin2);

void setup() {
  for (int i = 0; i < 20; i++) {
      motor.forward();
    delay(100);
    motor.backward();
    delay(100);
    motor.forward();
    delay(100);
    motor.backward();
    delay(100);
    }
    motor.stop();
}

void loop() {}

