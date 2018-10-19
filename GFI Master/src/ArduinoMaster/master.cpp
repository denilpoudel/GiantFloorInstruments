#include <Arduino.h>

const int ledpin[] = {2,3,4};
const int button[] = {9,10,11};

int bval[5]={};

void setup() {
  for (int x=1;x<9;x++){
    pinMode(ledpin[x],OUTPUT);
  }
  for (int b=9;b<14;b++){
    pinMode(button[b],INPUT);
  }
}

void loop() {

  bval[0] = digitalRead(button[0]);
  bval[1] = digitalRead(button[1]);
  bval[2] = digitalRead(button[2]);
  bval[3] = digitalRead(button[3]);

  for (int x=0;x<4;x++)
  {
    if(bval[x] == HIGH)
    {
      digitalWrite(ledpin[x],HIGH);
    }
    else
      digitalWrite(ledpin[x],LOW);
  }

}
