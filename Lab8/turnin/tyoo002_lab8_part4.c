/*      Author: lab
 *  Partner(s) Name: 
 *      Lab Section:
*      Assignment: Lab #  Exercise #
 *      Exercise Description: [optional - include for your own benefit]
 *
 *      I acknowledge all content contained herein, excluding template or example
 *      code, is my own original work.
 */

#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

void ADC_init() {
	ADCSRA |= (1 << ADEN) | (1 << ADSC) | (1 << ADATE);
}

int main(void) {
     /* Insert DDR and PORT initializations */
        DDRA = 0x00; PORTA = 0xFF;
        DDRB = 0xFF; PORTB = 0x00;
        DDRD = 0xFF; PORTD = 0x00;

        ADC_init();
    /* Insert your solution below */
        unsigned short x;
        unsigned char y;
	unsigned short MAX = 176;
	unsigned char gap = MAX/8;
	
    while (1) {
	     if(ADC == gap) {
		    PORTB = 0x01;
	    }
	    else if(ADC == (gap * 2)) {
		    PORTB = 0x03;
	    }
	    else if(ADC == (gap * 3)) {
		    PORTB = 0x07;
	    }
	    else if(ADC == (gap * 4)) {
		    PORTB = 15;
	    }
	    else if(ADC == (gap * 5)) {
		    PORTB = 31;
	    }
	    else if(ADC == (gap * 6)) {
		    PORTB = 63;
	    }
	    else if(ADC == (gap * 7)) {
		    PORTB = 127;
	    }
	    else if(ADC == (gap * 8)) {
		    PORTB = 255;
	    }
    
        }
     	    

    return 1;
}
