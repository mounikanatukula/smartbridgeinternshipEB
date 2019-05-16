/*
 * DCmotor.c
 *
 * Created: 15-05-2019 14:10:33
 * Author : Jaya
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB=0xFF;
    while (1) 
    {
		PORTB=0x01;
		_delay_ms(1000);
		PORTB=0x00;
        _delay_ms(1000);
		PORTB=0x02;
		_delay_ms(1000);
		PORTB=0x00;
		_delay_ms(1000);
	}
}

