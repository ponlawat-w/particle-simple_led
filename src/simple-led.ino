/*
 * Project simple-led
 * Description: Simeple LED
 * Author: Ponlawat W.
 * Date: 9 November 2020
 */

#include <Grove_ChainableLED.h>

#define NUM_LEDS 1

ChainableLED leds(D2, D3, NUM_LEDS); // Chainable LED is connected to port D2 and D3, with NUM_LEDS chained

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  leds.init();
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  leds.setColorRGB(0, 0, 0, 0);       // turn off
  delay(1000);
  leds.setColorRGB(0, 120, 0, 0);     // go red
  delay(5000);
  leds.setColorRGB(0, 0, 120, 0);     // go green
  delay(5000);
  leds.setColorRGB(0, 120, 120, 0);   // go yellow
  delay(2500);
  leds.setColorRGB(0, 120, 0, 0);     // go red
  delay(5000);
  leds.setColorRGB(0, 120, 120, 120); // go white
  delay(1000);
}
