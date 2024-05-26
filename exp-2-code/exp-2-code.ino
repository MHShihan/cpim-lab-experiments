int timer = 500;           
int ledPins[] = {
  0, 1, 2, 3, 4, 5
};       
int pinCount = 6;           

void setup() {
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  }
}

void loop() {
  // turn on EVEN
  for (int thisPin = 1; thisPin < pinCount; thisPin += 2) {
    // turn the pin on:
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
  }

  // turn on ODD
  for (int thisPin = 0; thisPin < pinCount; thisPin += 2) {
    // turn the pin on:
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
  }

  // turn off EVEN
  for (int thisPin = 1; thisPin < pinCount; thisPin += 2) {
    // turn the pin on:
    digitalWrite(ledPins[thisPin], LOW);
    delay(timer);
  }


// turn off ODD
  for (int thisPin = 0; thisPin < pinCount; thisPin += 2) {
    // turn the pin on:
    digitalWrite(ledPins[thisPin], LOW);
    delay(timer);
  }
}


