#include <Arduino.h>
#include <Wire.h>

#define led 8
#define led2 7

void setup() {
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  Wire.requestFrom(8,1); // 6 bytes from address 8

  if (Wire.available()){
    char c = Wire.read();
    delay(2);

    switch (c){
      case 'q':
      digitalWrite(led,HIGH);
      Serial.println('A');
      delay(1000);
      digitalWrite(led, LOW);
      break;
      case 'd':
      digitalWrite(led, LOW);
      break;
      case 'f':
      digitalWrite(led2, HIGH);
      Serial.println('B');
      delay(1000);
      digitalWrite(led2,LOW);
      break;
      case 'g':
      digitalWrite(led2,LOW);
      break;
    }
  }
}
