#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
}

void loop() {
  CircuitPlayground.clearPixels(); // turn all pixels OFF

  delay(500); // wait 500 milliseconds or half a second

// the nums in parenthesis are (neopixel #, red, green, blue)
  CircuitPlayground.setPixelColor(0, 255,   0,   0); 
  CircuitPlayground.setPixelColor(1, 128, 128,   0);
  CircuitPlayground.setPixelColor(2,   0, 255,   0);
  CircuitPlayground.setPixelColor(3,   0, 128, 128);
  CircuitPlayground.setPixelColor(4,   0,   0, 255);
  
  CircuitPlayground.setPixelColor(5, 20,   80, 255);
  CircuitPlayground.setPixelColor(6, 40,   50, 255);
  CircuitPlayground.setPixelColor(7, 60, 90, 100);
  CircuitPlayground.setPixelColor(8, 10, 30, 80);
  CircuitPlayground.setPixelColor(9, 130, 80, 30);
 
  delay(5000); // how long should they be on for?
}
