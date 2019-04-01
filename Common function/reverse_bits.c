#include <stdio.h>

// Input: 2'[00000101]
//Output: 2'[10100000]

char reverse_8bits(char num)
{
	int i,res;
	for(i=0;i<8;i++)
	{
		res <<=1;
		res |= num&1;
		num >>=1;
		
	}
	return res;
}

signed short reverse_16bits(signed short num)
{
	int i,res;
	for(i=0;i<16;i++)
	{
		res <<=1;
		res |= num&1;
		num >>=1;
		
	}
	return res;
}

signed long reverse_32bits(signed long num)
{
	int i,res;
	for(i=0;i<32;i++)
	{
		res <<=1;
		res |= num&1;
		num >>=1;
		
	}
	return res;
}




int main(void)
{
	int bit8,bit16,bit32;
	bit8 = reverse_8bits(0x55);	
	bit16 = reverse_16bits(0x55);
	bit32 = reverse_32bits(0x55);
	printf("\n8bit=%x\n16bit=%x\n32bit=%x",bit8,bit16,bit32);
}
