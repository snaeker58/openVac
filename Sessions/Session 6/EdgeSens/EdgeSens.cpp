#include "Arduino.h"
#include "EdgeSens.h"

EdgeSens::EdgeSens(int controlPin, int receiverPin)
  : _irControlPin(controlPin), _irReceiverPin(receiverPin) {} //initializer list is suppossed to be a better approach
                                                            // than initialization in the body (no idea)

void EdgeSens::begin() {
    Serial.begin(9600);
    analogReference(EXTERNAL);
    pinMode(_irControlPin, OUTPUT);
}

bool EdgeSens::edgeTripped() {
    int normalizedProximity = getNormalizedProximity();
    return (normalizedProximity == 600);
}

long EdgeSens::getAmbient() {
    long ambientSignal = 0;
    for (int i = 0; i < 25; i++) {
        ambientSignal += analogRead(_irReceiverPin);
        delayMicroseconds(500);
    }
    ambientSignal /= 25;
    return ambientSignal;
}

long EdgeSens::getActive() {
    long activeSignal = 0;
    digitalWrite(_irControlPin, HIGH);
    for (int i = 0; i < 25; i++) {
        activeSignal += analogRead(_irReceiverPin);
        delayMicroseconds(500);
    }
    activeSignal /= 25;
    digitalWrite(_irControlPin, LOW);
    return activeSignal;
}

int EdgeSens::getProximity() {
    long ambientSignal = getAmbient();
    long activeSignal = getActive();
    int proximity = ambientSignal - activeSignal;
    return proximity;
}

int EdgeSens::getNormalizedProximity() {
    int proximity = getProximity();
    int normalizedProximity = constrain(proximity, 600, 900);
    return normalizedProximity;
}
