#define SENSOR_PIN A5
#define RED_PIN 10
#define GREEN_PIN 9
#define YELLOW_PIN 8
#define ENABLE_PIN 7

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(ENABLE_PIN, OUTPUT);
  digitalWrite(ENABLE_PIN, LOW);
  Serial.begin(9600);
}

void loop() {
int level = readWaterLevel();

Serial.println(level); // invia il livello al browser
 
if (level < 300) {
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  } 
else if (level < 350) {
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(YELLOW_PIN, LOW);
  } 
else {
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, HIGH);
  }

delay(100);
}


int readWaterLevel() {
  digitalWrite(ENABLE_PIN, HIGH);
  delay(100);
  int level = analogRead(SENSOR_PIN);
  digitalWrite(ENABLE_PIN, LOW);
  return level;
}