#include <REGX52.H>

// ¹²Òõ±àÂë±í
unsigned char seg_code[10] = {
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


void main()
{
	// Î»Âë
	P2= ~0x01;
	// ¶ÎÂë
	P1 = seg_code[5];
	while(1)
	{
		
	}
	return;
}