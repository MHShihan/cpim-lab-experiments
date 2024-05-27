  int segmentPins[7] = {2, 3, 4, 5, 6, 7, 8};
  bool numbers[10][7] = { 
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 1, 1, 1, 1, 0}, // 0 
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 1, 1, 1, 1, 0}, // 0 
  {1, 1, 1, 1, 0, 1, 1}, // 9
  {1, 1, 1, 1, 1, 1, 1}, // 8 
};

void setup() {
  for(int i = 0; i < 7; i++){
    pinMode(segmentPins[i], OUTPUT);
    }
}

void loop() {
  for(int n = 0; n < 10; n++){
    displayNumbers(n);
    delay(500);
    }
}

void displayNumbers(int num){
  for(int i = 0; i < 7; i++){
      digitalWrite(segmentPins[i], numbers[num][i] == 1 ? HIGH : LOW);
    }
  }




