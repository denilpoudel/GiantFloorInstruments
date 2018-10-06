#include <Arduino.h>
#include <Wire.h>

#define button 6

int buttonvalue = 0;

void requestEvent();

void setup() {
  pinMode(button, INPUT);
  Wire.begin(8); //Address of slave
  Wire.onRequest(requestEvent); // name of function
  Serial.begin(9600);
}

void loop() {
delay (100);
requestEvent();

}

void requestEvent(){
buttonvalue = digitalRead(button);

if (buttonvalue == HIGH)
  Wire.write("q");
if (buttonvalue == LOW)
    Wire.write("d");
}
