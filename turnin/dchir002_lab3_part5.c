/*	Author: Dumitru  lab 3
 *  Partner(s) Name: 
 *	Lab Section: 026
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {

    DDRB = 0x00; PORTB = 0x00;
    DDRD = 0x00; PORTD = 0x00;
    unsigned char b = 0x00;
    unsigned char d = 0x00;
    while (1) {
	d = PIND;
	b = 0x00;

	if (d >= 70)
		b = b | 0x02;
	
	else if (d > 5 && d < 70){
		b = b | 0x02;
	}
	else
		b = 0x04;

	PORTB = b;

    }
    return 1;
}
