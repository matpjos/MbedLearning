/* simple program to blink LED once after every one second.
later to develop as status indicator LED. 

next prject: set a program- with 3 blinks and 1 blink. 

2nd next project: 3 blink to happen when sw is pressed. 
 */

#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE1 100ms
# define BLINKING_RATE2 300ms
# define BLINKING_RATE3 3s


int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led (PA_5);


    while (1) {
        if (led == 0){
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE1);}

        if (led ==1) {
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE2);}

        ThisThread::sleep_for(BLINKING_RATE3);
    }
}
