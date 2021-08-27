#include <Adafruit_CircuitPlayground.h>

// play it only once!
void setup() {
  CircuitPlayground.begin();
  
  CircuitPlayground.playTone(500, 1000); // (sound in hertz, for how long?)
  delay(1000); // silence for 1000 milliseconds or one second
  //CircuitPlayground.playTone(200, 1000); // (sound in hertz, for how long?)
  //delay(1000); // silence for 1000 milliseconds or one second
  
}

// play it over and over
void loop() {

}
