/*
 * Sistema de Alerta por Distância com LED e Buzzer
 * 
 * Componentes:
 * - Sensor ultrassônico HC-SR04 (Trig: 13, Echo: 12)
 * - Buzzer ativo: 8
 * - LEDs: Verde (2), Amarelo (3), Vermelho (4)
 */

#include <Arduino.h>

// Definição dos pinos
const int BUZZER_PIN = 8;
const int TRIG_PIN = 13;
const int ECHO_PIN = 12;
const int LED_GREEN = 2;
const int LED_YELLOW = 3;
const int LED_RED = 4;

class DistanceMonitor {
  public:
    void setup() {
      // Configura os pinos
      pinMode(BUZZER_PIN, OUTPUT);
      pinMode(TRIG_PIN, OUTPUT);
      pinMode(ECHO_PIN, INPUT);
      pinMode(LED_GREEN, OUTPUT);
      pinMode(LED_YELLOW, OUTPUT);
      pinMode(LED_RED, OUTPUT);
      
      Serial.begin(9600);
    }
    
    float measureDistance() {
      // Mede a distância com o sensor ultrassônico
      digitalWrite(TRIG_PIN, LOW);
      delayMicroseconds(5);
      
      digitalWrite(TRIG_PIN, HIGH);
      delayMicroseconds(10);
      digitalWrite(TRIG_PIN, LOW);
      
      float duration = pulseIn(ECHO_PIN, HIGH);
      float distance = duration / 58.0;  // Converte para cm
      
      Serial.print("Distancia: ");
      Serial.print(distance);
      Serial.println(" cm");
      
      return distance;
    }
    
    void controlLEDs(float distance) {
      // Desliga todos os LEDs primeiro
      digitalWrite(LED_GREEN, LOW);
      digitalWrite(LED_YELLOW, LOW);
      digitalWrite(LED_RED, LOW);
      
      // Controla os LEDs baseado na distância
      if (distance > 50) {
        return;
      } else if (distance > 35) {
        digitalWrite(LED_GREEN, HIGH);
      } else if (distance > 15) {
        digitalWrite(LED_GREEN, HIGH);
        digitalWrite(LED_YELLOW, HIGH);
      } else {
        digitalWrite(LED_GREEN, HIGH);
        digitalWrite(LED_YELLOW, HIGH);
        digitalWrite(LED_RED, HIGH);
      }
    }
    
    int controlBuzzer(float distance) {
      // Controla o buzzer baseado na distância
      if (distance > 50) {
        noTone(BUZZER_PIN);
        return 1000;
      } else if (distance > 35) {
        tone(BUZZER_PIN, 466);
        delay(400);
        noTone(BUZZER_PIN);
        return 400;
      } else if (distance > 25) {
        tone(BUZZER_PIN, 466);
        delay(350);
        noTone(BUZZER_PIN);
        return 350;
      } else if (distance > 15) {
        tone(BUZZER_PIN, 466);
        delay(250);
        noTone(BUZZER_PIN);
        return 250;
      } else {
        tone(BUZZER_PIN, 466);
        delay(15);
        noTone(BUZZER_PIN);
        return 15;
      }
    }
    
    void run() {
      // Loop principal
      float distance = measureDistance();
      controlLEDs(distance);
      int interval = controlBuzzer(distance);
      delay(interval);
    }
};

DistanceMonitor monitor;

void setup() {
  monitor.setup();
}

void loop() {
  monitor.run();
}