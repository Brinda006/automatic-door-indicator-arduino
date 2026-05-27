int irSensor = 2;
int greenLed = 8;
int redLed = 9;

void setup() {
  pinMode(irSensor, INPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() {
  int sensorValue = digitalRead(irSensor);

  if (sensorValue == LOW) {
    // Object detected
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
  }
  else {
    // No object detected
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, HIGH);
  }
}
