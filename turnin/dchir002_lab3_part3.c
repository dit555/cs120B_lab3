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
    DDRA = 0x00; PORTA = 0x00;
    DDRB = 0x00; PORTB = 0x00;
    DDRC = 0x00; PORTC = 0x00;
    unsigned char sum = 0x00;
    unsigned char a = 0x00;
    unsigned char c = 0x00;
    while (1) {
	a = PINA;
	c = 0x00;
	sum = 0x00;
	a = a & 0x0F;
	if ( a == 1 || a == 2)
		sum = 0x20;
	
	if ( a == 3 || a == 4)
		sum = 0x30;

	if ( a == 5 || a == 6)
		sum = 0x38;

	if ( a >= 7 && a <= 9)
		sum = 0x3C;

	if ( a >= 10 && a <= 12)
                sum = 0x3E;

	if ( a >= 13 && a <= 15)
                sum = 0x3F;

	if ( a <= 4)
		sum = sum | 0x40;
	c = PINA;
	c = c & 0x70;
	if ( c == 0x30)
		sum = sum | 0x80;
	PORTC = sum;

    }
    return 1;
}
