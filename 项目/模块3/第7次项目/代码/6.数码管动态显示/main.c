#include <REGX52.H>

unsigned char NixieTable[10] = {
    0x3F, // 0
    0x06, // 1
    0x5B, // 2
    0x4F, // 3
    0x66, // 4
    0x6D, // 5
    0x7D, // 6
    0x07, // 7
    0x7F, // 8
    0x6F  // 9
};

// 数码管显示函数
void Nixie(unsigned char Location, unsigned char Number)
{
	P2 = ~(1 << (Location - 1));
	P1 = NixieTable[Number];	// 显示数字
}

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
		unsigned int i,j;
		for(i = 1; i <= 8; i++)
		{
			for(j = 0; j <= 9; j++)
			{
				Nixie(i,j);
				Delay_ms(1000);
			}
		}	
	}
	return;
}