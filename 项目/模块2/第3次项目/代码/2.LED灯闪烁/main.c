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
		P1 = ~0x01;
		Delay_ms(500);
		P1 = ~0x00;
		Delay_ms(500);
	}
	return;
}