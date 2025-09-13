void setup() {
  pinMode(8, OUTPUT); // buzzer
}

void loop() {
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
}
