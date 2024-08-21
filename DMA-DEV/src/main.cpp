#include <Arduino.h>

#define LED1 21
#define LED2 20

void setup() {
  Serial.begin(115200);
  Serial.println("Code Start");
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  digitalWrite(LED1,1);
  digitalWrite(LED2,0);
  // put your setup code here, to run once:
}

void loop() {

  Serial.println("Time : " + String(millis()));
  digitalWrite(LED1,!digitalRead(LED1));
  digitalWrite(LED2,!digitalRead(LED2));
  delay(1000);
  // put your main code here, to run repeatedly:
}
