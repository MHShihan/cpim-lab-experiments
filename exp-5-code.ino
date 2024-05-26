
 int buttonPin = 10;     
 int ledPins[8] =  {1, 2, 3, 4, 5, 6, 7, 8};      

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  for(int i = 0; i < 8; i++){
     pinMode(ledPins[i], OUTPUT);
    }
   // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    for(int i = 0; i < 8; i++){
        digitalWrite(ledPins[i], HIGH);
      }

  } else {
    // turn LED off:
    for(int i = 0; i < 8; i++){
    digitalWrite(ledPins[i], LOW);
    }
  }
}






