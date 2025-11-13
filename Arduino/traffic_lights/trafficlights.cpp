#include <Arduino.h>

const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;

void setup();
void loop();

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
}

void loop() {
    digitalWrite(LED1, HIGH);
    delay(100);

    digitalWrite(LED2, HIGH);
    delay(100);

    digitalWrite(LED3, HIGH);
    delay(100);

    digitalWrite(LED1, LOW);
    delay(150);

    digitalWrite(LED2, LOW);
    delay(150);

    digitalWrite(LED3, LOW);
    delay(150);
}
