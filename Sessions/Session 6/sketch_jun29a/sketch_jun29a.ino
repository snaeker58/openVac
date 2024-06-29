#include <EdgeSens.h>

const int irControlPin = 5;
const int irReceiverPin = A0;

EdgeSens edgeSens(irControlPin, irReceiverPin);

void setup() {
  edgeSens.begin();
  Serial.begin(9600);
}

void loop() {
  Serial.println(edgeSens.edgeTripped());

}
