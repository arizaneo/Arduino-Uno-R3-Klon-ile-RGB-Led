// PWM (darbe genişlik modülasyonu) özellikli pinleri kullanmalıyız
// Bu pinlerin yanında ~ işareti bulunur
const int redPin = 10;
const int greenPin = 11;
const int bluePin = 9;

void setup() {
  // Pinleri çıkış (OUTPUT) olarak ayarla
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Kırmızı rengi yak
  digitalWrite(redPin, HIGH);    // Ortak anotlu modüllerde LOW, pini açar
  digitalWrite(greenPin, LOW);  // Diğer pinleri kapat
  digitalWrite(bluePin, LOW);
  delay(1000);  // 1 saniye bekle

  // Yeşil rengi yak
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(1000);

  // Mavi rengi yak
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(1000);
}
