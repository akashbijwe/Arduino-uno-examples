// C++ code
int LED_PIN = 9;
void setup()
{
  
}

void loop()
{
  for(int fadeValue = 0; fadeValue <= 255; fadeValue +=10){
  	analogWrite(LED_PIN, fadeValue);
    delay(30);
  }
  for(int fadeValue = 255; fadeValue >=0; fadeValue -=10){
  	analogWrite(LED_PIN, fadeValue);
    delay(30);
  }
}
