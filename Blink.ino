#include <Adafruit_CircuitPlayground.h> // use the circuit playground library

void setup() {
  CircuitPlayground.begin(); // wake up our controller
}

void loop() {
  CircuitPlayground.redLED(HIGH); // turn the red LED ON
  delay(500); // wait for 500 milliseconds or half a second
  CircuitPlayground.redLED(LOW); // turn the red LED OFF
  delay(500); // wait for 500 milliseconds or half a second
}
