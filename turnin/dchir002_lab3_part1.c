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
    unsigned char b = 0x00;
    while (1) {
	a = PINA;
	b = PINB;
	sum = 0x00;
	unsigned char mask = 0x01;
	unsigned char i;
	for (i = 0; i < 8; i++){
		if((a & mask) != 0)
			sum++;
		if((b & mask) != 0)
			sum++;	
		mask = mask << 1;
	}	
	PORTC = sum;
    }
    return 1;
}
