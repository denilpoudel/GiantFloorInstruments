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

requestEvent();




}

void requestEvent(){
  
  buttonvalue = digitalRead(b1);
  buttonvalue2 = digitalRead(b2);
if (buttonvalue == HIGH)
  Wire.write("q");
else if (buttonvalue == LOW)
    Wire.write("d");
else if (buttonvalue2 == HIGH)
  Wire.write("f");
else if (buttonvalue2 == LOW)
    Wire.write("g");
/*
if(digitalRead(b1) == HIGH)
{
  Wire.write("q");
}
if(digitalRead(b1) == LOW)
{
  Wire.write("d");
}
if(digitalRead(b2) == HIGH)
{
  Wire.write("f");
}
if(digitalRead(b2) == LOW)
{
  Wire.write("g");
}
*/
}
