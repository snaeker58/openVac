#ifndef EDGESENS_H
#define EDGESENS_H

#include <Arduino.h>

class EdgeSens {
public:
    EdgeSens(int controlPin, int receiverPin);
    bool edgeTripped();

private:
    int _irControlPin;
    int _irReceiverPin;

    long getAmbient();
    long getActive();
    int getProximity();
    int getNormalizedProximity();
};

#endif
