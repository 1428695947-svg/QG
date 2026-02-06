#include <REGX52.H>

void Delay_ms(unsigned int time)
{
	unsigned int i,j;
	for(i = 0; i < time; i++)
	{
		for(j = 0; j < 120; j++);
	}
}

void main()
{
	while(1)
	{
		if(P3_0 == 0)
		{
			Delay_ms(20);
			while(P3_0 == 0);
			Delay_ms(20);
			P1_0 = ~P1_0;
		}
	}
	return;
}