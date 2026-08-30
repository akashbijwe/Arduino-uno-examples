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

  if (inches < 12.5) {
    if (!objectDetected) {
      objectDetected = true;
      digitalWrite(LED_PIN, HIGH);
      moveServoSlow(90);
      Serial.println("Object detected -> Servo 90°");
    }
  } else {
    if (objectDetected) {
      objectDetected = false;
      objectLeftTime = millis();
      Serial.println("Object left -> Starting 2 second timer");
    }
    if (millis() - objectLeftTime >= 2000) {
      moveServoSlow(0);
      Serial.println("2 seconds passed -> Servo 0°");
      digitalWrite(LED_PIN, LOW);
    }
  }
}


long microSecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}

void moveServoSlow(int targetAngle) {

  int currentAngle = myServo.read();

  if (currentAngle < targetAngle) {

    for (int angle = currentAngle; angle <= targetAngle; angle++) {
      myServo.write(angle);
      delay(10);
    }

  } else {

    for (int angle = currentAngle; angle >= targetAngle; angle--) {
      myServo.write(angle);
      delay(10);
    }
  }
}
