#include <Arduino.h>

void setup() {
  pinMode(13, OUTPUT);
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  int nut = digitalRead(7);
  if(nut == HIGH)
    digitalWrite(13, LOW);
  else 
    digitalWrite(13, HIGH);
}