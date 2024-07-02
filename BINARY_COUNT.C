#include<pic16f877a.h>
#define _XTAL_FREQ 20000000

void main()
{
	TRISB = 0x00;
	
	int i=0,j=0;
	
	while(1)
	{
		PORTB = 0x01;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
		PORTB = 0x02;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
				PORTB = 0x03;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
				PORTB = 0x04;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
				PORTB = 0x05;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
				PORTB = 0x06;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
				PORTB = 0x07;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
				PORTB = 0x08;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
				PORTB = 0x09;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
				PORTB = 0x0A;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
				PORTB = 0x0B;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
				PORTB = 0x0C;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
				PORTB = 0x0D;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
				PORTB = 0x0E;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
				PORTB = 0x0F;
		for(i=0;i<=500;i++)
		{
			for(j=0;j<=500;j++);
		}
		
	}
}