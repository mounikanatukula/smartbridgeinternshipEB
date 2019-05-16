/*
 * MOTOR_BUTTONS.c
 *
 * Created: 15-05-2019 11:34:25
 * Author : Jaya
 */ 
#define F_CPU 80000000UL
#include <avr/io.h>
#include<util/delay.h>
void PWM_init()
{
	TCCR0=(1<<WGM00)|(1<<COM01)|(1<<CS00);
	DDRB=(1<<PB3);
	
}

int main(void)
{
	DDRD=0xFF;
	DDRD&=~(1<<PD0);
	DDRD&=~(1<<PD1);
	DDRB=0xFF;
	
PWM_init();	
    while (1) 
    {
		PORTB=(1<<PB3);
		PORTB&=~(1<<PB0);
		if((PIND & (1<<PD0))==0)
		{
			OCR0=150;
    }
	if((PIND & (1<<PD1))==0)
	{
		OCR0=200;
	}
}
}

