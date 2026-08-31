const int motorPin = 9;

void setup()
{
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  for (int speed = 0; speed <= 255; speed++)
  {
    analogWrite(motorPin, speed);
    delay(20);
  }

  delay(1000);

  for (int speed = 255; speed >= 0; speed--)
  {
    analogWrite(motorPin, speed);
    delay(20);
  }

  delay(1000);
}
