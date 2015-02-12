/*
  Meld.h - Library to Configure a Meld Device.
*/
#ifndef MELD_h
#define MELD_h

//Reference - http://arduino.cc/en/Hacking/PinMapping168
#define MELD_LOWER_VOLTAGE_PIN 9 //Define the pin used to produce 3.3v

#include "Arduino.h"

class Meld
{
  public:
    Meld();
    void setup();
};

#endif
