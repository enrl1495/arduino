#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(lcd.init());
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
