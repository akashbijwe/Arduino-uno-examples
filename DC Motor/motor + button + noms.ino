int MOTOR_PIN = 2;
int BUTTON_PIN = 7;
int stage;

void setup()
{
  pinMode(MOTOR_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop(){
  stage = digitalRead(BUTTON_PIN);
  if(stage == HIGH){
  	digitalWrite(MOTOR_PIN, LOW);
  } else {
  	digitalWrite(MOTOR_PIN, HIGH);
  }
}
