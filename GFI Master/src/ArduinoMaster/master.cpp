#include <Arduino.h>

int ledpins[] = {1,,2,3, 4, 5, 6, 7, 8, 9}; // LED pins
int pianobuttons[] = {10,11,12,13};
int pianoOn[] = {};




void setup() {
   for(int p=1; p<10; p++)
   {
       pinMode(ledpins[p], OUTPUT); // Set the mode to OUTPUT
   }
   for(int b=10; b<14; b++)
   {
       pinMode(pianobuttons[b], INPUT); // Set the mode to OUTPUT
   }
}

void loop() {
  for(int i = 10; i < 13; i++){
    if (digitalRead(i) == HIGH)
    {
      pianoOn[i] == 1;
    }
    else
    {
      pianoOn[i] == 0;
    }
  }
  for(i=10; i<13; i++)
  {
    for(int z=1; z<10; z++)
      {
        if (pianoOn[x] == 1)
        {
        digitalWrite(z, HIGH);
        }
        if(pianoOn[x] == 0)
        {
        digitalWrite(z, LOW);
        }
    }
  }
}
