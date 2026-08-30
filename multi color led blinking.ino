int greenColorLed = 5;
int blueColorLed = 7;
int redColorLed = 8;

void setup()
{
  pinMode(greenColorLed, OUTPUT);
  pinMode(blueColorLed, OUTPUT);
  pinMode(redColorLed, OUTPUT);
}

void loop()
{
  digitalWrite(greenColorLed, LOW);
  digitalWrite(blueColorLed, LOW);
  digitalWrite(redColorLed, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(blueColorLed, LOW);
  digitalWrite(redColorLed, LOW);
  digitalWrite(greenColorLed, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(redColorLed, LOW);
  digitalWrite(greenColorLed, LOW);
  digitalWrite(blueColorLed, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
