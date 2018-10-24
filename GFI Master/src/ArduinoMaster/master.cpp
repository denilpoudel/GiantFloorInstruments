#include <Arduino.h>  // Only used for on ATOM


//  This is the LED pins, you can use Analog as Digital Pins
//  The order of the LED pins corresponds to the order it should be wired in the keyboard
const int ledpin[] = {A0,A1,A2,A3,A5,A6,A7,13,12,11,10,9,8,7,6,5,4,3,2,1};

// This the button pins, the order of the button pins corresponds to the order it should be wired on the keyboard
const int button[] = {22,23,24,25,26,27,28,29,30,32,34,36,38,40,42,44,46,48,50,52};
int bval[]={};
int lastbval[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

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

if (bval[0] != lastbval[0]){
    if (bval[0] == HIGH) {
      Serial.println(key[0]);
      digitalWrite(ledpin[0], HIGH);}
    else
     digitalWrite(ledpin[0], LOW);}
if (bval[1] != lastbval[1]){
    if (bval[1] == HIGH) {
      Serial.println(key[1]);
      digitalWrite(ledpin[1], HIGH);}
    else
     digitalWrite(ledpin[1], LOW);}
if (bval[2] != lastbval[2]){
    if (bval[2] == HIGH) {
      Serial.println(key[2]);
      digitalWrite(ledpin[2], HIGH);}
    else
   digitalWrite(ledpin[2], LOW);}
if (bval[3] != lastbval[3]){
   if (bval[3] == HIGH) {
     Serial.println(key[3]);
     digitalWrite(ledpin[3], HIGH);}
   else
    digitalWrite(ledpin[3], LOW);}
if (bval[4] != lastbval[4]){
   if (bval[4] == HIGH) {
     Serial.println(key[4]);
     digitalWrite(ledpin[4], HIGH);}
   else
    digitalWrite(ledpin[4], LOW);}
if (bval[5] != lastbval[5]){
    if (bval[5] == HIGH) {
      Serial.println(key[5]);
      digitalWrite(ledpin[5], HIGH);}
    else
     digitalWrite(ledpin[5], LOW);}
if (bval[6] != lastbval[6]){
    if (bval[6] == HIGH) {
      Serial.println(key[6]);
      digitalWrite(ledpin[6], HIGH);}
    else
   digitalWrite(ledpin[6], LOW);}
if (bval[7] != lastbval[7]){
   if (bval[7] == HIGH) {
     Serial.println(key[7]);
     digitalWrite(ledpin[7], HIGH);}
   else
    digitalWrite(ledpin[7], LOW);}
if (bval[8] != lastbval[8]){
   if (bval[8] == HIGH) {
     Serial.println(key[8]);
     digitalWrite(ledpin[8], HIGH);}
   else
    digitalWrite(ledpin[8], LOW);}
if (bval[9] != lastbval[9]){
    if (bval[9] == HIGH) {
      Serial.println(key[9]);
      digitalWrite(ledpin[9], HIGH);}
    else
     digitalWrite(ledpin[9], LOW);}
if (bval[10] != lastbval[10]){
    if (bval[10] == HIGH) {
      Serial.println(key[10]);
      digitalWrite(ledpin[10], HIGH);}
    else
   digitalWrite(ledpin[10], LOW);}
if (bval[11] != lastbval[11]){
   if (bval[11] == HIGH) {
     Serial.println(key[11]);
     digitalWrite(ledpin[11], HIGH);}
   else
    digitalWrite(ledpin[11], LOW);}
if (bval[12] != lastbval[12]){
   if (bval[12] == HIGH) {
     Serial.println(key[12]);
     digitalWrite(ledpin[12], HIGH);}
   else
    digitalWrite(ledpin[12], LOW);}
if (bval[13] != lastbval[13]){
    if (bval[13] == HIGH) {
      Serial.println(key[13]);
      digitalWrite(ledpin[13], HIGH);}
    else
     digitalWrite(ledpin[13], LOW);}
if (bval[14] != lastbval[14]){
    if (bval[14] == HIGH) {
      Serial.println(key[14]);
      digitalWrite(ledpin[14], HIGH);}
    else
   digitalWrite(ledpin[14], LOW);}
if (bval[14] != lastbval[14]){
   if (bval[14] == HIGH) {
     Serial.println(key[14]);
     digitalWrite(ledpin[14], HIGH);}
   else
    digitalWrite(ledpin[14], LOW);}
if (bval[15] != lastbval[15]){
   if (bval[15] == HIGH) {
     Serial.println(key[15]);
     digitalWrite(ledpin[15], HIGH);}
   else
    digitalWrite(ledpin[15], LOW);}
if (bval[16] != lastbval[16]){
    if (bval[16] == HIGH) {
      Serial.println(key[16]);
      digitalWrite(ledpin[16], HIGH);}
    else
     digitalWrite(ledpin[16], LOW);}
if (bval[17] != lastbval[17]){
    if (bval[17] == HIGH) {
      Serial.println(key[17]);
      digitalWrite(ledpin[17], HIGH);}
    else
   digitalWrite(ledpin[17], LOW);}
if (bval[18] != lastbval[18]){
   if (bval[18] == HIGH) {
     Serial.println(key[18]);
     digitalWrite(ledpin[18], HIGH);}
   else
    digitalWrite(ledpin[18], LOW);}
if (bval[19] != lastbval[19]){
   if (bval[19] == HIGH) {
     Serial.println(key[19]);
     digitalWrite(ledpin[19], HIGH);}
   else
    digitalWrite(ledpin[19], LOW);}



 lastbval[0] = bval[0];
 lastbval[1] = bval[1];
 lastbval[2] = bval[2];
 lastbval[3] = bval[3];
 lastbval[4] = bval[4];
 lastbval[5] = bval[5];
 lastbval[6] = bval[6];
 lastbval[7] = bval[7];
 lastbval[8] = bval[8];
 lastbval[9] = bval[9];
 lastbval[10] = bval[10];
 lastbval[11] = bval[11];
 lastbval[12] = bval[12];
 lastbval[13] = bval[13];
 lastbval[14] = bval[14];
 lastbval[15] = bval[15];
 lastbval[16] = bval[16];
 lastbval[17] = bval[17];
 lastbval[18] = bval[18];
 lastbval[19] = bval[19];
 
}
