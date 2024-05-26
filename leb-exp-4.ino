int ledPins[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
void setup() {
  for(int i = 0; i < 13; i++){
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
 // Showing 'N'
 digitalWrite(ledPins[0], HIGH);
 digitalWrite(ledPins[1], HIGH);
 digitalWrite(ledPins[2], HIGH);
 digitalWrite(ledPins[3], HIGH);
 digitalWrite(ledPins[4], HIGH);
 digitalWrite(ledPins[6], HIGH);
 digitalWrite(ledPins[8], HIGH);
 digitalWrite(ledPins[9], HIGH);
 digitalWrite(ledPins[10], HIGH);
 digitalWrite(ledPins[11], HIGH);
 digitalWrite(ledPins[12], HIGH);

}
