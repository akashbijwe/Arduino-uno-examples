// C++ code

int ledPin = 8;
int SliderSwitchPin = 2;
int sliderInput;
  
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(SliderSwitchPin, INPUT);
}

void loop()
{
  sliderInput = digitalRead(SliderSwitchPin);
  if(sliderInput == HIGH) {
  	digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
