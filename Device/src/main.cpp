#include <Arduino.h>

// Pins
const int ledPin = 2;
const int analogOutput = 15;

// Variables
bool ledState = false;

void setup() {
    // Start the terminal
    Serial.begin(9600);

    // Setup the pin as output
    pinMode(ledPin, OUTPUT);
}

void loop() {
    // Serial.println("Hello, World from Phx!");

    // Blink LED
    ledState = !ledState;
    digitalWrite(ledPin, ledState);

    // Read Humidity
    int16_t rawValue = analogRead(analogOutput);
    Serial.printf("Humidity: %d\n", rawValue);

    delay(1000);  // millis
}