#include <avr/io.h>


int main(void)
{
	DDRB &= ~(1<<DDB0); //PB0 setup as input pin
    DDRB |= (1<<DDB5);
	PORTB |= (1<<PORTB0);
	PORTB &= ~(1<<PORTB5);
	
    while (1) 
    {
		if(PINB & (1<<PINB0))
		{
			PORTB &= ~(1<<PORTB5);
		}
		else
		{
			PORTB |= (1<<PORTB5);
		}
    }
}
