void setup () {
  Serial. begin (9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);
  int brightness = sensorValue/4;

  analogWrite (11, brightness);

  Serial. print ("ADC reading: ");
  Serial. print (sensorValue);
  Serial. print (" Analog voltage: ");
  Serial. println (voltage);
  delay (1);

}
