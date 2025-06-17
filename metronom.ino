const int buzzerPin = 9;
const int potPin = A0;
const int ledPin = 8;  // LED pini

int bpm = 60;
int interval = 1000;
int vurusSayaci = 0;
const int hysteresis = 5;

unsigned long previousMillis = 0;
int eskiPotDegeri = 0;

void setup() {
  Serial.begin(115200);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.println("Metronom basladi. BPM: 60");
}

void loop() {
  long toplam = 0;
  for (int i = 0; i < 100; i++) {
    toplam += analogRead(potPin);
    delay(1);
  }
  int potDegeri = toplam / 100;

  if (eskiPotDegeri == 0) {
    eskiPotDegeri = potDegeri;
  }

  int yeniBpm = map(potDegeri, 0, 1023, 60, 240);
  if (yeniBpm > 240) yeniBpm = 240;
  if (yeniBpm < 60) yeniBpm = 60;

  if (abs(potDegeri - eskiPotDegeri) > hysteresis * 8) {
    bpm = yeniBpm;
    vurusSayaci = 0;
    Serial.print("Pot degisti, yeni BPM: ");
    Serial.println(bpm);
    eskiPotDegeri = potDegeri;
  }

  interval = 60000 / bpm;

  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    // BUZZER VE LED AYNI ANDA ÇALIŞIYOR:
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(50);
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);

    vurusSayaci++;

    if (vurusSayaci >= 16) {
      bpm += 4;
      if (bpm > 240) bpm = 240;
      vurusSayaci = 0;
      Serial.print("Otomatik Artti BPM: ");
      Serial.println(bpm);
}
}
}