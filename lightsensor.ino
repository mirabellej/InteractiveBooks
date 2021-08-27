#include <Adafruit_CircuitPlayground.h> // include the adafruit circuit playground library 

int light_value; // this variable will store our light sensor value allowing us to do THINGS with it!
int threshold = 100;

void setup() {
  Serial.begin(9600); // initialize serial
  CircuitPlayground.begin(); // initialize Circuit Playground
}

void loop() {
  light_value = CircuitPlayground.lightSensor(); // update "value" to store the light sensor reading

  Serial.print("Light Sensor: "); // print out "light sensor"
  Serial.println(light_value); // print the current value for the light sensor

  // If the condition is true, turn the LEDs to red
  if (light_value >= threshold) {
    for (int i = 0; i < 10; i++) { // use a for loop to go from one pixel to the next
      CircuitPlayground.setPixelColor(i, 255,   0,   0); // and set the color for the that pixel in RGB
    }
    //CircuitPlayground.playTone(900, 100);
  }

  // If it's low light, turn the LEDs off
  else {
    Serial.println("LOW LIGHT");
    for (int i = 0; i < 10; i++) { // use a for loop to go from one pixel to the next
      CircuitPlayground.setPixelColor(i, 0,   0,   0); // and set the color for the that pixel in RGB
    }
    // CircuitPlayground.playTone(90, 100); 
  }

  delay(500); // delay of 1 second (1000 milliseconds) between readings
}
