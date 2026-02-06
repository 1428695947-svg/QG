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
		int k; // ·ÀÖ¹K»áºã´óÓÚ0
		for(k = 0; k < 8; k++)
		{
			P1 = ~(1 << k);
			Delay_ms(100);
		}
		for(k = 7; k >= 0; k--)
		{
			P1  = ~(1 << k);
			Delay_ms(100);
		}
	}
	return;
}