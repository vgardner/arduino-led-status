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
  //Serial.print("testing\n");
  //leds.setColorRGB(0, 255, 255, 0); 
   /*  check if data has been sent from the computer: */
  if (Serial.available()) {
    /* read the most recent byte */
    intRead = Serial.parseInt();
    if (intRead == 1) {
      leds.setColorRGB(0, 255, 0, 0);  
    }
    else {
      leds.setColorRGB(0, 0, 0, 255);
    }

    /*ECHO the value that was read, back to the serial port. */
    Serial.write(intRead);
  }
}
