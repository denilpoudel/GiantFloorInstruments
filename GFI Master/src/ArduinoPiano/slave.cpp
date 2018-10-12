#include <Arduino.h>
#include <Wire.h>


// Inputs
#define b1 2
#define b2 3
#define b3 4
#define b4 5
#define b5 6
#define b6 7
#define b7 8
#define b8 9

//LEDS (Testing on Nano)
#define led1 10
#define led2 11
#define led3 12

// Functions
void requestEvent();

void setup() {
  Wire.begin(2); //Address of slave
  Wire.onRequest(requestEvent); // name of function
  Serial.begin(9600);


// Inputs
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
  pinMode(b4, INPUT);
  pinMode(b5, INPUT);
  pinMode(b6, INPUT);
  pinMode(b7, INPUT);
  pinMode(b8, INPUT);

  digitalWrite(b1,LOW);
  digitalWrite(b2,LOW);
  digitalWrite(b3,LOW);
  digitalWrite(b4,LOW);
  digitalWrite(b5,LOW);
  digitalWrite(b6,LOW);
  digitalWrite(b7,LOW);
  digitalWrite(b8,LOW);

// Outputs (testing on nano)
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
requestEvent();
}

void requestEvent(){
while(digitalRead(b1) == HIGH)
  {
    Wire.write("c");
    digitalWrite(led1,HIGH);
    delay(1000);
  }

while(digitalRead(b2) == HIGH)
{
    Wire.write("d");
    digitalWrite(led2,HIGH);
    delay(1000);
}
while(digitalRead(b3) == HIGH)
{
    Wire.write("e");
    digitalWrite(led3,HIGH);
    delay(1000);
}
while(digitalRead(b4) == HIGH)
{
    Wire.write("f");
    //digitalWrite(led4,HIGH);
    delay(1000);
}
while(digitalRead(b5) == HIGH)
  {
    Wire.write("g");
    //digitalWrite(led5,HIGH);
    delay(1000);
  }

while(digitalRead(b6) == HIGH)
{
    Wire.write("a");
    //digitalWrite(led6,HIGH);
    delay(1000);
}
while(digitalRead(b7) == HIGH)
{
    Wire.write("b");
    //digitalWrite(led7,HIGH);
    delay(1000);
}
while(digitalRead(b8) == HIGH)
{
    Wire.write("v"); // Should be c but cant use c twice
    //digitalWrite(led8,HIGH);
    delay(1000);
}
}
