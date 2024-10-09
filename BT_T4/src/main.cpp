#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  pinMode(LDR_PIN, INPUT);
}

void loop() {
  int ADCvalue = analogRead(LDR_PIN);
  Serial.print(">ADCvalue:");
  Serial.println(ADCvalue);
}
