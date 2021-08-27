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
  
  CircuitPlayground.setPixelColor(5, 0xFF0000);
  CircuitPlayground.setPixelColor(6, 0x808000);
  CircuitPlayground.setPixelColor(7, 0x00FF00);
  CircuitPlayground.setPixelColor(8, 0x008080);
  CircuitPlayground.setPixelColor(9, 0x0000FF);
 
  delay(5000); // how long should they be on for?
}
