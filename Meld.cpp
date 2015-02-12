#include "Arduino.h"
#include "Meld.h"

Meld::Meld()
{
  pinMode(MELD_LOWER_VOLTAGE_PIN, OUTPUT);
};

void Meld::setup()
{
  // This value produces a 66% duty-step to produce exactly 3.3v
  // To avoid undesired oscilation, 
  analogWrite(MELD_LOWER_VOLTAGE_PIN, 169);
}
