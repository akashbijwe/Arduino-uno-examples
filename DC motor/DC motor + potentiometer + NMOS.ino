int MOTOR_PIN = 3;
int POTENTIOMETER_PIN = A0;
int potentiometerReading;
int speed;

void setup()
{
  
}

void loop(){
  potentiometerReading = analogRead(POTENTIOMETER_PIN);
  speed = map(potentiometerReading,0,1023,0,255);
  analogWrite(MOTOR_PIN, speed);
}	
