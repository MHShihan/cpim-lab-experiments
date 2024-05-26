

#include <LiquidCrystal.h>


LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup() {
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Hello Everyone");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}

