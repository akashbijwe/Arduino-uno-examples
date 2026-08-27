#include <Servo.h>

Servo myServo;
int position = 0;

void setup()
{
  myServo.attach(5);
}

void loop()
{
  // Slowly move from 0° to 180°
  for (position = 0; position <= 180; position++) {
    myServo.write(position);
    delay(10);
  }

  // Slowly move from 180° back to 0°
  for (position = 180; position >= 0; position--) {
    myServo.write(position);
    delay(10);
  }
}
