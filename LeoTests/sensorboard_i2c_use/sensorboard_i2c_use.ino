#include <Wire.h>

byte i2c_address = 0x77;
int value = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin();
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Wire.beginTransmission(i2c_address);
  Wire.write(0);
  Wire.endTransmission();
  Wire.requestFrom(i2c_address, 1);
  while(Wire.available() == 0);
  value = Wire.read();
  Serial.print("on board sensor: ");
  Serial.print(value);
  Serial.println(" ");
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}
