#include <LiquidCrystal.h>

// LiquidCrystal(RS, E, D4, D5, D6, D7)
LiquidCrystal lcd_1(2,3,8,9,10,11);

void setup()
{
  lcd_1.begin(16,2);
  lcd_1.print("Hello world");
  lcd_1.setCursor(0,1);
  lcd_1.print("Another line here and now it will scroll..");
}

void loop()
{
  lcd_1.scrollDisplayLeft();
  delay(300);
}
