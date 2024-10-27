// LED pinleri tanımlanıyor
const int redLED = 8;    // Kırmızı LED pini
const int yellowLED = 7; // Sarı LED pini
const int greenLED = 6;  // Yeşil LED pini

void setup() {
  // LED pinleri çıkış olarak ayarlanıyor
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // Yeşil ışık yanıyor
  digitalWrite(greenLED, HIGH);
  delay(5000);  // 5 saniye boyunca yanık kalacak
  digitalWrite(greenLED, LOW);

  // Sarı ışık yanıyor
  digitalWrite(yellowLED, HIGH);
  delay(2000);  // 2 saniye boyunca yanık kalacak
  digitalWrite(yellowLED, LOW);

  // Kırmızı ışık yanıyor
  digitalWrite(redLED, HIGH);
  delay(5000);  // 5 saniye boyunca yanık kalacak
  digitalWrite(redLED, LOW);
}
