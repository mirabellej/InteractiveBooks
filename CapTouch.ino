#include <Adafruit_CircuitPlayground.h>

#define CAP_PIN1 A1 // change this number to read a different pin! 
#define THRESHOLD 800 // the min. reading we're counting as a touch!

void setup() {
  // Initialize serial.
  Serial.begin(9600);

  // Initialize Circuit Playground library.
  CircuitPlayground.begin();

  delay(1000);
}

void loop() {
  // saves the cap touch data to a variable "capData"
  int capData = CircuitPlayground.readCap(CAP_PIN1);
  // print the data
  Serial.print("Capacitive Touch Reading: ");
  Serial.println(capData);

  // do something IF the touch pad is being touched!
  if (capData > THRESHOLD) {
    Serial.println("TOUCHED!");
    for (int i = 0; i < 10; i++) { // use a for loop to go from one pixel to the next
      CircuitPlayground.setPixelColor(i, 255,   0,   0); // and set the color for the that pixel in RGB
    }
    CircuitPlayground.playTone(400, 100);
    delay(1000);
    CircuitPlayground.clearPixels();
  }
  else {
    // do nothing - you can replace this to have a "default" mode
  }


  delay(200); // time between readings
}
