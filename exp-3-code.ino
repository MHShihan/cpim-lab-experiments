int timer = 500;
int ledPins[3]  = {1, 2, 3 };

void setup(){
  for(int i = 0; i < 3; i++){
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  //turn on LED-1
  digitalWrite(ledPins[0], HIGH);
  delay(timer);

  // turn off LED-1
  digitalWrite(ledPins[0], LOW);
  delay(timer);

  //turn on LED-1, LED-2
  digitalWrite(ledPins[0], HIGH);
  digitalWrite(ledPins[1], HIGH);
  delay(timer);

  //turn off LED-1, LED-2
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[1], LOW);
  delay(timer);

  //turn on LED-1, LED-2, LED-3
  digitalWrite(ledPins[0], HIGH);
  digitalWrite(ledPins[1], HIGH);
  digitalWrite(ledPins[2], HIGH);
  delay(timer);

  //turn off LED-1, LED-2, LED-3
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[1], LOW);
  digitalWrite(ledPins[2], LOW);
  delay(timer);
  
}
