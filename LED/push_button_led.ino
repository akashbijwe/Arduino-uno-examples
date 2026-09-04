int LED_PIN = 9;
int PUSH_BUTTON_PIN = 2;
int state;
  
void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(PUSH_BUTTON_PIN, INPUT_PULLUP);
}

void loop()
{
  state = digitalRead(PUSH_BUTTON_PIN);
  if(state == HIGH){
  	digitalWrite(LED_PIN, LOW);  
  } else {
  	digitalWrite(LED_PIN, HIGH);
  }
}
