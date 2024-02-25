/* simple program to blink LED in 2 patterns. 
later to develop work under function. 
then to blink the 2-times while pressing user button. 
 */

#include "mbed.h"

int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led (PA_5);


while (1) {
//blink 2 times
led = 0;
for (int i=0; i<2; i++)
{ 
    led =!led
    ThisThread :: sleep_for(200ms)
}
 ThisThread :: sleep_for(3000ms)

// blink 3 times

led = 0;
for (int i=0; i<3; i++)
{ 
    led =!led
    ThisThread :: sleep_for(200ms)
}
 ThisThread :: sleep_for(3000ms)
}
