#include <Arduino.h>

void setup() {
    // put your setup code here, to run once:
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(115200);
    Serial.println("Hello World!");
}

void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);  // this speeds up the simulation
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}