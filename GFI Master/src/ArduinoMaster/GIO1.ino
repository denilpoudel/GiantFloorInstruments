const int ledpin[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

// This the button pins, the order of the button pins corresponds to the order it should be wired on the keyboard
const int button[] = {22,24,26,28,30,32,34,36,38,40,42,44};
int bval[] = {0, 0, 0, 0, 0, 0,0,0,0,0,0,0};
int lastbval[] = {0, 0, 0, 0, 0, 0,0,0,0,0,0,0};
int lastDb[] = {0, 0, 0, 0, 0, 0,0,0,0,0,0,0};
int dbButton[] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};

// This is what will get written to serial monitor when a key pressed. The keys have to be wired in the correct order
char key[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S' , 'T' };

unsigned long dbDelay = 10; //10 ms of stable input in order for signal to count
//unsigned long lastDb = 0;//last time signal changed
//int dbButton = LOW;

void setup() {
  Serial.begin(9600);

  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);  

  
  pinMode(22, INPUT);
  pinMode(24, INPUT);
  pinMode(26, INPUT);
  pinMode(28, INPUT);
  pinMode(30, INPUT);
  pinMode(32, INPUT);
  pinMode(34, INPUT);
  pinMode(36, INPUT);
  pinMode(38, INPUT);
  pinMode(40, INPUT);
  pinMode(42, INPUT);
  pinMode(44, INPUT);

}

