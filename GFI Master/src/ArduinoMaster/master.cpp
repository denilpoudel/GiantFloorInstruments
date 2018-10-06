#include <Arduino.h>
#include <Wire.h>

#define led 8

void setup() {
  pinMode(led, OUTPUT);
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  Wire.requestFrom(8,1); // 6 bytes from address 8
  Serial.println("test1243");
  if (Wire.available()){
    char c = Wire.read();
    delay(2);

    switch (c){
      case 'q':
      digitalWrite(led,HIGH);
      Serial.println("HIGH");
      break;
      case 'd':
      digitalWrite(led, LOW);
      Serial.println("LOW");
      break;
    }
  }
}
