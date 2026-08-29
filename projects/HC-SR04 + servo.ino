#include <Servo.h>

Servo myServo;

const int SERVO_PIN = 7;
const int TRIGGER_PIN = 3; // Input to UNO
const int ECHO_PIN = 2; // Output to UNO
const int LED_PIN = 5;

bool objectDetected = false;
unsigned long objectLeftTime = 0;

void setup() {
  Serial.begin(9600);

  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  myServo.attach(SERVO_PIN);
  myServo.write(0);
}

void loop() {
  long duration, inches;
	
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);
  inches = microSecondsToInches(duration);

  Serial.print("Distance: ");
  Serial.print(inches);
  Serial.println(" inches");

  if (inches < 20) {
    if (!objectDetected) {
      objectDetected = true;
      digitalWrite(LED_PIN, HIGH);
      myServo.write(180);
      Serial.println("Object detected -> Servo 180°");
    }
  } else {
    if (objectDetected) {
      objectDetected = false;
      objectLeftTime = millis();
      Serial.println("Object left -> Starting 3 second timer");
    }
    if (millis() - objectLeftTime >= 3000) {
      myServo.write(0);
      Serial.println("3 seconds passed -> Servo 0°");
      digitalWrite(LED_PIN, LOW);
    }
  }
}


long microSecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}