void loop() {
  //need to implement debounce, make sure input is stable for 50 ms before outputting a signal


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

  /* legacy code
  if (bval[0] != lastbval[0])
  {
    Serial.println(key[0]);
    if (bval[0] == HIGH) {
      Serial.println(key[0]);
      digitalWrite(ledpin[0], HIGH);
    }
    else
      digitalWrite(ledpin[0], LOW);
  }
  if (bval[1] != lastbval[1])
  {
    if (bval[1] == HIGH) {
      Serial.println(key[1]);
      digitalWrite(ledpin[1], HIGH);
    }
    else
      digitalWrite(ledpin[1], LOW);
  }
  if (bval[2] != lastbval[2])
  {
    if (bval[2] == HIGH) {
      Serial.println(key[2]);
      digitalWrite(ledpin[2], HIGH);
    }
    else
      digitalWrite(ledpin[2], LOW);
  }

  if (bval[3] != lastbval[3])
  {
    if (bval[3] == HIGH) {
      Serial.println(key[3]);
      digitalWrite(ledpin[3], HIGH);
    }
    else
      digitalWrite(ledpin[3], LOW);

  }
  if (bval[4] != lastbval[4])
  {
    if (bval[4] == HIGH) {
      Serial.println(key[4]);
      digitalWrite(ledpin[4], HIGH);
    }
    else
      digitalWrite(ledpin[4], LOW);

  }*/
  /*******************************************/
  //debounce logic
  if (bval[0] != lastbval[0])
  {
    lastDb[0] = millis();

  }

  if ((millis() - lastDb[0]) > dbDelay) {
    if (bval[0] != dbButton[0]) {
      dbButton[0] = bval[0];
      if (dbButton[0] == HIGH) {
        Serial.println(key[0]);
        digitalWrite(ledpin[0], LOW);
      }
      else
        digitalWrite(ledpin[0], LOW);
    }
   
  }
  lastbval[0] = bval[0];
  /*****************************************/
    /*******************************************/
  //debounce logic
  if (bval[1] != lastbval[1])
  {
    lastDb[1] = millis();

  }

  if ((millis() - lastDb[1]) > dbDelay) {
    if (bval[1] != dbButton[1]) {
      dbButton[1] = bval[1];
      if (dbButton[1] == HIGH) {
        Serial.println(key[1]);
      }

    }
   
  }
  lastbval[1] = bval[1];
  /*****************************************/
    /*******************************************/
  //debounce logic
  if (bval[2] != lastbval[2])
  {
    lastDb[2] = millis();

  }

  if ((millis() - lastDb[2]) > dbDelay) {
    if (bval[2] != dbButton[2]) {
      dbButton[2] = bval[2];
      if (dbButton[2] == HIGH) {
        Serial.println(key[2]);
      }

    }
   
  }
  lastbval[2] = bval[2];
  /*****************************************/
    /*******************************************/
  //debounce logic
  if (bval[3] != lastbval[3])
  {
    lastDb[3] = millis();

  }

  if ((millis() - lastDb[3]) > dbDelay) {
    if (bval[3] != dbButton[3]) {
      dbButton[3] = bval[3];
      if (dbButton[3] == HIGH) {
        Serial.println(key[3]);
      }

    }
   
  }
  lastbval[3] = bval[3];
  /*****************************************/
    /*******************************************/
  //debounce logic
  if (bval[4] != lastbval[4])
  {
    lastDb[4] = millis();

  }

  if ((millis() - lastDb[4]) > dbDelay) {
    if (bval[4] != dbButton[4]) {
      dbButton[4] = bval[4];
      if (dbButton[4] == HIGH) {
        Serial.println(key[4]);
      }

    }
   
  }
  lastbval[4] = bval[4];
  /*****************************************/  
  /*******************************************/
  //debounce logic
  if (bval[5] != lastbval[5])
  {
    lastDb[5] = millis();

  }

  if ((millis() - lastDb[5]) > dbDelay) {
    if (bval[5] != dbButton[5]) {
      dbButton[5] = bval[5];
      if (dbButton[5] == HIGH) {
        Serial.println(key[5]);
      }

    }
   
  }
  lastbval[5] = bval[5];
  /*****************************************/
  /*******************************************/
  //debounce logic
  if (bval[6] != lastbval[6])
  {
    lastDb[6] = millis();

  }

  if ((millis() - lastDb[6]) > dbDelay) {
    if (bval[6] != dbButton[6]) {
      dbButton[6] = bval[6];
      if (dbButton[6] == HIGH) {
        Serial.println(key[6]);
      }

    }
   
  }
  lastbval[6] = bval[6];
  /*****************************************/
    /*******************************************/
  //debounce logic
  if (bval[7] != lastbval[7])
  {
    lastDb[7] = millis();

  }

  if ((millis() - lastDb[7]) > dbDelay) {
    if (bval[7] != dbButton[7]) {
      dbButton[7] = bval[7];
      if (dbButton[7] == HIGH) {
        Serial.println(key[7]);
      }

    }
   
  }
  lastbval[7] = bval[7];
  /*****************************************/
    /*******************************************/
  //debounce logic
  if (bval[8] != lastbval[8])
  {
    lastDb[8] = millis();

  }

  if ((millis() - lastDb[8]) > dbDelay) {
    if (bval[8] != dbButton[8]) {
      dbButton[8] = bval[8];
      if (dbButton[8] == HIGH) {
        Serial.println(key[8]);
      }

    }
   
  }
  lastbval[8] = bval[8];
  /*****************************************/
    /*******************************************/
  //debounce logic
  if (bval[9] != lastbval[9])
  {
    lastDb[9] = millis();

  }

  if ((millis() - lastDb[9]) > dbDelay) {
    if (bval[9] != dbButton[9]) {
      dbButton[9] = bval[9];
      if (dbButton[9] == HIGH) {
        Serial.println(key[9]);
      }

    }
   
  }
  lastbval[9] = bval[9];
  /*****************************************/
    /*******************************************/
  //debounce logic
  if (bval[10] != lastbval[10])
  {
    lastDb[10] = millis();

  }

  if ((millis() - lastDb[10]) > dbDelay) {
    if (bval[10] != dbButton[10]) {
      dbButton[10] = bval[10];
      if (dbButton[10] == HIGH) {
        Serial.println(key[10]);
      }

    }
   
  }
  lastbval[10] = bval[10];
  /*****************************************/
    /*******************************************/
  //debounce logic
  if (bval[11] != lastbval[11])
  {
    lastDb[11] = millis();

  }

  if ((millis() - lastDb[11]) > dbDelay) {
    if (bval[11] != dbButton[11]) {
      dbButton[11] = bval[11];
      if (dbButton[11] == HIGH) {
        Serial.println(key[11]);
      }

    }
   
  }
  lastbval[11] = bval[11];
  /*****************************************/  
    /* legacy code
      if (bval[5] == HIGH) {
      Serial.println(key[5]);
      digitalWrite(ledpin[5], HIGH);
      }
      else
      digitalWrite(ledpin[5], LOW);
    */

  /*
  lastbval[0] = bval[0];
  lastbval[1] = bval[1];
  lastbval[2] = bval[2];
  lastbval[3] = bval[3];
  lastbval[4] = bval[4];
  */

}
