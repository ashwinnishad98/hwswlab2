#include <Arduino.h>

const int analogPin=D0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  //read analog val
  int adc=analogRead(analogPin);

  //convert adc readings to voltage
  float voltage=(adc/4095.0)*3.3;

  //display adc and voltage readings
  Serial.print("ADC Value: ");
  Serial.print(adc);
  Serial.print(", Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(1000);
}