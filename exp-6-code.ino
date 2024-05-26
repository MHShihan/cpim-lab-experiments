const int segmentPins[8] = {2, 3, 4, 5, 6, 7, 8};
const bool numbers[9][7] = {
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

void setup() {
  for(int i = 0; i < 7; i++){
    pinMode(segmentPins[i], OUTPUT);
    }
}

void loop() {
  for(int n = 0; n < 9; n++){
    displayNumbers(n);
    delay(500);
    }
}

void displayNumbers(int num){
  for(int i = 0; i < 7; i++){
      digitalWrite(segmentPins[i], numbers[num][i] ? HIGH : LOW);
    }
  }




