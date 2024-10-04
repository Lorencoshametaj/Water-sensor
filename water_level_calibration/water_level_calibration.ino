#define SENSOR_PIN A5

void setup() {
  Serial.begin(9600);
}

void loop() {
  int level = analogRead(SENSOR_PIN);
  Serial.println(level);
  delay(100);
}
