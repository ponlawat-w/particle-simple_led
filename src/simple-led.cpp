/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Ponlawat/source/particle/simple-led/src/simple-led.ino"
/*
 * Project simple-led
 * Description: Simeple LED
 * Author: Ponlawat W.
 * Date: 9 November 2020
 */

#include <Grove_ChainableLED.h>

void setup();
void loop();
#line 10 "c:/Users/Ponlawat/source/particle/simple-led/src/simple-led.ino"
#define NUM_LEDS 1

ChainableLED leds(D2, D3, NUM_LEDS);

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  leds.init();
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  leds.setColorRGB(0, 0, 0, 0);
  delay(1000);
  leds.setColorRGB(0, 255, 255, 255);
  delay(1000);
}
