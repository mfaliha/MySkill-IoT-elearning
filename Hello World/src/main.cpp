#include <Arduino.h>

void setup() {
    // put your setup code here, to run once:
    pinMode(13, OUTPUT);
    Serial.begin(115200);
    Serial.println("Hello World!");
}

void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(13, HIGH);
    delay(1000);  // this speeds up the simulation
    digitalWrite(13, LOW);
    delay(1000);
}