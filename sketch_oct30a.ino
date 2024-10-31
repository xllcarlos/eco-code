#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Instace of LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);
// Instace of DHT11 Sensor

void setup() {
  // Initialize the Serial Monitor
  Serial.begin(9600);
  // Initialize the 
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Allany Linda");
  lcd.setCursor(0, 1);
  lcd.print("xoxo");
}

void loop() {
  // put your main code here, to run repeatedly:

}
