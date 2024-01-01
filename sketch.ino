// Definir los pines a los que están conectados los LEDs
int ledPins = 2; // Cambia los números de pin si están conectados a otros pines

void setup() {
  // Configurar los pines como salidas
    pinMode(ledPins, OUTPUT);
  
}

void loop() {
  // Encender y apagar los LEDs en un bucle
    digitalWrite(ledPins, HIGH); // Encender el LED
    delay(500); // Esperar medio segundo
    digitalWrite(ledPins, LOW); // Apagar el LED
    delay(500);
  
}
