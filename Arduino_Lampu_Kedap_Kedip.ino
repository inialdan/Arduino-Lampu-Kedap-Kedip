// Aldan Rizki Santosa
// https://github.com/inialdan

const int pinLED = 8;

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  digitalWrite(pinLED, HIGH);
  delay(500);
  digitalWrite(pinLED, LOW);
  delay(500);
} 
