/* simple program to blink LED once after every one second.
later to develop as status indicator LED. 

next prject: set a program- with 3 blinks and 1 blink. 

2nd next project: 3 blink to happen when sw is pressed. 
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
