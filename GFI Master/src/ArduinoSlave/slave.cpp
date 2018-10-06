#include <Arduino.h>
#include <Wire.h>

#define b1 6
#define b2 3

int buttonvalue = 0;
int buttonvalue2 = 0;

void requestEvent();


void setup() {
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  Wire.begin(8); //Address of slave
  Wire.onRequest(requestEvent); // name of function
  Serial.begin(9600);
}

void loop() {
delay (100);
buttonvalue = digitalRead(b1);
buttonvalue2 = digitalRead(b2);
requestEvent();



}

void requestEvent(){

if (buttonvalue == HIGH)
  Wire.write("q");
if (buttonvalue == LOW)
    Wire.write("d");
if (buttonvalue2 == HIGH)
  Wire.write("f");
if (buttonvalue2 == LOW)
    Wire.write("g");
}
