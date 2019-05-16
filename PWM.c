/*
 * PWM.c
 *
 * Created: 15-05-2019 11:34:25
 * Author : Jaya
 */ 
#define F_CPU 80000000UL
#include <avr/io.h>
#include <util/delay.h>
void PWM_init()
{
	TCCR0=(1<<WGM00)|(1<<COM01)|(1<<CS00);
	DDRB=(1<<PB3);
}

int main(void)
{
    unsigned char duty;
	
PWM_init();	
    while (1) 
    {
		for (duty=0;duty<255;duty++)
		{
			OCR0=duty;
			_delay_ms(1);
		}
		for(duty=255;duty>1;duty--)
		{
			OCR0=duty;
			_delay_ms(1);
		}
    }
}

