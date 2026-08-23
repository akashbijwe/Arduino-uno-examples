const int BUTTON = 2;
const int GREEN = 8;
const int RED = 9;

void setup() {
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Read button state once
  int buttonState = digitalRead(BUTTON);

  // Log in Serial Monitor
  Serial.print("Here is the button state: ");
  Serial.println(buttonState);

  if (buttonState == LOW) {
    // BUTTON PRESSED → RED BLINKS

    digitalWrite(GREEN, LOW);

    digitalWrite(RED, HIGH);
    delay(200);
    digitalWrite(RED, LOW);
    delay(200);

    digitalWrite(RED, HIGH);
    delay(200);
    digitalWrite(RED, LOW);
    delay(200);

    digitalWrite(RED, HIGH);
    delay(200);
    digitalWrite(RED, LOW);

  } else {
    // BUTTON RELEASED → GREEN BLINKS

    digitalWrite(RED, LOW);

    digitalWrite(GREEN, HIGH);
    delay(200);
    digitalWrite(GREEN, LOW);
    delay(200);

    digitalWrite(GREEN, HIGH);
    delay(200);
    digitalWrite(GREEN, LOW);
    delay(200);

    digitalWrite(GREEN, HIGH);
    delay(200);
    digitalWrite(GREEN, LOW);
  }
}
