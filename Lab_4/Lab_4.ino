int Pins[] = {13, 12, 11, 10, 9, 8, 7, 6};

void setup() {
  int index;
    for(index = 0; index <= 7; index++)
  {
    pinMode(Pins[index],OUTPUT);
    // ledPins[index] is replaced by the value in the array.
    // For example, ledPins[0] is 2
  }
}


void loop() {
  int index;
  int index2 = 7;
  int delayTime = 50;
 for(index = 0; index <= 7; index++) {
   index2 --;
   digitalWrite(Pins[index], HIGH);
   digitalWrite(Pins[index2], HIGH);

   delay(delayTime);
   
   digitalWrite(Pins[index], LOW);
   digitalWrite(Pins[index2], LOW);

   delay(delayTime);
 }
}
