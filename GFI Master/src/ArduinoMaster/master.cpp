#include <Arduino.h>  // Only used for on ATOM 


//  This is the LED pins, you can use Analog as Digital Pins
//  The order of the LED pins corresponds to the order it should be wired in the keyboard
const int ledpin[] = {A0,A1,A2,A3,A5,A6,A7,13,12,11,10,9,8,7,6,5,4,3,2,1};

// This the button pins, the order of the button pins corresponds to the order it should be wired on the keyboard
const int button[] = {22,23,24,25,26,27,28,29,30,32,34,36,38,40,42,44,46,48,50,52};
int bval[20]={};

// This is what will get written to serial monitor when a key pressed. The keys have to be wired in the correct order
char key[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S' ,'T' };


void setup() {
//  LED pins
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A6, OUTPUT);
  pinMode(A7, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);

//  Button pins
  pinMode(22, INPUT);
  pinMode(23, INPUT);
  pinMode(24, INPUT);
  pinMode(25, INPUT);
  pinMode(26, INPUT);
  pinMode(27, INPUT);
  pinMode(28, INPUT);
  pinMode(29, INPUT);
  pinMode(30, INPUT);
  pinMode(32, INPUT);
  pinMode(34, INPUT);
  pinMode(36, INPUT);
  pinMode(38, INPUT);
  pinMode(40, INPUT);
  pinMode(42, INPUT);
  pinMode(44, INPUT);
  pinMode(46, INPUT);
  pinMode(48, INPUT);
  pinMode(50, INPUT);
  pinMode(52, INPUT);

  Serial.begin(9600);

}

void loop() {

  bval[0] = digitalRead(button[0]);
  bval[1] = digitalRead(button[1]);
  bval[2] = digitalRead(button[2]);
  bval[3] = digitalRead(button[3]);
  bval[4] = digitalRead(button[4]);
  bval[5] = digitalRead(button[5]);
  bval[6] = digitalRead(button[6]);
  bval[7] = digitalRead(button[7]);
  bval[8] = digitalRead(button[8]);
  bval[9] = digitalRead(button[9]);
  bval[10] = digitalRead(button[10]);
  bval[11] = digitalRead(button[11]);
  bval[12] = digitalRead(button[12]);
  bval[13] = digitalRead(button[13]);
  bval[14] = digitalRead(button[14]);
  bval[15] = digitalRead(button[15]);
  bval[16] = digitalRead(button[16]);
  bval[17] = digitalRead(button[17]);
  bval[18] = digitalRead(button[18]);
  bval[19] = digitalRead(button[19]);
  bval[20] = digitalRead(button[20]);

  for (int x=0;x<21;x++)
  {
    if(bval[x] == HIGH)
    {
      digitalWrite(ledpin[x],HIGH);
      Serial.println(key[x]);
    }
    else
      digitalWrite(ledpin[x],LOW);
  }

}
