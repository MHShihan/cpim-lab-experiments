
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
  // loop from the lowest pin to the highest:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    // turn the pin on:
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
  }

  // loop from the highest pin to the lowest:
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {
    digitalWrite(ledPins[thisPin], LOW);
    delay(timer);
  }
}
