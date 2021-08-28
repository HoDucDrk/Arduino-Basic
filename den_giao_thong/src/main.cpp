#include <Arduino.h>

int led_red = 9;
int led_yellow = 10;
int led_green = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_red, HIGH);
  if (digitalRead(led_red) == HIGH)
  {
    digitalWrite(led_yellow, LOW);
    digitalWrite(led_green, LOW);
  }
  delay(1000);
  digitalWrite(led_yellow, HIGH);
  if (digitalRead(led_yellow) == HIGH)
  {
    digitalWrite(led_red, LOW);
    digitalWrite(led_green, LOW);
  }
  delay(1000);
  digitalWrite(led_green, HIGH);
  if (digitalRead(led_green) == HIGH)
  {
    digitalWrite(led_yellow, LOW);
    digitalWrite(led_red, LOW);
  }
  delay(1000);
}