#include <Arduino.h>

// Define the LED pin
#define LED_PIN A3

void setup() {
  // Initialize the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH voltage level)
  digitalWrite(LED_PIN, HIGH);
  delay(2000); // Wait for 2 seconds
  
  // Turn the LED off (LOW voltage level)
  digitalWrite(LED_PIN, LOW);
  delay(1000); // Wait for 1 second
}