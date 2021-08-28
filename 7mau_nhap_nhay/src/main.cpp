#include <Arduino.h>
//khai báo đèn led
// int led_purple = 1;
// int led_red = 2;
// int led_green = 3;
// int led_yellow = 4;
// int led_pink = 5;
// int led_orange = 6;
// int led_white = 7;

void setup() {
  // put your setup code here, to run once:
  for (size_t i = 0; i < 8; i++)
  {
    pinMode(i,OUTPUT);
  }
  
  
}

void loop() {
  for (int i = 0; i <= 9; i++) { 
    digitalWrite(i, HIGH);
    delay(300);
    digitalWrite(i, LOW);
  }
}