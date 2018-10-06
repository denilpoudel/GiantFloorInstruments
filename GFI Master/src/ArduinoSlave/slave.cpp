#include <Arduino.h>
#include <Wire.h>

#define b1 6
#define b2 3

//int buttonvalue = 0;
// int buttonvalue2 = 0;


void requestEvent();


void setup() {
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  digitalWrite(b1,HIGH);
  digitalWrite(b2,HIGH);
  Wire.begin(8); //Address of slave
  Wire.onRequest(requestEvent); // name of function
  Serial.begin(9600);
}

void loop() {
delay (100);
requestEvent();
}

void requestEvent(){
while(digitalRead(b1) == LOW)
  {
    Wire.write("q");
  }
while(digitalRead(b2) == LOW)
{
    Wire.write("f");
}

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
