int sensorSignalPin = A2;
int sensorPowerPin = 8;
int ledPin = 5;
int sensorThreshold = 500;
int sensorValue;

void setup(){
  Serial.begin(9600);
  pinMode(sensorPowerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop(){
  digitalWrite(sensorPowerPin, HIGH);
  delay(10);
  sensorValue = analogRead(sensorSignalPin);
  digitalWrite(sensorPowerPin, LOW);
  Serial.println(sensorValue);
  delay(1000);
  
  if(sensorValue > sensorThreshold) {
  	digitalWrite(ledPin, HIGH);
  } else {
	  digitalWrite(ledPin, LOW);
  }
  
}
