// Definindo as portas dos LEDs
const int ledVermelho = 11;
const int ledAmarelo = 12;
const int ledVerde = 13;

void setup() {
  // Configurando as portas dos LEDs como saídas
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // Fase Vermelha - 6 segundos
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);
  delay(6000); // Espera 6 segundos

  // Fase Amarela - 2 segundos
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(2000); // Espera 2 segundos

  // Fase Verde - 2 segundos
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(2000); // Espera 2 segundos

  // Tempo adicional no Verde - +2 segundos
  delay(2000); // Espera mais 2 segundos

  // Fase Amarela - 2 segundos antes de retornar ao vermelho
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(2000); // Espera 2 segundos
}