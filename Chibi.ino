#include <Adafruit_CircuitPlayground.h>

int led = 3; // connect led sticker to A4 (pin 3)

void setup() {

  CircuitPlayground.begin();

  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(led, LOW);   // turn the LED off (LOW is the voltage level)
  delay(1000);
}
