#include "cardio.h"
unsigned long time;

void setup() {
  Serial.begin(9600);
  time = millis();
  while (millis()-time<15000){
    cardio();
  }
}
void loop() {
}
