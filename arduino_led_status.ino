/* Simple Serial ECHO script : Written by ScottC 03/07/2012 */

/* Use a variable called byteRead to temporarily store
   the data coming from the computer */
#include <ChainableLED.h>
#define NUM_LEDS  2

int intRead;

ChainableLED leds(12, 13, NUM_LEDS);

void setup() {                
// Turn the Serial Protocol ON
  Serial.begin(9600);
}

void loop() {
   /*  check if data has been sent from the computer: */
  if (Serial.available()) {
    /* read the most recent byte */
    intRead = Serial.parseInt();

    switch (intRead) {
      case 1:
        leds.setColorRGB(0, 0, 255, 0);
      break;
      case 10:
        leds.setColorRGB(0, 0, 255, 0);
      break;
      case 2:
        leds.setColorRGB(0, 0, 255, 0);
      break;
      case 20:
        leds.setColorRGB(0, 0, 255, 0);
      break;
      case 3:
        leds.setColorRGB(0, 255, 0, 0);
      break;
      case 30:
      break;
      case 40:
      break;
      default:
        leds.setColorRGB(0, 0, 0, 255);
      break;
    }
    
    /*ECHO the value that was read, back to the serial port. */
    Serial.write(intRead);
  }
}
