#include <Adafruit_CircuitPlayground.h>

#define CAP_PIN1 A1 // change this number to read a different pin! 
#define THRESHOLD 900 // the min. reading we're counting as a touch!

int led = 3; // connect led sticker to A4 (pin 3)

void setup() {
  // Initialize serial.
  Serial.begin(9600);

  // Initialize Circuit Playground library.
  CircuitPlayground.begin();

  pinMode(led, OUTPUT);

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
    digitalWrite(led, HIGH);
    //CircuitPlayground.playTone(400, 100);
    delay(1000);
  }
  else {
    digitalWrite(led, LOW);
    delay(1000);
  }


  delay(200); // time between readings
}
