#define BUZZER PA_8

void setup() {
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  tone(BUZZER, 2500);
  delay(50);
  noTone(BUZZER);
  delay(50);
}