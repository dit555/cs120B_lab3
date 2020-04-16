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
    unsigned char a = 0x00;
    unsigned char b = 0x00;
    unsigned char c = 0x00;
    while (1) {
	a = PINA;
	b = 0x00;
	c = 0x00;

	b = a >> 4;
	c = a << 4;

	PORTB = b;
	PORTC = c;
	

    }
    return 1;
}
