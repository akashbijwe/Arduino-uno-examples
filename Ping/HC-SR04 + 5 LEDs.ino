const int trigPin = 7; // input
const int echoPin = 8; // output
  
void setup() {
    // initialize the serial communication
    Serial.begin(9600); // Initialize the pint method.
	pinMode(trigPin, OUTPUT);
  	pinMode(echoPin, INPUT);
  
    pinMode(2, OUTPUT);
  	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
}

void loop() {
  long duration, inches, cm;
	
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10); // Trigger pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // Trigger pulse
  
  duration = pulseIn(echoPin, HIGH);
   
  inches = microSecondsToInches(duration);
  cm = microSecondsToCentimeters(duration);
  
  Serial.print("inches: ");
  Serial.print(inches);
  Serial.print("\n");
  Serial.print("cm: ");
  Serial.print(cm);
  Serial.print("\n");
  Serial.print("-------------------");
  Serial.print("\n");
  
  if (cm > 0 && cm <= 100) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
  }
  else if (cm <= 200) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
  }
  else if (cm <= 300) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
  else if (cm <= 400) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
  else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
  
  delay(100);
}

long microSecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}

long microSecondsToCentimeters(long centimeters) {
	return centimeters / 29 / 2;
}
