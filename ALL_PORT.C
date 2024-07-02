#include<pic16f877a.h>
#define _XTAL_FREQ 20000000

void main()
{
	TRISA = 0x00;
	TRISB = 0x00;
	TRISC = 0x00;
	TRISD = 0x00;
	TRISE = 0x00;

	PORTA = 0x00;
    PORTB = 0x00;
    PORTC = 0x00;
    PORTD = 0x00;
    PORTE = 0x00;
	
	int i=0,j=0;
	
	while(1)
	{
		PORTA = 0x3F;
        PORTB = 0x00;
        PORTC = 0x00;
        PORTD = 0x00;
        PORTE = 0x00;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
		PORTA = 0x00;
        PORTB = 0xFF;
        PORTC = 0x00;
        PORTD = 0x00;
        PORTE = 0x00;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
		PORTA = 0x00;
        PORTB = 0x00;
        PORTC = 0xFF;
        PORTD = 0x00;
        PORTE = 0x00;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
		PORTA = 0x00;
        PORTB = 0x00;
        PORTC = 0x00;
        PORTD = 0xFF;
        PORTE = 0x00;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
		PORTA = 0x00;
        PORTB = 0x00;
        PORTC = 0x00;
        PORTD = 0x00;
        PORTE = 0x03;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
	}
}