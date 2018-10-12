#include <Arduino.h>
#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  Wire.requestFrom(2,1); // 1 byte from address 2

  if (Wire.available()){
    char c = Wire.read();
    delay(2);

    switch (c){
      case 'c':
      Serial.println('A');
      break;
      case 'd':
      Serial.println('B');
      break;
      case 'e':
      Serial.println('C');
      break;
      case 'f':
      Serial.println('D');
      break;
      case 'g':
      Serial.println('E');
      break;
      case 'a':
      Serial.println('F');
      break;
      case 'b':
      Serial.println('G');
      break;
      case 'v': // Should be c but cant use twice
      Serial.println('H');
      break;
    }
  }
}
