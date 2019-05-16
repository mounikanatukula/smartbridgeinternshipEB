/*
 * timer1.c
 *
 * Created: 15-05-2019 10:30:16
 * Author : Jaya
 */ 

#include <avr/io.h>
#define LED PB0


int main(void)
{
    uint8_t timerOverflowCount=0;
	DDRB=0xFF;
	TCNT0=0x00;
	TCCR0=(1<<CS00)|(1<<CS02);
	
    while (1) 
    {
		
		if(TCNT0==199)
		{
			PORTB ^= (0x01<<LED);
			timerOverflowCount=0;
		}
		
    }
}

