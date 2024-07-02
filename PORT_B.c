#include<pic16f877a.h>
#define _XTAL_FREQ 20000000

void main()
{
	TRISB=0X00;
	int i=0,j=0;
	while(1)
	{
		PORTB=0Xff;
		for(i=0;i<=50;i++)
		{
			for(j=0;j<500;j++);
		}

		PORTB=0X00;

		for(i=0;i<=50;i++)
		{
			for(j=0;j<500;j++);
		}
		
	}
}