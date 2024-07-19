int value;
void setup() {
  Serial.begin(115200);

}

void loop() {
  value = analogRead(0);
  if (value <= 100) {
    Serial.println(0);
  }
  if (value > 100) {
    Serial.println(1);
  }
}
