void setup() {
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

int DELAY = 75;

void loop() {
  delay(DELAY);
  digitalWrite(8, HIGH);
  delay(DELAY);
  digitalWrite(7, HIGH);
  delay(DELAY);
  digitalWrite(6, HIGH);
  delay(DELAY);
  digitalWrite(5, HIGH);
  delay(DELAY);
  digitalWrite(4, HIGH);
  delay(DELAY);
  digitalWrite(8, LOW);
  delay(DELAY);
  digitalWrite(7, LOW);
  delay(DELAY);
  digitalWrite(6, LOW);
  delay(DELAY);
  digitalWrite(5, LOW);
  delay(DELAY);
  digitalWrite(4, LOW);
  delay(DELAY);
  digitalWrite(4, HIGH);
  delay(DELAY);
  digitalWrite(5, HIGH);
  delay(DELAY);
  digitalWrite(6, HIGH);
  delay(DELAY);
  digitalWrite(7, HIGH);
  delay(DELAY);
  digitalWrite(8, HIGH);
  delay(DELAY);
  digitalWrite(4, LOW);
  delay(DELAY);
  digitalWrite(5, LOW);
  delay(DELAY);
  digitalWrite(6, LOW);
  delay(DELAY);
  digitalWrite(7, LOW);
  delay(DELAY);
  digitalWrite(8, LOW);
  delay(DELAY);
}
