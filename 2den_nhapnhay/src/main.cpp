#include <Arduino.h>

int led_blue = 12;
int led_green = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_green, OUTPUT);
  pinMode(led_blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_green, HIGH);
  digitalWrite(led_blue, LOW);
  delay(1000);
  digitalWrite(led_blue, HIGH);
  digitalWrite(led_green, LOW);
  delay(1000);
}